#include "dialogcameras.h"
#include "ui_dialogcameras.h"

DialogCameras::DialogCameras(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCameras)
{
    ui->setupUi(this);
}

DialogCameras::~DialogCameras()
{
    delete ui;
}
