/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../project/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[42];
    char stringdata0[411];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 17), // "getProductsFromDB"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 16), // "getClientsFromDB"
QT_MOC_LITERAL(47, 15), // "showAllProducts"
QT_MOC_LITERAL(63, 32), // "on_tableWidget_itemDoubleClicked"
QT_MOC_LITERAL(96, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(114, 4), // "item"
QT_MOC_LITERAL(119, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(143, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(167, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(191, 26), // "on_checkBox_2_stateChanged"
QT_MOC_LITERAL(218, 4), // "arg1"
QT_MOC_LITERAL(223, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(248, 19), // "on_action_triggered"
QT_MOC_LITERAL(268, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(290, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(314, 24), // "on_pushButton_10_clicked"
QT_MOC_LITERAL(339, 24), // "on_pushButton_12_clicked"
QT_MOC_LITERAL(364, 24), // "on_pushButton_11_clicked"
QT_MOC_LITERAL(389, 21) // "on_action_2_triggered"

    },
    "MainWindow\0getProductsFromDB\0\0"
    "getClientsFromDB\0showAllProducts\0"
    "on_tableWidget_itemDoubleClicked\0"
    "QTableWidgetItem*\0item\0on_pushButton_4_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_checkBox_2_stateChanged\0arg1\0"
    "on_checkBox_stateChanged\0on_action_triggered\0"
    "on_pushButton_clicked\0on_pushButton_9_clicked\0"
    "on_pushButton_10_clicked\0"
    "on_pushButton_12_clicked\0"
    "on_pushButton_11_clicked\0on_action_2_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x0a,    1 /* Public */,
       3,    0,  111,    2, 0x0a,    2 /* Public */,
       4,    0,  112,    2, 0x0a,    3 /* Public */,
       5,    1,  113,    2, 0x08,    4 /* Private */,
       8,    0,  116,    2, 0x08,    6 /* Private */,
       9,    0,  117,    2, 0x08,    7 /* Private */,
      10,    0,  118,    2, 0x08,    8 /* Private */,
      11,    1,  119,    2, 0x08,    9 /* Private */,
      13,    1,  122,    2, 0x08,   11 /* Private */,
      14,    0,  125,    2, 0x08,   13 /* Private */,
      15,    0,  126,    2, 0x08,   14 /* Private */,
      16,    0,  127,    2, 0x08,   15 /* Private */,
      17,    0,  128,    2, 0x08,   16 /* Private */,
      18,    0,  129,    2, 0x08,   17 /* Private */,
      19,    0,  130,    2, 0x08,   18 /* Private */,
      20,    0,  131,    2, 0x08,   19 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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
        case 0: _t->getProductsFromDB(); break;
        case 1: _t->getClientsFromDB(); break;
        case 2: _t->showAllProducts(); break;
        case 3: _t->on_tableWidget_itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 4: _t->on_pushButton_4_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_pushButton_3_clicked(); break;
        case 7: _t->on_checkBox_2_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_checkBox_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_action_triggered(); break;
        case 10: _t->on_pushButton_clicked(); break;
        case 11: _t->on_pushButton_9_clicked(); break;
        case 12: _t->on_pushButton_10_clicked(); break;
        case 13: _t->on_pushButton_12_clicked(); break;
        case 14: _t->on_pushButton_11_clicked(); break;
        case 15: _t->on_action_2_triggered(); break;
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
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTableWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
