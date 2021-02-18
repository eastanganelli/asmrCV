#ifndef HWCAM_H
#define HWCAM_H
#include <pcamera.h>

class hwcam: public pCamera {
    public:
        hwcam(int id) {
            this->camID = id;
        }
        int get_camera() {
            return this->camID;
        }
        int type_cam() {
            return hw_;
        }
        void set_camera(int camINPUT) {
            this->camID = camINPUT;
        }
    private:
        int camID;
};

#endif // HWCAM_H
