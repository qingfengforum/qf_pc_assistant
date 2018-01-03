/****************************************************************************
** Meta object code from reading C++ file 'dialog_config.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qf_pc_assistant/dialog_config.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_config.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Dialog_config_t {
    QByteArrayData data[10];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_config_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_config_t qt_meta_stringdata_Dialog_config = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Dialog_config"
QT_MOC_LITERAL(1, 14, 38), // "on_pushButton_config_deletePr..."
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 37), // "on_pushButton_setSourcefolder..."
QT_MOC_LITERAL(4, 92, 36), // "on_pushButton_setBinFilePath_..."
QT_MOC_LITERAL(5, 129, 33), // "on_pushButton_setToolPath_cli..."
QT_MOC_LITERAL(6, 163, 32), // "on_pushButton_setPrjPath_clicked"
QT_MOC_LITERAL(7, 196, 28), // "slot_comboBox_prj_idxChanged"
QT_MOC_LITERAL(8, 225, 7), // "cur_idx"
QT_MOC_LITERAL(9, 233, 38) // "on_pushButton_setPrjServerPat..."

    },
    "Dialog_config\0on_pushButton_config_deletePrj_clicked\0"
    "\0on_pushButton_setSourcefolder_clicked\0"
    "on_pushButton_setBinFilePath_clicked\0"
    "on_pushButton_setToolPath_clicked\0"
    "on_pushButton_setPrjPath_clicked\0"
    "slot_comboBox_prj_idxChanged\0cur_idx\0"
    "on_pushButton_setPrjServerPath_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog_config[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

       0        // eod
};

void Dialog_config::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog_config *_t = static_cast<Dialog_config *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_config_deletePrj_clicked(); break;
        case 1: _t->on_pushButton_setSourcefolder_clicked(); break;
        case 2: _t->on_pushButton_setBinFilePath_clicked(); break;
        case 3: _t->on_pushButton_setToolPath_clicked(); break;
        case 4: _t->on_pushButton_setPrjPath_clicked(); break;
        case 5: _t->slot_comboBox_prj_idxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_setPrjServerPath_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Dialog_config::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog_config.data,
      qt_meta_data_Dialog_config,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Dialog_config::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog_config::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_config.stringdata0))
        return static_cast<void*>(const_cast< Dialog_config*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog_config::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
