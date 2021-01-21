#ifndef DIALOGCAMERAS_H
#define DIALOGCAMERAS_H

#include <QDialog>

namespace Ui {
class DialogCameras;
}

class DialogCameras : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCameras(QWidget *parent = nullptr);
    ~DialogCameras();

private:
    Ui::DialogCameras *ui;
};

#endif // DIALOGCAMERAS_H
