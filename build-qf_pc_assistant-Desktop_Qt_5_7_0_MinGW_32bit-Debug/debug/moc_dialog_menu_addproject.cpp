/****************************************************************************
** Meta object code from reading C++ file 'dialog_menu_addproject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qf_pc_assistant/dialog_menu_addproject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_menu_addproject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Dialog_menu_addProject_t {
    QByteArrayData data[6];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_menu_addProject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_menu_addProject_t qt_meta_stringdata_Dialog_menu_addProject = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Dialog_menu_addProject"
QT_MOC_LITERAL(1, 23, 36), // "on_pushButton_setSrcCodePath_..."
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 36), // "on_pushButton_setBinFIlePath_..."
QT_MOC_LITERAL(4, 98, 37), // "on_pushButton_setToolFilePath..."
QT_MOC_LITERAL(5, 136, 22) // "slot_btnBox_ok_clicked"

    },
    "Dialog_menu_addProject\0"
    "on_pushButton_setSrcCodePath_clicked\0"
    "\0on_pushButton_setBinFIlePath_clicked\0"
    "on_pushButton_setToolFilePath_clicked\0"
    "slot_btnBox_ok_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog_menu_addProject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dialog_menu_addProject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog_menu_addProject *_t = static_cast<Dialog_menu_addProject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_setSrcCodePath_clicked(); break;
        case 1: _t->on_pushButton_setBinFIlePath_clicked(); break;
        case 2: _t->on_pushButton_setToolFilePath_clicked(); break;
        case 3: _t->slot_btnBox_ok_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Dialog_menu_addProject::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog_menu_addProject.data,
      qt_meta_data_Dialog_menu_addProject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Dialog_menu_addProject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog_menu_addProject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_menu_addProject.stringdata0))
        return static_cast<void*>(const_cast< Dialog_menu_addProject*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog_menu_addProject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE