/****************************************************************************
** Meta object code from reading C++ file 'PostLoginStaff.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PostLoginStaff.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PostLoginStaff.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PostLoginStaff_t {
    QByteArrayData data[8];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PostLoginStaff_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PostLoginStaff_t qt_meta_stringdata_PostLoginStaff = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PostLoginStaff"
QT_MOC_LITERAL(1, 15, 26), // "on_AddAnimalButton_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 28), // "on_ViewAnimalsButton_clicked"
QT_MOC_LITERAL(4, 72, 26), // "on_AddClientButton_clicked"
QT_MOC_LITERAL(5, 99, 28), // "on_ViewClientsButton_clicked"
QT_MOC_LITERAL(6, 128, 28), // "on_generateACMButton_clicked"
QT_MOC_LITERAL(7, 157, 6) // "reject"

    },
    "PostLoginStaff\0on_AddAnimalButton_clicked\0"
    "\0on_ViewAnimalsButton_clicked\0"
    "on_AddClientButton_clicked\0"
    "on_ViewClientsButton_clicked\0"
    "on_generateACMButton_clicked\0reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PostLoginStaff[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PostLoginStaff::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PostLoginStaff *_t = static_cast<PostLoginStaff *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_AddAnimalButton_clicked(); break;
        case 1: _t->on_ViewAnimalsButton_clicked(); break;
        case 2: _t->on_AddClientButton_clicked(); break;
        case 3: _t->on_ViewClientsButton_clicked(); break;
        case 4: _t->on_generateACMButton_clicked(); break;
        case 5: _t->reject(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PostLoginStaff::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PostLoginStaff.data,
      qt_meta_data_PostLoginStaff,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PostLoginStaff::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PostLoginStaff::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PostLoginStaff.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PostLoginStaff::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
