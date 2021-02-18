#ifndef IPCAM_H
#define IPCAM_H
#include <QString>
#include <pcamera.h>

class ipcam : public pCamera {

    public:
        ipcam(QString ip_) {
            this->CAMip = ip_;
        }
        QString get_camera() {
            return this->CAMip;
        }
        int type_cam() {
            return ip_;
        }
        void set_camera(QString camINPUT) {
            this->CAMip = camINPUT;
        }
    private:
        QString CAMip;
};
#endif // IPCAM_H
