/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtOpenCVMewtracking/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[34];
    char stringdata0[380];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 26), // "on_btnCOLOURpicker_clicked"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 28), // "on_sliderHUEmin_valueChanged"
QT_MOC_LITERAL(68, 5), // "value"
QT_MOC_LITERAL(74, 28), // "on_sliderHUEmax_valueChanged"
QT_MOC_LITERAL(103, 28), // "on_sliderSATmin_valueChanged"
QT_MOC_LITERAL(132, 28), // "on_sliderSATmax_valueChanged"
QT_MOC_LITERAL(161, 28), // "on_sliderVALmin_valueChanged"
QT_MOC_LITERAL(190, 28), // "on_sliderVALmax_valueChanged"
QT_MOC_LITERAL(219, 23), // "on_btnAddColour_clicked"
QT_MOC_LITERAL(243, 22), // "on_btnRmColour_clicked"
QT_MOC_LITERAL(266, 24), // "on_btnEditColour_clicked"
QT_MOC_LITERAL(291, 31), // "on_listCOLOUR_currentRowChanged"
QT_MOC_LITERAL(323, 10), // "currentRow"
QT_MOC_LITERAL(334, 22), // "on_actionCAM_triggered"
QT_MOC_LITERAL(357, 22) // "on_actionHSV_triggered"

    },
    "MainWindow\0on_btnCOLOURpicker_clicked\0"
    "\0on_sliderHUEmin_valueChanged\0value\0"
    "on_sliderHUEmax_valueChanged\0"
    "on_sliderSATmin_valueChanged\0"
    "on_sliderSATmax_valueChanged\0"
    "on_sliderVALmin_valueChanged\0"
    "on_sliderVALmax_valueChanged\0"
    "on_btnAddColour_clicked\0on_btnRmColour_clicked\0"
    "on_btnEditColour_clicked\0"
    "on_listCOLOUR_currentRowChanged\0"
    "currentRow\0on_actionCAM_triggered\0"
    "on_actionHSV_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    0 /* Private */,
       3,    1,   93,    2, 0x08,    1 /* Private */,
       5,    1,   96,    2, 0x08,    3 /* Private */,
       6,    1,   99,    2, 0x08,    5 /* Private */,
       7,    1,  102,    2, 0x08,    7 /* Private */,
       8,    1,  105,    2, 0x08,    9 /* Private */,
       9,    1,  108,    2, 0x08,   11 /* Private */,
      10,    0,  111,    2, 0x08,   13 /* Private */,
      11,    0,  112,    2, 0x08,   14 /* Private */,
      12,    0,  113,    2, 0x08,   15 /* Private */,
      13,    1,  114,    2, 0x08,   16 /* Private */,
      15,    0,  117,    2, 0x08,   18 /* Private */,
      16,    0,  118,    2, 0x08,   19 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnCOLOURpicker_clicked(); break;
        case 1: _t->on_sliderHUEmin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_sliderHUEmax_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_sliderSATmin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_sliderSATmax_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_sliderVALmin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_sliderVALmax_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_btnAddColour_clicked(); break;
        case 8: _t->on_btnRmColour_clicked(); break;
        case 9: _t->on_btnEditColour_clicked(); break;
        case 10: _t->on_listCOLOUR_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_actionCAM_triggered(); break;
        case 12: _t->on_actionHSV_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
