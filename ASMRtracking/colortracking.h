#ifndef COLORTRACKING_H
#define COLORTRACKING_H
#define QTLIBS_START {
#include <QString>
#include <QColor>
#include <QVector>
#include <QDebug>
#include <QtNetwork>
#include <QMessageBox>
#define QTLIBS_END }
#include <vector>
#include <ocvcolor.h>
#define OPENCV_START {
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core/ocl.hpp>
#define OPENCV_END }
#include <pcamera.h>
#include <hwcam.h>
#include <ipcam.h>
/*
#define DROIDCAM  "http://192.168.0.144:4747/video"
#define IPCAM     "http://192.168.0.144:8080/video"
#define IPCAM2    "http://192.168.137.7:8080/video"
*/

using namespace std;
using namespace cv;

enum trackingOp { chromaTrk, Trk };

class ColorTracking {
    public:
        //FUNCTIONS
            ColorTracking() {
                //camFeed->set(CAP_PROP_FRAME_COUNT, 25);
                ocl::setUseOpenCL(true);
                ocl::useOpenCL();
                //ocl::Device::TYPE_DGPU;
            }
            ~ColorTracking() {
                while(this->cvCAMname.size() > 0) {
                    String winName = this->cvCAMname.first().toStdString();
                    this->cvCAMname.pop_front();
                    destroyWindow(winName);
                }
                this->cvCAMname.clear();
                this->myTracking.clear();
                delete(this->pos);
            }
            bool clearTrackPoints();
            #define TRACKHSV_START {
            int tracking();
            int chromaTracking();
            int filtering(Scalar lower, Scalar upper);
            int previewcam();
            #define TRACKHSV_END }
                void subtracker();
                void subLinePainting(trackingOp trkST);
                Point getContours();
                void close_CAM(QString camNAME) {
                destroyWindow(camNAME.toStdString());
            }
            #define SET_START {
                bool set_VIDEOCAP(pCamera* myCAM) {
                    switch(myCAM->type_cam()) {
                        case hw_: {
                            this->camFeed = new VideoCapture(dynamic_cast<hwcam*>(myCAM)->get_camera());
                            break;
                        }
                        case ip_: {
                            QString strIP = dynamic_cast<ipcam*>(myCAM)->get_camera();
                            this->camFeed = new VideoCapture(strIP.toStdString());
                            break;
                        }
                    }
                    if(!this->camFeed->isOpened()) return true;
                    return false;
                }
                void set_cameras(QVector<ocvColor*> Trackings) {
                    this->myTracking = Trackings;
                }
            #define SET_END }
            #define GET_START {
                QVector<ocvColor*> get_ocvColors() {
                    return this->myTracking;
                }
            #define GET_END }
            #define OVERLOADING_START {
                void operator<<(QString text);
                void operator>>(QString text);
                void operator+(ocvColor* myColor);
                void operator-(ocvColor* myColor);
                ocvColor* operator[](int* remPos);
            #define OVERLOADING_END }

        //VARIABLES

    private:
        //FUNCTIONS
            bool urlExists(QString url_string);
        //VARIABLES
            int* pos = 0;
            QVector<ocvColor*> myTracking;
            QVector<QString>   cvCAMname;
            VideoCapture* camFeed = nullptr;
            UMat umat, hsvMAT, blurMAT, maskMAT, erodeMAT, dilateMAT, chrTrk;
};
#endif // COLORTRACKING_H
