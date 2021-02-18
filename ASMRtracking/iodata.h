#ifndef IODATA_H
#define IODATA_H
#include <QSettings>
#include <QVector>
#include <QString>
#include <QColor>
#include <QVariant>
#include <opencv2/imgcodecs.hpp>

struct HSVcolor {
    QString name;
    QColor color;
    cv::Scalar hsvUPPER, hsvLOWER;
}; typedef struct HSVcolor sHSVcolor;

class iodata {
    public:
        iodata();
        //CAMS
        void save_ips(QVector<QString> ips);
        void save_ip(QString ip, int id);
        QVector<QString> get_ips();
        QString get_ip(int id);
        void remove_ips();
        void remove_ip(int id);
        //HSVS
        void save_hsvs(QVector<sHSVcolor> hsvcolor);
        void save_hsv(sHSVcolor hsvcolor, int id);
        QVector<sHSVcolor> get_HSVcolors();
        sHSVcolor get_HSVcolor(int id);
    private:
        QSettings mySettings;

};

#endif // IODATA_H
