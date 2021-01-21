#include "colortracking.h"

#define TRACKHSV_START {
int ColorTracking::tracking() {
    camFeed->read(umat);
    if(!camFeed->grab() || !camFeed->retrieve(umat) || umat.empty() || !camFeed->isOpened())
        return -1;
    camFeed->read(umat);

    //TRACKING
    GaussianBlur(umat, blurMAT, Size(3,3), 0);
    cvtColor(umat, hsvMAT, COLOR_BGR2HSV);
    //Canny(hsvMAT,maskMAT, 100, 200);
    //getContours();
    subtracker();
    subLinePainting();

    namedWindow("Tracking");
    imshow("Tracking", umat);
    waitKey(25);
    return 0;
}
int ColorTracking::filtering(Scalar lower, Scalar upper) {
    camFeed->read(umat);
    if(!camFeed->grab() || !camFeed->retrieve(umat) || umat.empty() || !camFeed->isOpened())
        return -1;

    GaussianBlur(umat, blurMAT, Size(3, 3), 0);
    cvtColor(blurMAT, hsvMAT, COLOR_BGR2HSV);
    inRange(hsvMAT, lower, upper, maskMAT);
    //Mat kernel = getStructuringElement(MORPH_RECT, Size(10, 10));
    //erode(maskMAT,   erodeMAT,  kernel);
    //dilate(erodeMAT, dilateMAT, kernel);

    namedWindow("HSV_Filtering");
    imshow("HSV_Filtering", maskMAT);
    waitKey(25);
    return 0;
}
#define TRACKHSV_END }
void ColorTracking::subtracker() {
    for(int i = 0; i < myTracking.size(); i++) {
        ocvColor* nowColor = myTracking[i];

        inRange(hsvMAT, nowColor->get_HSV(lower_), nowColor->get_HSV(upper_), maskMAT);
        Mat kernel = getStructuringElement(MORPH_RECT, Size(3,3));
        erode(maskMAT, erodeMAT, kernel);
        dilate(erodeMAT, dilateMAT, kernel);

        Point newPoint = getContours();
        if (newPoint.x != 0 && newPoint.y != 0)
            (*nowColor)+newPoint;
    }
}
void ColorTracking::subLinePainting() {
    for(int i = 0; i < myTracking.size(); i++) {
        ocvColor* nodeColor = myTracking[i];
        Scalar RGBtracked(nodeColor->get_rgb().red(), nodeColor->get_rgb().green(), nodeColor->get_rgb().blue());
        QVector<Point> pts = nodeColor->get_allPOINTS();

        for(int h = 1; h < pts.size(); h++) {
            //circle(umat, pts[h], 5, RGBtracked, 3);

            unsigned int thickness = int(sqrt(BUFFER / float(h + 1)) * 2.5);
            unsigned int prePT = h - 1;
            line(umat, pts[prePT], pts[h], RGBtracked, thickness);
        }
    }
}
Point ColorTracking::getContours() {
    vector<vector<Point>> contours;
    //vector<Vec4i> hierarchy;

    findContours(maskMAT, contours/*, hierarchy*/, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

    vector<vector<Point>> conPoly(contours.size());
    vector<Rect> boundRect(contours.size());

    Point myPoint(0, 0);

    for (int i = 0; i < int(contours.size()); i++) {
        int area = contourArea(contours[i]);
        if (area > 1000) {
            //float peri = arcLength(contours[i], true);
            approxPolyDP(contours[i], conPoly[i], /*0.02 * peri*/2, true);
            boundRect[i] = boundingRect(conPoly[i]);
            myPoint.x = boundRect[i].x + boundRect[i].width / 2;
            myPoint.y = boundRect[i].y;

            //drawContours(umat, conPoly, i, Scalar(255, 0, 255), 2);
            //rectangle(umat, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 5);
            //putText(img, objType, { boundRect[i].x, boundRect[i].y - 5 }, FONT_HERSHEY_PLAIN, 1, Scalar(0, 69, 255), 1);
        }
    } return myPoint;
}

#define OVERLOADING_START {
void ColorTracking::operator<<(QString text) {
    bool repeated = false;
    for(int i = 1; i < this->cvCAMname.size(); i++) {
        if(this->cvCAMname[i] == text) {
            repeated = !repeated;
            return;
        }
    } if(!repeated) this->cvCAMname.append(text);
}
void ColorTracking::operator>>(QString text) {
    for(int i = 0; i < this->cvCAMname.size(); i++) {
        if(this->cvCAMname[i] == text) {
            destroyWindow(this->cvCAMname[i].toStdString());
            this->cvCAMname.removeAt(i);
            break;
        }
    }
}
void ColorTracking::operator+(ocvColor* myColor) {
    bool repeated = false;
    for(int i = 0; i < this->myTracking.size(); i++) {
        if(this->myTracking[i]->get_name() == myColor->get_name()) {
            qDebug() << "Repetido";
            return;
        }
    }
    if(!repeated)
        myTracking.append(myColor);
    qDebug() << "NO Repetido";
}
void ColorTracking::operator-(ocvColor* myColor) {
    for(int i = 0; i < this->myTracking.size(); i++) {
        if(this->myTracking[i]->get_name() == myColor->get_name()) {
            this->myTracking.removeAt(i);
            return;
        }
    }
}
void ColorTracking::operator!=(ocvColor *myColor) {
    this->myTracking[*pos] = myColor;
}
#define OVERLOADING_END }
#define SET_START {

#define SET_END }
#define GET_START {
ocvColor* ColorTracking::get_ocvColor(int* pos) {
    ocvColor* retColor = myTracking[*pos];
    this->pos = pos;
    return  retColor;
}
#define GET_END }
