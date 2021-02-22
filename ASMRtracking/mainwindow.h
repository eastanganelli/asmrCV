#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#define QTLIBS_START {
#include <QMainWindow>
#include <QDebug>
#include <QColorDialog>
#include <QPalette>
#include <QLabel>
#include <QList>
#include <QVector>
#include <QListWidgetItem>
#include <QMessageBox>
#define QTLIBS_END }
#define CPP_START {
#include <iostream>
#include <fstream>
#define CPP_END }
#define MYLIB_START {
#include <colortracking.h>
#include <ocvcolor.h>
#include <pcamera.h>
#include <hwcam.h>
#include <cerror.h>
#include <iodata.h>
#define MYLIB_END }
#define OPENCV_START {
#include <opencv2/imgcodecs.hpp>
#define OPENCV_END }
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

using namespace cv;

enum listCheck { lsCAM, lsHSV };

struct hsv {
    int hueMIN, satMIN, valMIN;
    int hueMAX, satMAX, valMAX;
}; typedef struct hsv shsv;

class MainWindow : public QMainWindow, private cError {
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

        QVector<pCamera> CAMenables;
        void setCAMERASenables(QVector<pCamera> inputCAMS) {
            this->CAMenables = inputCAMS;
        }

    private slots:
        #define CAMERAS_START {
            //BTNs
            void on_btnCAMfind_clicked();
            void on_btnCAMpreview_clicked();
            void on_btnCAMadd_clicked();
            void on_btnCAMremove_clicked();
            void on_listCAMERAS_itemClicked(QListWidgetItem *item);
        #define CAMERAS_END }
        #define HSVFILTER_START {
            //SLIDERs
            void on_sliderHUEmin_valueChanged(int value);
            void on_sliderHUEmax_valueChanged(int value);
            void on_sliderSATmin_valueChanged(int value);
            void on_sliderSATmax_valueChanged(int value);
            void on_sliderVALmin_valueChanged(int value);
            void on_sliderVALmax_valueChanged(int value);
            //BTNs
            void on_btnAddColour_clicked();
            void on_btnRmColour_clicked();
            void on_btnEditColour_clicked();
            void on_btnCOLOURpicker_clicked();
            void on_btnHSVpreview_clicked();

            void on_listCOLOUR_itemClicked(QListWidgetItem *item);
        #define HSVFILTER_END }
        #define COLORTRACK_START {
            void on_btnCAMchroma_clicked();
            void on_btnTRACKING_clicked();
        #define COLORTRACK_END }
    private:
        //FUNCTIONS
            void isListEmpty(listCheck list_);
            void testingValues();
        //VARIABLES
            Ui::MainWindow *ui;

            cError msg_box;

            bool cvPREst = true;
            bool cvCAMst = true;
            bool cvHSVst = true;
            shsv myHSV;
            QVector<pCamera*> camenables;
        //tempsVars
            QColor selColour;
            QString selName;

            ColorTracking* myColor = new ColorTracking();

            int* pos;
            int* CAMselected;
            bool editable = false;
};
#endif // MAINWINDOW_H
