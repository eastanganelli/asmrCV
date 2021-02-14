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
    QTabWidget *tabCAMS;
    QWidget *tabCAMS1;
    QGroupBox *gbCAMERAS;
    QListWidget *listCAMERAS;
    QPushButton *btnCAMfind;
    QPushButton *btnCAMadd;
    QPushButton *btnCAMpreview;
    QPushButton *btnCAMremove;
    QLineEdit *txtIPCAMinput;
    QWidget *tabHSV;
    QPushButton *btnHSVpreview;
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
    QWidget *tabTRACKING;
    QGroupBox *gbTRACKINGpreview;
    QPushButton *btnTRACKING;
    QPushButton *btnCAMchroma;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(764, 355);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabCAMS = new QTabWidget(centralwidget);
        tabCAMS->setObjectName(QString::fromUtf8("tabCAMS"));
        tabCAMS->setEnabled(true);
        tabCAMS->setGeometry(QRect(10, 10, 741, 331));
        tabCAMS->setTabPosition(QTabWidget::West);
        tabCAMS->setTabShape(QTabWidget::Rounded);
        tabCAMS->setElideMode(Qt::ElideNone);
        tabCAMS->setTabsClosable(false);
        tabCAMS1 = new QWidget();
        tabCAMS1->setObjectName(QString::fromUtf8("tabCAMS1"));
        gbCAMERAS = new QGroupBox(tabCAMS1);
        gbCAMERAS->setObjectName(QString::fromUtf8("gbCAMERAS"));
        gbCAMERAS->setGeometry(QRect(10, 10, 151, 191));
        listCAMERAS = new QListWidget(gbCAMERAS);
        listCAMERAS->setObjectName(QString::fromUtf8("listCAMERAS"));
        listCAMERAS->setGeometry(QRect(10, 30, 131, 151));
        btnCAMfind = new QPushButton(tabCAMS1);
        btnCAMfind->setObjectName(QString::fromUtf8("btnCAMfind"));
        btnCAMfind->setGeometry(QRect(190, 30, 51, 51));
        btnCAMfind->setLayoutDirection(Qt::LeftToRight);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../My Documents/GraphGale/LUPA1.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCAMfind->setIcon(icon);
        btnCAMfind->setIconSize(QSize(45, 40));
        btnCAMfind->setCheckable(false);
        btnCAMfind->setFlat(true);
        btnCAMadd = new QPushButton(tabCAMS1);
        btnCAMadd->setObjectName(QString::fromUtf8("btnCAMadd"));
        btnCAMadd->setGeometry(QRect(570, 80, 81, 31));
        btnCAMadd->setIconSize(QSize(40, 40));
        btnCAMpreview = new QPushButton(tabCAMS1);
        btnCAMpreview->setObjectName(QString::fromUtf8("btnCAMpreview"));
        btnCAMpreview->setEnabled(false);
        btnCAMpreview->setGeometry(QRect(190, 90, 51, 51));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../My Documents/GraphGale/preview1.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCAMpreview->setIcon(icon1);
        btnCAMpreview->setIconSize(QSize(40, 40));
        btnCAMpreview->setFlat(true);
        btnCAMremove = new QPushButton(tabCAMS1);
        btnCAMremove->setObjectName(QString::fromUtf8("btnCAMremove"));
        btnCAMremove->setGeometry(QRect(190, 150, 51, 51));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../../My Documents/GraphGale/TRASH1.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCAMremove->setIcon(icon2);
        btnCAMremove->setIconSize(QSize(40, 40));
        btnCAMremove->setFlat(true);
        txtIPCAMinput = new QLineEdit(tabCAMS1);
        txtIPCAMinput->setObjectName(QString::fromUtf8("txtIPCAMinput"));
        txtIPCAMinput->setGeometry(QRect(390, 80, 171, 31));
        tabCAMS->addTab(tabCAMS1, QString());
        tabHSV = new QWidget();
        tabHSV->setObjectName(QString::fromUtf8("tabHSV"));
        btnHSVpreview = new QPushButton(tabHSV);
        btnHSVpreview->setObjectName(QString::fromUtf8("btnHSVpreview"));
        btnHSVpreview->setEnabled(false);
        btnHSVpreview->setGeometry(QRect(300, 170, 91, 61));
        gbHSVfilter = new QGroupBox(tabHSV);
        gbHSVfilter->setObjectName(QString::fromUtf8("gbHSVfilter"));
        gbHSVfilter->setGeometry(QRect(10, 10, 501, 131));
        frameHSV = new QFrame(gbHSVfilter);
        frameHSV->setObjectName(QString::fromUtf8("frameHSV"));
        frameHSV->setGeometry(QRect(0, 30, 501, 91));
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
        verticalLayoutWidget_2->setGeometry(QRect(360, 0, 131, 91));
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
        verticalLayoutWidget_3->setGeometry(QRect(10, 0, 126, 91));
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
        verticalLayoutWidget_4->setGeometry(QRect(290, 0, 80, 91));
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

        gbCOLORselec = new QGroupBox(tabHSV);
        gbCOLORselec->setObjectName(QString::fromUtf8("gbCOLORselec"));
        gbCOLORselec->setGeometry(QRect(10, 150, 101, 141));
        btnCOLOURpicker = new QPushButton(gbCOLORselec);
        btnCOLOURpicker->setObjectName(QString::fromUtf8("btnCOLOURpicker"));
        btnCOLOURpicker->setGeometry(QRect(10, 100, 81, 31));
        frameRGBselector = new QFrame(gbCOLORselec);
        frameRGBselector->setObjectName(QString::fromUtf8("frameRGBselector"));
        frameRGBselector->setGeometry(QRect(10, 30, 81, 61));
        frameRGBselector->setFrameShape(QFrame::StyledPanel);
        frameRGBselector->setFrameShadow(QFrame::Raised);
        gbCOLORname = new QGroupBox(tabHSV);
        gbCOLORname->setObjectName(QString::fromUtf8("gbCOLORname"));
        gbCOLORname->setGeometry(QRect(130, 150, 151, 81));
        txtNAMEcolour = new QLineEdit(gbCOLORname);
        txtNAMEcolour->setObjectName(QString::fromUtf8("txtNAMEcolour"));
        txtNAMEcolour->setGeometry(QRect(10, 30, 131, 41));
        QFont font;
        font.setPointSize(14);
        txtNAMEcolour->setFont(font);
        gbCOLORlist = new QGroupBox(tabHSV);
        gbCOLORlist->setObjectName(QString::fromUtf8("gbCOLORlist"));
        gbCOLORlist->setGeometry(QRect(520, 10, 181, 271));
        btnRmColour = new QPushButton(gbCOLORlist);
        btnRmColour->setObjectName(QString::fromUtf8("btnRmColour"));
        btnRmColour->setGeometry(QRect(130, 210, 41, 41));
        btnEditColour = new QPushButton(gbCOLORlist);
        btnEditColour->setObjectName(QString::fromUtf8("btnEditColour"));
        btnEditColour->setEnabled(false);
        btnEditColour->setGeometry(QRect(70, 210, 41, 41));
        listCOLOUR = new QListWidget(gbCOLORlist);
        listCOLOUR->setObjectName(QString::fromUtf8("listCOLOUR"));
        listCOLOUR->setGeometry(QRect(10, 30, 161, 171));
        btnAddColour = new QPushButton(gbCOLORlist);
        btnAddColour->setObjectName(QString::fromUtf8("btnAddColour"));
        btnAddColour->setGeometry(QRect(10, 210, 41, 41));
        tabCAMS->addTab(tabHSV, QString());
        tabTRACKING = new QWidget();
        tabTRACKING->setObjectName(QString::fromUtf8("tabTRACKING"));
        tabTRACKING->setEnabled(false);
        gbTRACKINGpreview = new QGroupBox(tabTRACKING);
        gbTRACKINGpreview->setObjectName(QString::fromUtf8("gbTRACKINGpreview"));
        gbTRACKINGpreview->setGeometry(QRect(20, 20, 291, 81));
        btnTRACKING = new QPushButton(gbTRACKINGpreview);
        btnTRACKING->setObjectName(QString::fromUtf8("btnTRACKING"));
        btnTRACKING->setGeometry(QRect(10, 30, 121, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnTRACKING->sizePolicy().hasHeightForWidth());
        btnTRACKING->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(9);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        btnTRACKING->setFont(font1);
        btnTRACKING->setCheckable(false);
        btnTRACKING->setAutoRepeat(false);
        btnTRACKING->setAutoExclusive(false);
        btnTRACKING->setFlat(false);
        btnCAMchroma = new QPushButton(gbTRACKINGpreview);
        btnCAMchroma->setObjectName(QString::fromUtf8("btnCAMchroma"));
        btnCAMchroma->setGeometry(QRect(160, 30, 121, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnCAMchroma->sizePolicy().hasHeightForWidth());
        btnCAMchroma->setSizePolicy(sizePolicy2);
        btnCAMchroma->setFont(font1);
        btnCAMchroma->setCheckable(false);
        btnCAMchroma->setAutoRepeat(false);
        btnCAMchroma->setAutoExclusive(false);
        btnCAMchroma->setFlat(false);
        tabCAMS->addTab(tabTRACKING, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabCAMS->setCurrentIndex(2);
        btnCAMfind->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "OpenCV MewTracking", nullptr));
        gbCAMERAS->setTitle(QCoreApplication::translate("MainWindow", "CAMERAS", nullptr));
        btnCAMfind->setText(QString());
        btnCAMadd->setText(QCoreApplication::translate("MainWindow", "Add IPCAM", nullptr));
        btnCAMpreview->setText(QString());
        btnCAMremove->setText(QString());
        tabCAMS->setTabText(tabCAMS->indexOf(tabCAMS1), QCoreApplication::translate("MainWindow", "CAMERAS", nullptr));
        btnHSVpreview->setText(QCoreApplication::translate("MainWindow", "Preview OFF", nullptr));
        gbHSVfilter->setTitle(QCoreApplication::translate("MainWindow", "HSV FILTER", nullptr));
        lblHUEmin->setText(QCoreApplication::translate("MainWindow", "HUE >> MIN: 0", nullptr));
        lblSATmin->setText(QCoreApplication::translate("MainWindow", "SAT >> MIN: 0", nullptr));
        lblVALmin->setText(QCoreApplication::translate("MainWindow", "VAL >> MIN: 0", nullptr));
        lblHUEmax->setText(QCoreApplication::translate("MainWindow", "MAX: 179", nullptr));
        lblSATmax->setText(QCoreApplication::translate("MainWindow", "MAX: 255", nullptr));
        lblVALmax->setText(QCoreApplication::translate("MainWindow", "MAX: 255", nullptr));
        gbCOLORselec->setTitle(QCoreApplication::translate("MainWindow", "SELECT COLOR", nullptr));
        btnCOLOURpicker->setText(QCoreApplication::translate("MainWindow", "Color Picker", nullptr));
        gbCOLORname->setTitle(QCoreApplication::translate("MainWindow", "COLOR NAME", nullptr));
        gbCOLORlist->setTitle(QCoreApplication::translate("MainWindow", "COLOR LIST", nullptr));
        btnRmColour->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnEditColour->setText(QCoreApplication::translate("MainWindow", "EDIT", nullptr));
        btnAddColour->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        tabCAMS->setTabText(tabCAMS->indexOf(tabHSV), QCoreApplication::translate("MainWindow", "COLOR FILTER", nullptr));
        gbTRACKINGpreview->setTitle(QCoreApplication::translate("MainWindow", "PREVIEW", nullptr));
        btnTRACKING->setText(QCoreApplication::translate("MainWindow", "TRACKING\n"
"WITH CAM", nullptr));
        btnCAMchroma->setText(QCoreApplication::translate("MainWindow", "TRACKING CHROMA", nullptr));
        tabCAMS->setTabText(tabCAMS->indexOf(tabTRACKING), QCoreApplication::translate("MainWindow", "COLOR TRACKING", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
