/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qf_pc_assistant/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[351];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 32), // "on_pushButton_openFolder_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 26), // "on_pushButton_copy_clicked"
QT_MOC_LITERAL(4, 72, 35), // "on_pushButton_refreshDrives_c..."
QT_MOC_LITERAL(5, 108, 35), // "on_pushButton_startCommTool_c..."
QT_MOC_LITERAL(6, 144, 28), // "on_pushButton_config_clicked"
QT_MOC_LITERAL(7, 173, 32), // "on_pushButton_configSave_clicked"
QT_MOC_LITERAL(8, 206, 32), // "on_pushButton_configLoad_clicked"
QT_MOC_LITERAL(9, 239, 10), // "leaveEvent"
QT_MOC_LITERAL(10, 250, 7), // "QEvent*"
QT_MOC_LITERAL(11, 258, 5), // "event"
QT_MOC_LITERAL(12, 264, 10), // "enterEvent"
QT_MOC_LITERAL(13, 275, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(14, 293, 12), // "QMouseEvent*"
QT_MOC_LITERAL(15, 306, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(16, 321, 15), // "mousePressEvent"
QT_MOC_LITERAL(17, 337, 13) // "action_addPrj"

    },
    "MainWindow\0on_pushButton_openFolder_clicked\0"
    "\0on_pushButton_copy_clicked\0"
    "on_pushButton_refreshDrives_clicked\0"
    "on_pushButton_startCommTool_clicked\0"
    "on_pushButton_config_clicked\0"
    "on_pushButton_configSave_clicked\0"
    "on_pushButton_configLoad_clicked\0"
    "leaveEvent\0QEvent*\0event\0enterEvent\0"
    "mouseReleaseEvent\0QMouseEvent*\0"
    "mouseMoveEvent\0mousePressEvent\0"
    "action_addPrj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    1,   86,    2, 0x08 /* Private */,
      12,    1,   89,    2, 0x08 /* Private */,
      13,    1,   92,    2, 0x08 /* Private */,
      15,    1,   95,    2, 0x08 /* Private */,
      16,    1,   98,    2, 0x08 /* Private */,
      17,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 14,   11,
    QMetaType::Void, 0x80000000 | 14,   11,
    QMetaType::Void, 0x80000000 | 14,   11,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_openFolder_clicked(); break;
        case 1: _t->on_pushButton_copy_clicked(); break;
        case 2: _t->on_pushButton_refreshDrives_clicked(); break;
        case 3: _t->on_pushButton_startCommTool_clicked(); break;
        case 4: _t->on_pushButton_config_clicked(); break;
        case 5: _t->on_pushButton_configSave_clicked(); break;
        case 6: _t->on_pushButton_configLoad_clicked(); break;
        case 7: _t->leaveEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 8: _t->enterEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 9: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 10: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 11: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 12: _t->action_addPrj(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
