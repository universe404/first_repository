/****************************************************************************
** Meta object code from reading C++ file 'mymessage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../myMessage/mymessage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mymessage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_myMessage_t {
    QByteArrayData data[9];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myMessage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myMessage_t qt_meta_stringdata_myMessage = {
    {
QT_MOC_LITERAL(0, 0, 9), // "myMessage"
QT_MOC_LITERAL(1, 10, 22), // "on_QuestionBtn_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 25), // "on_InformationBtn_clicked"
QT_MOC_LITERAL(4, 60, 21), // "on_WarningBtn_clicked"
QT_MOC_LITERAL(5, 82, 22), // "on_CriticalBtn_clicked"
QT_MOC_LITERAL(6, 105, 19), // "on_AboutBtn_clicked"
QT_MOC_LITERAL(7, 125, 21), // "on_AboutQTBtn_clicked"
QT_MOC_LITERAL(8, 147, 20) // "on_CustomBtn_clicked"

    },
    "myMessage\0on_QuestionBtn_clicked\0\0"
    "on_InformationBtn_clicked\0"
    "on_WarningBtn_clicked\0on_CriticalBtn_clicked\0"
    "on_AboutBtn_clicked\0on_AboutQTBtn_clicked\0"
    "on_CustomBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myMessage[] = {

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
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void myMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        myMessage *_t = static_cast<myMessage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_QuestionBtn_clicked(); break;
        case 1: _t->on_InformationBtn_clicked(); break;
        case 2: _t->on_WarningBtn_clicked(); break;
        case 3: _t->on_CriticalBtn_clicked(); break;
        case 4: _t->on_AboutBtn_clicked(); break;
        case 5: _t->on_AboutQTBtn_clicked(); break;
        case 6: _t->on_CustomBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject myMessage::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_myMessage.data,
      qt_meta_data_myMessage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *myMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_myMessage.stringdata0))
        return static_cast<void*>(const_cast< myMessage*>(this));
    return QDialog::qt_metacast(_clname);
}

int myMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
