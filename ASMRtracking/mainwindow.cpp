#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    //QCoreApplication::setOrganizationName("PofBattousai");
    //QCoreApplication::setApplicationName("ASMR Tracking");
    ui->setupUi(this);
    ui->frameRGBselector->setStyleSheet("background-color:rgb(255,255,255);");
    myHSV.hueMIN = 0;
    myHSV.hueMAX = 179;
    myHSV.satMIN = 0;
    myHSV.satMAX = 255;
    myHSV.valMIN = 0;
    myHSV.valMAX = 255;

}
MainWindow::~MainWindow() {
    delete ui;
    delete(this->myColor);
}
#define CAMERAS_START {
void MainWindow::on_btnCAMfind_clicked() {
    VideoCapture* testingCameras = nullptr;

    for(int i = 0; i < 10; i++) {
        testingCameras = new VideoCapture(i);
        if(!testingCameras->isOpened()) {
            hwcam* cam = new hwcam(i);
            camenables.append(cam);
        } delete(testingCameras);
    }
}
void MainWindow::on_btnCAMpreview_clicked() {
    if(CAMselected == NULL) {
        sError auxBOX = msg_report(warCAM);
        QMessageBox::warning(this, auxBOX.errNAME, auxBOX.errNAME, auxBOX.myBtns);
        return;
    }
    cvPREst = !cvPREst;
    if(!cvPREst) {
        //ui->tabHSV->setEnabled(false);
        myColor->set_VIDEOCAP(this->camenables[*CAMselected]);
        ui->btnCAMpreview->setText("Preview ON");
        *myColor<<"Preview";

        while(!cvPREst){
            myColor->previewcam();
        }
        *myColor>>"Preview";
        ui->btnCAMpreview->setText("Preview OFF");
        //ui->tabHSV->setEnabled(true);
    }
}
void MainWindow::on_btnCAMadd_clicked() {
    QString txtIN = ui->txtIPCAMinput->text();
    if(!txtIN.isEmpty()) {
        QListWidgetItem* item_ = new QListWidgetItem();
        item_->setText(txtIN);

        ipcam* myIPCAM = new ipcam(txtIN);


        camenables.append(myIPCAM);
        ui->listCAMERAS->insertItem(0, item_);
        isListEmpty(lsCAM);
    } else {
        sError auxBOX = msg_report(errCAMIP);
        QMessageBox::warning(this, auxBOX.errNAME, auxBOX.errMSG, auxBOX.myBtns);
    }
}
void MainWindow::on_btnCAMremove_clicked() {
    QList<QListWidgetItem*> items = ui->listCAMERAS->selectedItems();
    foreach(QListWidgetItem* item, items)
        delete ui->listCAMERAS->takeItem(ui->listCAMERAS->row(item));
    isListEmpty(lsHSV);
}
void MainWindow::on_listCAMERAS_itemClicked(QListWidgetItem *item) {
    CAMselected = new int;
    *CAMselected = ui->listCAMERAS->row(item);
    qDebug() << *CAMselected;
}
#define CAMERAS_END }
#define HSVFILTER_START {
void MainWindow::on_sliderHUEmin_valueChanged(int value) {
    myHSV.hueMIN = value;
    ui->lblHUEmin->setText("HUE >> MIN: " + QString::number(value));
}
void MainWindow::on_sliderHUEmax_valueChanged(int value) {
    myHSV.hueMAX = value;
    ui->lblHUEmax->setText("MAX: " + QString::number(value));
}
void MainWindow::on_sliderSATmin_valueChanged(int value) {
    myHSV.satMIN = value;
    ui->lblSATmin->setText("SAT >> MIN: " + QString::number(value));
}
void MainWindow::on_sliderSATmax_valueChanged(int value) {
    myHSV.satMAX = value;
    ui->lblSATmax->setText("MAX: " + QString::number(value));
}
void MainWindow::on_sliderVALmin_valueChanged(int value) {
    myHSV.valMIN = value;
    ui->lblVALmin->setText("VAL >> MIN: " + QString::number(value));
}
void MainWindow::on_sliderVALmax_valueChanged(int value) {
    myHSV.valMAX = value;
    ui->lblVALmax->setText("MAX: " + QString::number(value));
}
void MainWindow::on_btnAddColour_clicked() {
    QString NameColor = ui->txtNAMEcolour->text();
    Scalar upper(myHSV.hueMAX, myHSV.satMAX, myHSV.valMAX), lower(myHSV.hueMIN, myHSV.satMIN, myHSV.valMIN);
    ocvColor* colorAUX = new ocvColor(NameColor, selColour, lower, upper);

    QList<QListWidgetItem*> auxItem = ui->listCOLOUR->findItems(NameColor, Qt::MatchExactly);

    if(auxItem.size() == 0) {
        (*myColor)+colorAUX;

        QListWidgetItem* listItem = new QListWidgetItem();
        listItem->setText(NameColor);
        ui->listCOLOUR->insertItem(0, listItem);
    } else
        delete(colorAUX);
    isListEmpty(lsHSV);
}
void MainWindow::on_btnEditColour_clicked() {
    ocvColor* itemColour = myColor->get_ocvColor(pos);
    Scalar hsvUpper = itemColour->get_HSV(upper_), hsvLower = itemColour->get_HSV(lower_);
    if(!editable) {
        ui->txtNAMEcolour->setText(itemColour->get_name());
        { //EDIT_TextInput
            ui->listCOLOUR->setEnabled(false);
            ui->btnAddColour->setEnabled(false);
        }

        { //EDIT_Sliders
            ui->sliderHUEmin->setValue(hsvLower[0]);
            myHSV.hueMIN = hsvLower[0];
            ui->sliderHUEmax->setValue(hsvUpper[0]);
            myHSV.hueMAX = hsvUpper[0];
            ui->lblHUEmin->setText("HUE >> MIN: " + QString::number(hsvLower[0]));
            ui->lblHUEmax->setText("MAX: " + QString::number(hsvUpper[0]));
            ui->sliderSATmin->setValue(hsvLower[1]);
            myHSV.satMIN = hsvLower[1];
            ui->sliderSATmin->setValue(hsvUpper[1]);
            myHSV.satMAX = hsvUpper[1];
            ui->lblSATmin->setText("SAT >> MIN: " + QString::number(hsvLower[1]));
            ui->lblSATmax->setText("MAX: " + QString::number(hsvUpper[1]));
            ui->sliderVALmin->setValue(hsvLower[2]);
            myHSV.valMIN = hsvLower[2];
            ui->sliderVALmin->setValue(hsvUpper[2]);
            myHSV.valMAX = hsvUpper[2];
            ui->lblVALmin->setText("VAL >> MIN: " + QString::number(hsvLower[2]));
            ui->lblVALmax->setText("MAX: " + QString::number(hsvUpper[2]));
        }

        { //EDIT_ColourPicker
            selColour = itemColour->get_rgb();
            ui->frameRGBselector->setStyleSheet("background-color:"+ selColour.name() +";");
        }
        qDebug() << "Colour EDITION open";

    } else {
        QString txtChange = ui->txtNAMEcolour->text();
        if(txtChange != itemColour->get_name())
            itemColour->set_name(txtChange);
        if(selColour != itemColour->get_rgb())
            itemColour->set_rgb(selColour);
        if(hsvUpper != itemColour->get_HSV(upper_))
        hsvUpper = Scalar(myHSV.hueMAX, myHSV.satMAX, myHSV.valMAX);
        if(hsvUpper != itemColour->get_HSV(upper_))
            itemColour->set_HSV(upper_, hsvUpper);
        hsvLower = Scalar(myHSV.hueMIN, myHSV.satMIN, myHSV.valMIN);
        if(hsvLower != itemColour->get_HSV(lower_))
            itemColour->set_HSV(upper_, hsvLower);
        *myColor!=itemColour;

        QList<QListWidgetItem*> items = ui->listCOLOUR->selectedItems();
        foreach(QListWidgetItem* item, items)
            item->setText(txtChange);
        qDebug() << "Colour WAS Edited";
        ui->listCOLOUR->setEnabled(true);
        ui->btnAddColour->setEnabled(true);

    }
    editable = !editable;
}
void MainWindow::on_btnRmColour_clicked() {
    QList<QListWidgetItem*> items = ui->listCOLOUR->selectedItems();
    foreach(QListWidgetItem* item, items)
        delete ui->listCOLOUR->takeItem(ui->listCOLOUR->row(item));
    if(editable) {
        editable = !editable;
        ui->listCOLOUR->setEnabled(true);
        ui->btnAddColour->setEnabled(true);
    }
    isListEmpty(lsHSV);
}
void MainWindow::on_btnCOLOURpicker_clicked() {
    selColour = QColorDialog::getColor();
    /*if( selColour.isValid() )
        qDebug() << "Color Choosen : " << selColour.name();*/
    ui->frameRGBselector->setStyleSheet("background-color:"+ selColour.name() +";");
}
void MainWindow::on_btnHSVpreview_clicked() {
    if(pos == NULL) {
        sError auxBOX = msg_report(warHSV);
        QMessageBox::warning(this, auxBOX.errNAME, auxBOX.errNAME, auxBOX.myBtns);
        return;
    }
    cvHSVst = !cvHSVst;
    if(!cvHSVst) {
        myColor->set_VIDEOCAP(this->camenables[*CAMselected]);
        ui->tabTRACKING->setEnabled(false);
        ui->btnHSVpreview->setText("Preview ON");
        *myColor<<"HSV_Filtering";
        while(!cvHSVst) {
            Scalar upper(myHSV.hueMAX, myHSV.satMAX, myHSV.valMAX), lower(myHSV.hueMIN, myHSV.satMIN, myHSV.valMIN);
            this->myColor->filtering(lower, upper);
        }
        ui->tabTRACKING->setEnabled(true);
        ui->btnHSVpreview->setText("Preview OFF");
        *myColor>>"HSV_Filtering";
    }
}
void MainWindow::on_listCOLOUR_itemClicked(QListWidgetItem *item) {
    pos = new int;
    *pos = ui->listCOLOUR->row(item);
    qDebug() << *pos;
}
#define HSVFILTER_END }
void MainWindow::isListEmpty(listCheck list_) {
    switch(list_) {
        case lsCAM: {
            if(ui->listCAMERAS->count() > 0) {
                ui->btnCAMpreview->setEnabled(true);
                ui->btnHSVpreview->setEnabled(true);
            } else {
                ui->btnCAMpreview->setEnabled(false);
                ui->btnHSVpreview->setEnabled(false);
            }
            break;
        }
        case lsHSV: {
            if(ui->listCOLOUR->count() > 0){
                ui->btnEditColour->setEnabled(true);
            }else
                ui->btnEditColour->setEnabled(false);
            break;
        }
    }
    if(ui->listCAMERAS->count() > 0 && ui->listCOLOUR->count() > 0)
        ui->tabTRACKING->setEnabled(true);
    else
        ui->tabTRACKING->setEnabled(false);
}


void MainWindow::on_btnCAMchroma_clicked()
{

}

void MainWindow::on_btnTRACKING_clicked()
{

}
