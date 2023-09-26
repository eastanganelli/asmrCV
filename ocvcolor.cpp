#include "ocvcolor.h"

ocvColor::ocvColor(QString ColorName, QColor rgb, Scalar HSVlower, Scalar HSVupper) {
    this->ColorName = ColorName;
    this->rgb = rgb;
    this->HSVlower = HSVlower;
    this->HSVupper = HSVupper;
}
void ocvColor::set_HSV(eHSV hsv, Scalar value_hsv) {
    switch(hsv) {
        case lower_: {
            this->HSVlower = value_hsv;
            break;
        }
        case upper_: {
            this->HSVupper = value_hsv;
            break;
        }
    }
}
Scalar ocvColor::get_HSV(eHSV hsv) {
    Scalar aux = {0,0,0};
    switch(hsv){
        case lower_: {
            aux =  this->HSVlower;
            break;
        }
        case upper_: {
            aux = this->HSVupper;
            break;
        }
    } return aux;
}
QVector<Point> ocvColor::get_allPOINTS() {
    return this->trackedPOINTS;
}
void ocvColor::operator+(Point pt) {
    this->trackedPOINTS.insert(this->trackedPOINTS.begin(), pt);
    if(this->trackedPOINTS.size() > BUFFER)
        this->trackedPOINTS.pop_back();
}
