/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabCONTROLLER;
    QWidget *tabCAMS;
    QGroupBox *gbCAMERAS;
    QListWidget *listCAMERAS;
    QPushButton *btnCAMremove;
    QPushButton *btnCAMpreview;
    QPushButton *btnCAMfind;
    QGroupBox *gbIPCAM;
    QLineEdit *txtIPCAMinput;
    QPushButton *btnCAMadd;
    QWidget *tabHSV;
    QGroupBox *gbHSVfilter;
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
    QGroupBox *gbCOLORselec;
    QPushButton *btnCOLOURpicker;
    QFrame *frameRGBselector;
    QGroupBox *gbCOLORname;
    QLineEdit *txtNAMEcolour;
    QGroupBox *gbCOLORlist;
    QPushButton *btnRmColour;
    QPushButton *btnEditColour;
    QListWidget *listCOLOUR;
    QPushButton *btnAddColour;
    QGroupBox *gbActions;
    QPushButton *btnHSVpreview;
    QWidget *tabTRACKING;
    QGroupBox *gbTRACKINGpreview;
    QPushButton *btnTRACKING;
    QPushButton *btnCAMchroma;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(764, 372);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(764, 372));
        MainWindow->setMaximumSize(QSize(764, 372));
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(764, 372));
        centralwidget->setStyleSheet(QString::fromUtf8("font: 10pt \"Rockwell\";"));
        tabCONTROLLER = new QTabWidget(centralwidget);
        tabCONTROLLER->setObjectName(QString::fromUtf8("tabCONTROLLER"));
        tabCONTROLLER->setEnabled(true);
        tabCONTROLLER->setGeometry(QRect(10, 10, 741, 341));
        tabCONTROLLER->setStyleSheet(QString::fromUtf8("font: 8pt \"Rockwell\";"));
        tabCONTROLLER->setTabPosition(QTabWidget::West);
        tabCONTROLLER->setTabShape(QTabWidget::Rounded);
        tabCONTROLLER->setElideMode(Qt::ElideNone);
        tabCONTROLLER->setTabsClosable(false);
        tabCAMS = new QWidget();
        tabCAMS->setObjectName(QString::fromUtf8("tabCAMS"));
        gbCAMERAS = new QGroupBox(tabCAMS);
        gbCAMERAS->setObjectName(QString::fromUtf8("gbCAMERAS"));
        gbCAMERAS->setGeometry(QRect(10, 10, 231, 211));
        listCAMERAS = new QListWidget(gbCAMERAS);
        listCAMERAS->setObjectName(QString::fromUtf8("listCAMERAS"));
        listCAMERAS->setGeometry(QRect(10, 30, 131, 151));
        btnCAMremove = new QPushButton(gbCAMERAS);
        btnCAMremove->setObjectName(QString::fromUtf8("btnCAMremove"));
        btnCAMremove->setGeometry(QRect(170, 150, 51, 51));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/remove/bin"), QSize(), QIcon::Normal, QIcon::Off);
        btnCAMremove->setIcon(icon);
        btnCAMremove->setIconSize(QSize(50, 50));
        btnCAMremove->setFlat(true);
        btnCAMpreview = new QPushButton(gbCAMERAS);
        btnCAMpreview->setObjectName(QString::fromUtf8("btnCAMpreview"));
        btnCAMpreview->setEnabled(false);
        btnCAMpreview->setGeometry(QRect(170, 90, 51, 51));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/preview/PreviewON"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/preview/PreviewOFF"), QSize(), QIcon::Normal, QIcon::On);
        icon1.addFile(QString::fromUtf8(":/preview/PreviewON"), QSize(), QIcon::Disabled, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/preview/PreviewOFF"), QSize(), QIcon::Disabled, QIcon::On);
        icon1.addFile(QString::fromUtf8(":/preview/PreviewON"), QSize(), QIcon::Active, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/preview/PreviewOFF"), QSize(), QIcon::Active, QIcon::On);
        icon1.addFile(QString::fromUtf8(":/preview/PreviewON"), QSize(), QIcon::Selected, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/preview/PreviewOFF"), QSize(), QIcon::Selected, QIcon::On);
        btnCAMpreview->setIcon(icon1);
        btnCAMpreview->setIconSize(QSize(50, 50));
        btnCAMpreview->setFlat(true);
        btnCAMfind = new QPushButton(gbCAMERAS);
        btnCAMfind->setObjectName(QString::fromUtf8("btnCAMfind"));
        btnCAMfind->setGeometry(QRect(170, 30, 51, 51));
        btnCAMfind->setLayoutDirection(Qt::LeftToRight);
        btnCAMfind->setText(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/others/search"), QSize(), QIcon::Normal, QIcon::Off);
        btnCAMfind->setIcon(icon2);
        btnCAMfind->setIconSize(QSize(50, 50));
        btnCAMfind->setCheckable(false);
        btnCAMfind->setFlat(true);
        gbIPCAM = new QGroupBox(tabCAMS);
        gbIPCAM->setObjectName(QString::fromUtf8("gbIPCAM"));
        gbIPCAM->setGeometry(QRect(320, 10, 231, 71));
        txtIPCAMinput = new QLineEdit(gbIPCAM);
        txtIPCAMinput->setObjectName(QString::fromUtf8("txtIPCAMinput"));
        txtIPCAMinput->setGeometry(QRect(10, 30, 171, 31));
        btnCAMadd = new QPushButton(gbIPCAM);
        btnCAMadd->setObjectName(QString::fromUtf8("btnCAMadd"));
        btnCAMadd->setGeometry(QRect(190, 30, 31, 31));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/add/add"), QSize(), QIcon::Normal, QIcon::Off);
        btnCAMadd->setIcon(icon3);
        btnCAMadd->setIconSize(QSize(30, 30));
        btnCAMadd->setFlat(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/tabs/webcam"), QSize(), QIcon::Normal, QIcon::Off);
        tabCONTROLLER->addTab(tabCAMS, icon4, QString());
        tabHSV = new QWidget();
        tabHSV->setObjectName(QString::fromUtf8("tabHSV"));
        gbHSVfilter = new QGroupBox(tabHSV);
        gbHSVfilter->setObjectName(QString::fromUtf8("gbHSVfilter"));
        gbHSVfilter->setGeometry(QRect(10, 10, 501, 131));
        gbHSVfilter->setStyleSheet(QString::fromUtf8("font: 10pt \"Rockwell\";"));
        frameHSV = new QFrame(gbHSVfilter);
        frameHSV->setObjectName(QString::fromUtf8("frameHSV"));
        frameHSV->setGeometry(QRect(0, 30, 491, 91));
        frameHSV->setFrameShape(QFrame::Box);
        frameHSV->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget = new QWidget(frameHSV);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(110, 0, 131, 91));
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
        verticalLayoutWidget_2->setGeometry(QRect(350, 0, 131, 91));
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
        verticalLayoutWidget_3->setGeometry(QRect(10, 0, 91, 91));
        layoutLBLmin = new QVBoxLayout(verticalLayoutWidget_3);
        layoutLBLmin->setObjectName(QString::fromUtf8("layoutLBLmin"));
        layoutLBLmin->setContentsMargins(0, 0, 0, 0);
        lblHUEmin = new QLabel(verticalLayoutWidget_3);
        lblHUEmin->setObjectName(QString::fromUtf8("lblHUEmin"));
        lblHUEmin->setStyleSheet(QString::fromUtf8("font: 10pt \"Rockwell\";"));

        layoutLBLmin->addWidget(lblHUEmin);

        lblSATmin = new QLabel(verticalLayoutWidget_3);
        lblSATmin->setObjectName(QString::fromUtf8("lblSATmin"));
        lblSATmin->setStyleSheet(QString::fromUtf8("font: 10pt \"Rockwell\";"));

        layoutLBLmin->addWidget(lblSATmin);

        lblVALmin = new QLabel(verticalLayoutWidget_3);
        lblVALmin->setObjectName(QString::fromUtf8("lblVALmin"));
        lblVALmin->setStyleSheet(QString::fromUtf8("font: 10pt \"Rockwell\";"));

        layoutLBLmin->addWidget(lblVALmin);

        verticalLayoutWidget_4 = new QWidget(frameHSV);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(260, 0, 80, 91));
        layoutLBLmax = new QVBoxLayout(verticalLayoutWidget_4);
        layoutLBLmax->setObjectName(QString::fromUtf8("layoutLBLmax"));
        layoutLBLmax->setContentsMargins(0, 0, 0, 0);
        lblHUEmax = new QLabel(verticalLayoutWidget_4);
        lblHUEmax->setObjectName(QString::fromUtf8("lblHUEmax"));
        lblHUEmax->setStyleSheet(QString::fromUtf8("font: 10pt \"Rockwell\";"));

        layoutLBLmax->addWidget(lblHUEmax);

        lblSATmax = new QLabel(verticalLayoutWidget_4);
        lblSATmax->setObjectName(QString::fromUtf8("lblSATmax"));
        lblSATmax->setStyleSheet(QString::fromUtf8("font: 10pt \"Rockwell\";"));

        layoutLBLmax->addWidget(lblSATmax);

        lblVALmax = new QLabel(verticalLayoutWidget_4);
        lblVALmax->setObjectName(QString::fromUtf8("lblVALmax"));
        lblVALmax->setStyleSheet(QString::fromUtf8("font: 10pt \"Rockwell\";"));

        layoutLBLmax->addWidget(lblVALmax);

        gbCOLORselec = new QGroupBox(tabHSV);
        gbCOLORselec->setObjectName(QString::fromUtf8("gbCOLORselec"));
        gbCOLORselec->setGeometry(QRect(10, 150, 121, 141));
        gbCOLORselec->setStyleSheet(QString::fromUtf8("font: 10pt \"Rockwell\";"));
        btnCOLOURpicker = new QPushButton(gbCOLORselec);
        btnCOLOURpicker->setObjectName(QString::fromUtf8("btnCOLOURpicker"));
        btnCOLOURpicker->setGeometry(QRect(30, 100, 61, 31));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/others/colorPICKER"), QSize(), QIcon::Normal, QIcon::Off);
        btnCOLOURpicker->setIcon(icon5);
        btnCOLOURpicker->setIconSize(QSize(25, 25));
        btnCOLOURpicker->setFlat(true);
        frameRGBselector = new QFrame(gbCOLORselec);
        frameRGBselector->setObjectName(QString::fromUtf8("frameRGBselector"));
        frameRGBselector->setGeometry(QRect(10, 30, 101, 61));
        frameRGBselector->setFrameShape(QFrame::StyledPanel);
        frameRGBselector->setFrameShadow(QFrame::Raised);
        gbCOLORname = new QGroupBox(tabHSV);
        gbCOLORname->setObjectName(QString::fromUtf8("gbCOLORname"));
        gbCOLORname->setGeometry(QRect(150, 150, 141, 81));
        gbCOLORname->setStyleSheet(QString::fromUtf8("font: 10pt \"Rockwell\";"));
        txtNAMEcolour = new QLineEdit(gbCOLORname);
        txtNAMEcolour->setObjectName(QString::fromUtf8("txtNAMEcolour"));
        txtNAMEcolour->setGeometry(QRect(10, 30, 121, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Rockwell"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        txtNAMEcolour->setFont(font);
        gbCOLORlist = new QGroupBox(tabHSV);
        gbCOLORlist->setObjectName(QString::fromUtf8("gbCOLORlist"));
        gbCOLORlist->setGeometry(QRect(520, 10, 181, 271));
        gbCOLORlist->setStyleSheet(QString::fromUtf8("font: 10pt \"Rockwell\";"));
        btnRmColour = new QPushButton(gbCOLORlist);
        btnRmColour->setObjectName(QString::fromUtf8("btnRmColour"));
        btnRmColour->setGeometry(QRect(130, 210, 41, 41));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/remove/remove"), QSize(), QIcon::Normal, QIcon::Off);
        btnRmColour->setIcon(icon6);
        btnRmColour->setIconSize(QSize(30, 30));
        btnRmColour->setFlat(true);
        btnEditColour = new QPushButton(gbCOLORlist);
        btnEditColour->setObjectName(QString::fromUtf8("btnEditColour"));
        btnEditColour->setEnabled(false);
        btnEditColour->setGeometry(QRect(70, 210, 41, 41));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/edit/editON"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditColour->setIcon(icon7);
        btnEditColour->setIconSize(QSize(30, 30));
        btnEditColour->setFlat(true);
        listCOLOUR = new QListWidget(gbCOLORlist);
        listCOLOUR->setObjectName(QString::fromUtf8("listCOLOUR"));
        listCOLOUR->setGeometry(QRect(10, 30, 161, 171));
        btnAddColour = new QPushButton(gbCOLORlist);
        btnAddColour->setObjectName(QString::fromUtf8("btnAddColour"));
        btnAddColour->setGeometry(QRect(10, 210, 41, 41));
        btnAddColour->setIcon(icon3);
        btnAddColour->setIconSize(QSize(30, 30));
        btnAddColour->setFlat(true);
        gbActions = new QGroupBox(tabHSV);
        gbActions->setObjectName(QString::fromUtf8("gbActions"));
        gbActions->setGeometry(QRect(310, 150, 161, 91));
        gbActions->setStyleSheet(QString::fromUtf8("font: 10pt \"Rockwell\";"));
        btnHSVpreview = new QPushButton(gbActions);
        btnHSVpreview->setObjectName(QString::fromUtf8("btnHSVpreview"));
        btnHSVpreview->setEnabled(false);
        btnHSVpreview->setGeometry(QRect(10, 30, 141, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Rockwell Extra Bold"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(10);
        btnHSVpreview->setFont(font1);
        btnHSVpreview->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"font: 81 11pt \"Rockwell Extra Bold\";\n"
"color: rgb(255, 255, 255);"));
        btnHSVpreview->setAutoRepeat(false);
        btnHSVpreview->setAutoExclusive(false);
        btnHSVpreview->setFlat(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/tabs/filter"), QSize(), QIcon::Normal, QIcon::Off);
        tabCONTROLLER->addTab(tabHSV, icon8, QString());
        tabTRACKING = new QWidget();
        tabTRACKING->setObjectName(QString::fromUtf8("tabTRACKING"));
        tabTRACKING->setEnabled(true);
        gbTRACKINGpreview = new QGroupBox(tabTRACKING);
        gbTRACKINGpreview->setObjectName(QString::fromUtf8("gbTRACKINGpreview"));
        gbTRACKINGpreview->setEnabled(true);
        gbTRACKINGpreview->setGeometry(QRect(20, 20, 291, 81));
        btnTRACKING = new QPushButton(gbTRACKINGpreview);
        btnTRACKING->setObjectName(QString::fromUtf8("btnTRACKING"));
        btnTRACKING->setEnabled(false);
        btnTRACKING->setGeometry(QRect(10, 30, 121, 41));
        sizePolicy.setHeightForWidth(btnTRACKING->sizePolicy().hasHeightForWidth());
        btnTRACKING->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Rockwell"));
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        btnTRACKING->setFont(font2);
        btnTRACKING->setCheckable(false);
        btnTRACKING->setAutoRepeat(false);
        btnTRACKING->setAutoExclusive(false);
        btnTRACKING->setFlat(false);
        btnCAMchroma = new QPushButton(gbTRACKINGpreview);
        btnCAMchroma->setObjectName(QString::fromUtf8("btnCAMchroma"));
        btnCAMchroma->setEnabled(false);
        btnCAMchroma->setGeometry(QRect(160, 30, 121, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnCAMchroma->sizePolicy().hasHeightForWidth());
        btnCAMchroma->setSizePolicy(sizePolicy1);
        btnCAMchroma->setFont(font2);
        btnCAMchroma->setCheckable(false);
        btnCAMchroma->setAutoRepeat(false);
        btnCAMchroma->setAutoExclusive(false);
        btnCAMchroma->setFlat(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/tabs/tracking"), QSize(), QIcon::Normal, QIcon::Off);
        tabCONTROLLER->addTab(tabTRACKING, icon9, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabCONTROLLER->setCurrentIndex(0);
        btnCAMfind->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ASMR Tracking", nullptr));
        gbCAMERAS->setTitle(QCoreApplication::translate("MainWindow", "CAMERAS", nullptr));
        btnCAMremove->setText(QString());
        btnCAMpreview->setText(QString());
        gbIPCAM->setTitle(QCoreApplication::translate("MainWindow", "IP CAM", nullptr));
        btnCAMadd->setText(QString());
        tabCONTROLLER->setTabText(tabCONTROLLER->indexOf(tabCAMS), QCoreApplication::translate("MainWindow", "CAM", nullptr));
        gbHSVfilter->setTitle(QCoreApplication::translate("MainWindow", "HSV FILTER", nullptr));
        lblHUEmin->setText(QCoreApplication::translate("MainWindow", "HUE  MIN: 0", nullptr));
        lblSATmin->setText(QCoreApplication::translate("MainWindow", "SAT  MIN: 0", nullptr));
        lblVALmin->setText(QCoreApplication::translate("MainWindow", "VAL  MIN: 0", nullptr));
        lblHUEmax->setText(QCoreApplication::translate("MainWindow", "MAX: 179", nullptr));
        lblSATmax->setText(QCoreApplication::translate("MainWindow", "MAX: 255", nullptr));
        lblVALmax->setText(QCoreApplication::translate("MainWindow", "MAX: 255", nullptr));
        gbCOLORselec->setTitle(QCoreApplication::translate("MainWindow", "SELECT COLOR", nullptr));
        btnCOLOURpicker->setText(QString());
        gbCOLORname->setTitle(QCoreApplication::translate("MainWindow", "COLOR NAME", nullptr));
        gbCOLORlist->setTitle(QCoreApplication::translate("MainWindow", "COLOR LIST", nullptr));
        btnRmColour->setText(QString());
        btnEditColour->setText(QString());
        btnAddColour->setText(QString());
        gbActions->setTitle(QCoreApplication::translate("MainWindow", "ACTIONS", nullptr));
        btnHSVpreview->setText(QCoreApplication::translate("MainWindow", "Preview OFF", nullptr));
        tabCONTROLLER->setTabText(tabCONTROLLER->indexOf(tabHSV), QCoreApplication::translate("MainWindow", "COLOR FILTER", nullptr));
        gbTRACKINGpreview->setTitle(QCoreApplication::translate("MainWindow", "PREVIEW", nullptr));
        btnTRACKING->setText(QCoreApplication::translate("MainWindow", "TRACKING\n"
"WITH CAM", nullptr));
        btnCAMchroma->setText(QCoreApplication::translate("MainWindow", "TRACKING CHROMA", nullptr));
        tabCONTROLLER->setTabText(tabCONTROLLER->indexOf(tabTRACKING), QCoreApplication::translate("MainWindow", "COLOR TRACKING", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
