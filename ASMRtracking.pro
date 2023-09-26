QT += core gui
QT += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cerror.cpp \
    colortracking.cpp \
    hwcam.cpp \
    iodata.cpp \
    ipcam.cpp \
    main.cpp \
    mainwindow.cpp \
    ocvcolor.cpp \
    pcamera.cpp

HEADERS += \
    cerror.h \
    colortracking.h \
    hwcam.h \
    iodata.h \
    ipcam.h \
    mainwindow.h \
    ocvcolor.h \
    pcamera.h

FORMS += \
    mainwindow.ui

#OPENCV
LIBS += -LG:\dev\OpenCV\build\x64\vc15\lib -lopencv_world451d # -lopencv_imgproc410d -lopencv_highgui410d -lopencv_imgcodecs410d -lopencv_videoio410d -lopencv_video410d -lopencv_calib3d410d -lopencv_photo410d -lopencv_features2d410d
INCLUDEPATH += G:\dev\OpenCV\build\include
DEPENDPATH += G:\dev\OpenCV\build\includ

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../../../My Pictures/icons/trash-delete.png

RESOURCES += \
    icons.qrc
