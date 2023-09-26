#include "cerror.h"

cError::cError() {
    ERRORlist = {
        { "WARNING CAMERA", "None CAMERA selected",    QMessageBox::Ok },
        { "WARNING HSV", "None HSV Filter selected",   QMessageBox::Ok },
        { "ERROR CAMERA", "Unable to use/open CAMERA", QMessageBox::Ok },
        { "ERROR HSV", "HSV Name is empty!",           QMessageBox::Ok },
        { "ERROR CAMERA", "CAM IP is empty!",          QMessageBox::Ok }
    };
}
sError cError::msg_report(codeERR code_) {
    sError msgBOX;
    msgBOX.errNAME = ERRORlist[code_].errNAME;
    msgBOX.errMSG  = ERRORlist[code_].errMSG;
    msgBOX.myBtns  = ERRORlist[code_].myBtns;
    return msgBOX;
}
