#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->frameRGBselector->setStyleSheet("background-color:rgb(255,255,255);");
    myHSV.hueMIN = 0;
    myHSV.hueMAX = 179;
    myHSV.satMIN = 0;
    myHSV.satMAX = 255;
    myHSV.valMIN = 0;
    myHSV.valMAX = 255;
    //testingValues();

}
void MainWindow::testingValues() {
    ocvColor* testingValue = new ocvColor("Purple", QColor(255,255,0), Scalar(48,32,136), Scalar(149,136,255));
    *myColor+testingValue;
    *myColor<<"Tracking";
    QListWidgetItem* listItem = new QListWidgetItem();
    listItem->setText("Purple");
    ui->listCOLOUR->insertItem(0, listItem);
}
MainWindow::~MainWindow() {
    delete ui;
    delete(this->myColor);
}
void MainWindow::on_btnCOLOURpicker_clicked() {
    selColour = QColorDialog::getColor();
    /*if( selColour.isValid() )
        qDebug() << "Color Choosen : " << selColour.name();*/
    ui->frameRGBselector->setStyleSheet("background-color:"+ selColour.name() +";");
}

#define SLIDERS_HSV_START {
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
#define SLIDER_HSV_END }
#define BTNCOLOR_START {
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
    isListEmpty();
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
    isListEmpty();
}
void MainWindow::on_listCOLOUR_currentRowChanged(int currentRow) {
    pos = new int;
    *pos = currentRow;
}
#define BTNCOLOR_END }
#define TOOLBAR_START {
void MainWindow::on_actionCAM_triggered() {
    cvCAMst = !cvCAMst;
    if(!cvCAMst) {
        ui->actionCAM->setText("CAM ON");
        *myColor<<"Tracking";

        while(!cvCAMst){
            Scalar lower(myHSV.hueMIN, myHSV.satMIN, myHSV.valMIN), upper(myHSV.hueMAX, myHSV.satMAX, myHSV.valMAX);
            myColor->tracking();
        }
        *myColor>>"Tracking";
        ui->actionCAM->setText("CAM OFF");
    }
}
void MainWindow::on_actionHSV_triggered() {
    cvHSVst = !cvHSVst;
    if(!cvHSVst) {
        *myColor<<"HSV_Filtering";
        ui->actionHSV->setText("HSV ON");
        while(!cvHSVst) {
            Scalar upper(myHSV.hueMAX, myHSV.satMAX, myHSV.valMAX), lower(myHSV.hueMIN, myHSV.satMIN, myHSV.valMIN);
            this->myColor->filtering(lower, upper);
        }
        *myColor>>"HSV_Filtering";
        ui->actionHSV->setText("HSV OFF");
    }
}
#define TOOLBAR_END }

void MainWindow::isListEmpty() {
    if(ui->listCOLOUR->count() > 0)
        ui->btnEditColour->setEnabled(true);
    else
        ui->btnEditColour->setEnabled(false);
}
