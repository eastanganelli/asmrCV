#ifndef CERROR_H
#define CERROR_H
#include <QVector>
#include <QMessageBox>
#include <QString>

enum codeERR { warCAM, warHSV, errCAM, errNAMEhsv, errCAMIP };

struct errorFD {
    QString errNAME, errMSG;
    QMessageBox::Button myBtns;
}; typedef struct errorFD sError;

class cError {
    public:
        cError();
        sError msg_report(codeERR code_);
    protected:    
        
    private:
        QVector<sError> ERRORlist;
};

#endif // CERROR_H
