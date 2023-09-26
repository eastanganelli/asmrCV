#ifndef PCAMERA_H
#define PCAMERA_H
#include <QString>

using namespace std;

enum typeCAM { ip_, hw_ };

class pCamera {
    public:
        pCamera() {  }
        virtual int type_cam() { return 0; };
};

#endif // PCAMERA_H
