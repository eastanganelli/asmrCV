/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCAM;
    QAction *actionHSV;
    QAction *actionFIND_CAMERAS;
    QWidget *centralwidget;
    QFrame *frameHSV;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *layoutSliderMin;
    QSlider *sliderHUEmin;
    QSlider *sliderSATmin;
    QSlider *sliderVALmin;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *LayoutSliderMax;
    QSlider *sliderHUEmax;
    QSlider *sliderSATmax;
    QSlider *sliderVALmax;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *layoutLBLmin;
    QLabel *lblHUEmin;
    QLabel *lblSATmin;
    QLabel *lblVALmin;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *layoutLBLmax;
    QLabel *lblHUEmax;
    QLabel *lblSATmax;
    QLabel *lblVALmax;
    QLabel *lblHSV;
    QLabel *lblRGB;
    QPushButton *btnCOLOURpicker;
    QFrame *frameRGBselector;
    QPushButton *btnAddColour;
    QPushButton *btnRmColour;
    QListWidget *listCOLOUR;
    QLabel *lblRGBname;
    QLineEdit *txtNAMEcolour;
    QPushButton *btnEditColour;
    QLabel *lblCOLOURlist;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(779, 462);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        actionCAM = new QAction(MainWindow);
        actionCAM->setObjectName(QString::fromUtf8("actionCAM"));
        actionHSV = new QAction(MainWindow);
        actionHSV->setObjectName(QString::fromUtf8("actionHSV"));
        actionFIND_CAMERAS = new QAction(MainWindow);
        actionFIND_CAMERAS->setObjectName(QString::fromUtf8("actionFIND_CAMERAS"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frameHSV = new QFrame(centralwidget);
        frameHSV->setObjectName(QString::fromUtf8("frameHSV"));
        frameHSV->setGeometry(QRect(9, 40, 511, 91));
        frameHSV->setFrameShape(QFrame::Box);
        frameHSV->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget = new QWidget(frameHSV);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(140, 0, 131, 91));
        layoutSliderMin = new QVBoxLayout(verticalLayoutWidget);
        layoutSliderMin->setObjectName(QString::fromUtf8("layoutSliderMin"));
        layoutSliderMin->setContentsMargins(0, 0, 0, 0);
        sliderHUEmin = new QSlider(verticalLayoutWidget);
        sliderHUEmin->setObjectName(QString::fromUtf8("sliderHUEmin"));
        sliderHUEmin->setMaximum(179);
        sliderHUEmin->setOrientation(Qt::Horizontal);

        layoutSliderMin->addWidget(sliderHUEmin);

        sliderSATmin = new QSlider(verticalLayoutWidget);
        sliderSATmin->setObjectName(QString::fromUtf8("sliderSATmin"));
        sliderSATmin->setMaximum(255);
        sliderSATmin->setOrientation(Qt::Horizontal);

        layoutSliderMin->addWidget(sliderSATmin);

        sliderVALmin = new QSlider(verticalLayoutWidget);
        sliderVALmin->setObjectName(QString::fromUtf8("sliderVALmin"));
        sliderVALmin->setMaximum(255);
        sliderVALmin->setOrientation(Qt::Horizontal);

        layoutSliderMin->addWidget(sliderVALmin);

        verticalLayoutWidget_2 = new QWidget(frameHSV);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(370, 0, 131, 91));
        LayoutSliderMax = new QVBoxLayout(verticalLayoutWidget_2);
        LayoutSliderMax->setObjectName(QString::fromUtf8("LayoutSliderMax"));
        LayoutSliderMax->setContentsMargins(0, 0, 0, 0);
        sliderHUEmax = new QSlider(verticalLayoutWidget_2);
        sliderHUEmax->setObjectName(QString::fromUtf8("sliderHUEmax"));
        sliderHUEmax->setMaximum(179);
        sliderHUEmax->setSingleStep(1);
        sliderHUEmax->setValue(179);
        sliderHUEmax->setOrientation(Qt::Horizontal);

        LayoutSliderMax->addWidget(sliderHUEmax);

        sliderSATmax = new QSlider(verticalLayoutWidget_2);
        sliderSATmax->setObjectName(QString::fromUtf8("sliderSATmax"));
        sliderSATmax->setMaximum(255);
        sliderSATmax->setValue(255);
        sliderSATmax->setOrientation(Qt::Horizontal);

        LayoutSliderMax->addWidget(sliderSATmax);

        sliderVALmax = new QSlider(verticalLayoutWidget_2);
        sliderVALmax->setObjectName(QString::fromUtf8("sliderVALmax"));
        sliderVALmax->setMaximum(255);
        sliderVALmax->setValue(255);
        sliderVALmax->setOrientation(Qt::Horizontal);

        LayoutSliderMax->addWidget(sliderVALmax);

        verticalLayoutWidget_3 = new QWidget(frameHSV);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 0, 121, 91));
        layoutLBLmin = new QVBoxLayout(verticalLayoutWidget_3);
        layoutLBLmin->setObjectName(QString::fromUtf8("layoutLBLmin"));
        layoutLBLmin->setContentsMargins(0, 0, 0, 0);
        lblHUEmin = new QLabel(verticalLayoutWidget_3);
        lblHUEmin->setObjectName(QString::fromUtf8("lblHUEmin"));

        layoutLBLmin->addWidget(lblHUEmin);

        lblSATmin = new QLabel(verticalLayoutWidget_3);
        lblSATmin->setObjectName(QString::fromUtf8("lblSATmin"));

        layoutLBLmin->addWidget(lblSATmin);

        lblVALmin = new QLabel(verticalLayoutWidget_3);
        lblVALmin->setObjectName(QString::fromUtf8("lblVALmin"));

        layoutLBLmin->addWidget(lblVALmin);

        verticalLayoutWidget_4 = new QWidget(frameHSV);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(300, 0, 61, 91));
        layoutLBLmax = new QVBoxLayout(verticalLayoutWidget_4);
        layoutLBLmax->setObjectName(QString::fromUtf8("layoutLBLmax"));
        layoutLBLmax->setContentsMargins(0, 0, 0, 0);
        lblHUEmax = new QLabel(verticalLayoutWidget_4);
        lblHUEmax->setObjectName(QString::fromUtf8("lblHUEmax"));

        layoutLBLmax->addWidget(lblHUEmax);

        lblSATmax = new QLabel(verticalLayoutWidget_4);
        lblSATmax->setObjectName(QString::fromUtf8("lblSATmax"));

        layoutLBLmax->addWidget(lblSATmax);

        lblVALmax = new QLabel(verticalLayoutWidget_4);
        lblVALmax->setObjectName(QString::fromUtf8("lblVALmax"));

        layoutLBLmax->addWidget(lblVALmax);

        lblHSV = new QLabel(centralwidget);
        lblHSV->setObjectName(QString::fromUtf8("lblHSV"));
        lblHSV->setGeometry(QRect(20, 10, 111, 21));
        QFont font;
        font.setPointSize(16);
        lblHSV->setFont(font);
        lblHSV->setTextFormat(Qt::PlainText);
        lblRGB = new QLabel(centralwidget);
        lblRGB->setObjectName(QString::fromUtf8("lblRGB"));
        lblRGB->setGeometry(QRect(20, 160, 131, 21));
        lblRGB->setFont(font);
        lblRGB->setTextFormat(Qt::PlainText);
        btnCOLOURpicker = new QPushButton(centralwidget);
        btnCOLOURpicker->setObjectName(QString::fromUtf8("btnCOLOURpicker"));
        btnCOLOURpicker->setGeometry(QRect(160, 210, 81, 61));
        frameRGBselector = new QFrame(centralwidget);
        frameRGBselector->setObjectName(QString::fromUtf8("frameRGBselector"));
        frameRGBselector->setGeometry(QRect(20, 200, 120, 80));
        frameRGBselector->setFrameShape(QFrame::StyledPanel);
        frameRGBselector->setFrameShadow(QFrame::Raised);
        btnAddColour = new QPushButton(centralwidget);
        btnAddColour->setObjectName(QString::fromUtf8("btnAddColour"));
        btnAddColour->setGeometry(QRect(530, 330, 61, 41));
        btnRmColour = new QPushButton(centralwidget);
        btnRmColour->setObjectName(QString::fromUtf8("btnRmColour"));
        btnRmColour->setGeometry(QRect(690, 330, 61, 41));
        listCOLOUR = new QListWidget(centralwidget);
        listCOLOUR->setObjectName(QString::fromUtf8("listCOLOUR"));
        listCOLOUR->setGeometry(QRect(530, 40, 221, 281));
        lblRGBname = new QLabel(centralwidget);
        lblRGBname->setObjectName(QString::fromUtf8("lblRGBname"));
        lblRGBname->setGeometry(QRect(310, 160, 111, 21));
        lblRGBname->setFont(font);
        lblRGBname->setTextFormat(Qt::PlainText);
        txtNAMEcolour = new QLineEdit(centralwidget);
        txtNAMEcolour->setObjectName(QString::fromUtf8("txtNAMEcolour"));
        txtNAMEcolour->setGeometry(QRect(310, 220, 131, 41));
        QFont font1;
        font1.setPointSize(14);
        txtNAMEcolour->setFont(font1);
        btnEditColour = new QPushButton(centralwidget);
        btnEditColour->setObjectName(QString::fromUtf8("btnEditColour"));
        btnEditColour->setGeometry(QRect(610, 330, 61, 41));
        lblCOLOURlist = new QLabel(centralwidget);
        lblCOLOURlist->setObjectName(QString::fromUtf8("lblCOLOURlist"));
        lblCOLOURlist->setGeometry(QRect(530, 10, 111, 21));
        lblCOLOURlist->setFont(font);
        lblCOLOURlist->setTextFormat(Qt::PlainText);
        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionFIND_CAMERAS);
        toolBar->addAction(actionCAM);
        toolBar->addAction(actionHSV);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "OpenCV MewTracking", nullptr));
        actionCAM->setText(QCoreApplication::translate("MainWindow", "CAM OFF", nullptr));
#if QT_CONFIG(tooltip)
        actionCAM->setToolTip(QCoreApplication::translate("MainWindow", "CAM OFF", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHSV->setText(QCoreApplication::translate("MainWindow", "HSV OFF", nullptr));
#if QT_CONFIG(tooltip)
        actionHSV->setToolTip(QCoreApplication::translate("MainWindow", "HSV OFF", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFIND_CAMERAS->setText(QCoreApplication::translate("MainWindow", "FIND CAMERAS", nullptr));
#if QT_CONFIG(tooltip)
        actionFIND_CAMERAS->setToolTip(QCoreApplication::translate("MainWindow", "FIND CAMERAS", nullptr));
#endif // QT_CONFIG(tooltip)
        lblHUEmin->setText(QCoreApplication::translate("MainWindow", "HUE >> MIN: 0", nullptr));
        lblSATmin->setText(QCoreApplication::translate("MainWindow", "SAT >> MIN: 0", nullptr));
        lblVALmin->setText(QCoreApplication::translate("MainWindow", "VAL >> MIN: 0", nullptr));
        lblHUEmax->setText(QCoreApplication::translate("MainWindow", "MAX: 179", nullptr));
        lblSATmax->setText(QCoreApplication::translate("MainWindow", "MAX: 255", nullptr));
        lblVALmax->setText(QCoreApplication::translate("MainWindow", "MAX: 255", nullptr));
        lblHSV->setText(QCoreApplication::translate("MainWindow", "HSV Filter", nullptr));
        lblRGB->setText(QCoreApplication::translate("MainWindow", "RGB Selector", nullptr));
        btnCOLOURpicker->setText(QCoreApplication::translate("MainWindow", "Select Colour", nullptr));
        btnAddColour->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        btnRmColour->setText(QCoreApplication::translate("MainWindow", "REMOVE", nullptr));
        lblRGBname->setText(QCoreApplication::translate("MainWindow", "RGB Name", nullptr));
        btnEditColour->setText(QCoreApplication::translate("MainWindow", "EDIT", nullptr));
        lblCOLOURlist->setText(QCoreApplication::translate("MainWindow", "Colour List", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
