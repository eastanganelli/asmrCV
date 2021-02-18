#ifndef OCVCOLOR_H
#define OCVCOLOR_H
#include <QString>
#include <QVector>
#include <QColor>
#define OPENCV_START {
#include <opencv2/imgcodecs.hpp>
#define OPENCV_END }

#define BUFFER 32

enum eHSV      { lower_, upper_ };
enum eHSVlower { huemin, satmin, valmin };
enum eHSVupper { huemax, satmax, valmax };

using namespace cv;

class ocvColor {
    public:
        ocvColor(QString name, QColor rgb, Scalar HSVlower, Scalar HSVupper);
        ~ocvColor() {}
        #define SET_START {
            void set_name(QString name) {
                this->ColorName = name;
            }
            void set_rgb(QColor color) {
                this->rgb = color;
            }
            void set_HSV(eHSV hsv, Scalar value_hsv);
        #define SET_END }
        #define GET_START {
            QString get_name() {
                return ColorName;
            }
            QColor get_rgb() {
                return this->rgb;
            }
            Scalar get_HSV(eHSV hsv);
            QVector<Point> get_allPOINTS();
        #define GET_END }
        #define OVERLOADING_START {
            void operator+(Point pt);
        #define OVERLOADING_END }
    private:
        //VARIABLES
            QString ColorName;
            QColor rgb;
            Scalar HSVlower;
            Scalar HSVupper;
            QVector<Point> trackedPOINTS;
};
#endif // OCVCOLOR_H
