#ifndef IODATA_H
#define IODATA_H
#include <QSettings>
#include <QVector>
#include <QString>
#include <QColor>
#include <QVariant>
#include <opencv2/imgcodecs.hpp>
#include <pcamera.h>
#include <ipcam.h>
#include <ocvcolor.h>

class iodata {
    public:
        iodata();
        int clearFile() {
            this->mySettings->clear();
            return -1;
        }
        //CAMS
        void save_ips(QVector<pCamera*> ips);
        void save_ip(ipcam* ip, pCamera* ipDel);
        QVector<pCamera*> get_ips();
        ipcam* get_ip(int id);
        /*void remove_ips();
        void remove_ip(pCamera* ip);*/
        int  get_ip_id(pCamera* node);
        //HSVS
        void save_hsvs(QVector<ocvColor*> myColors);
        void save_hsv(ocvColor* myColor, int id);
        QVector<ocvColor*> get_HSVcolors();
        ocvColor* get_HSVcolor(int id);
        /*void remove_colors();
        void remove_color(ocvColor* remColor);*/
        int get_color_id(ocvColor* node);
    private:
        QSettings* mySettings = nullptr;

};

#endif // IODATA_H
