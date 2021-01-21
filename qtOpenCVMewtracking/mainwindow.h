#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#define QTLIBS_START {
#include <QMainWindow>
#include <QDebug>
#include <QColorDialog>
#include <QPalette>
#include <QLabel>
#include <QList>
#define QTLIBS_END }
#define CPP_START {
#include <iostream>
#define CPP_END }
#define MYLIB_START {
#include <colortracking.h>
#include <ocvcolor.h>
#define MYLIB_END }
#define OPENCV_START {
#include <opencv2/imgcodecs.hpp>
#define OPENCV_END }
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

using namespace cv;

struct hsv {
    int hueMIN, satMIN, valMIN;
    int hueMAX, satMAX, valMAX;
}; typedef struct hsv shsv ;

class MainWindow : public QMainWindow {
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    private slots:
        void on_btnCOLOURpicker_clicked();

        #define SLIDERS_START {
            void on_sliderHUEmin_valueChanged(int value);
            void on_sliderHUEmax_valueChanged(int value);
            void on_sliderSATmin_valueChanged(int value);
            void on_sliderSATmax_valueChanged(int value);
            void on_sliderVALmin_valueChanged(int value);
            void on_sliderVALmax_valueChanged(int value);
        #define SLIDERS_END }
        #define LIST_START {
            void on_btnAddColour_clicked();
            void on_btnRmColour_clicked();
            void on_btnEditColour_clicked();
            void on_listCOLOUR_currentRowChanged(int currentRow);
        #define LIST_END }
        #define TOOLBAR_STAR {
            void on_actionCAM_triggered(); //Open Camera  if is available
            void on_actionHSV_triggered(); //Open HSV CAM if is available
        #define TOOLBAR_END }
    private:
        //FUNCTIONS
            void isListEmpty();
            void testingValues();
        //VARIABLES
            Ui::MainWindow *ui;
            bool cvCAMst = true;
            bool cvHSVst = true;
            shsv myHSV;
        //tempsVars
            QColor selColour;
            QString selName;

            ColorTracking* myColor = new ColorTracking();

            int* pos;
            bool editable = false;
};
#endif // MAINWINDOW_H
