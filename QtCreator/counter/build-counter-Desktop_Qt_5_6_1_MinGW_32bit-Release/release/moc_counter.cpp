/****************************************************************************
** Meta object code from reading C++ file 'counter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../counter/counter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'counter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Counter_t {
    QByteArrayData data[22];
    char stringdata0[344];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Counter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Counter_t qt_meta_stringdata_Counter = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Counter"
QT_MOC_LITERAL(1, 8, 11), // "change_flag"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 10), // "append_num"
QT_MOC_LITERAL(4, 32, 3), // "str"
QT_MOC_LITERAL(5, 36, 16), // "on_btn_1_clicked"
QT_MOC_LITERAL(6, 53, 16), // "on_btn_2_clicked"
QT_MOC_LITERAL(7, 70, 16), // "on_btn_3_clicked"
QT_MOC_LITERAL(8, 87, 16), // "on_btn_4_clicked"
QT_MOC_LITERAL(9, 104, 16), // "on_btn_5_clicked"
QT_MOC_LITERAL(10, 121, 16), // "on_btn_6_clicked"
QT_MOC_LITERAL(11, 138, 16), // "on_btn_7_clicked"
QT_MOC_LITERAL(12, 155, 16), // "on_btn_8_clicked"
QT_MOC_LITERAL(13, 172, 16), // "on_btn_9_clicked"
QT_MOC_LITERAL(14, 189, 16), // "on_btn_0_clicked"
QT_MOC_LITERAL(15, 206, 20), // "on_btn_clear_clicked"
QT_MOC_LITERAL(16, 227, 18), // "on_btn_add_clicked"
QT_MOC_LITERAL(17, 246, 18), // "on_btn_sub_clicked"
QT_MOC_LITERAL(18, 265, 18), // "on_btn_mul_clicked"
QT_MOC_LITERAL(19, 284, 18), // "on_btn_div_clicked"
QT_MOC_LITERAL(20, 303, 21), // "on_btn_result_clicked"
QT_MOC_LITERAL(21, 325, 18) // "on_btn_del_clicked"

    },
    "Counter\0change_flag\0\0append_num\0str\0"
    "on_btn_1_clicked\0on_btn_2_clicked\0"
    "on_btn_3_clicked\0on_btn_4_clicked\0"
    "on_btn_5_clicked\0on_btn_6_clicked\0"
    "on_btn_7_clicked\0on_btn_8_clicked\0"
    "on_btn_9_clicked\0on_btn_0_clicked\0"
    "on_btn_clear_clicked\0on_btn_add_clicked\0"
    "on_btn_sub_clicked\0on_btn_mul_clicked\0"
    "on_btn_div_clicked\0on_btn_result_clicked\0"
    "on_btn_del_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Counter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x08 /* Private */,
       3,    1,  110,    2, 0x08 /* Private */,
       5,    0,  113,    2, 0x08 /* Private */,
       6,    0,  114,    2, 0x08 /* Private */,
       7,    0,  115,    2, 0x08 /* Private */,
       8,    0,  116,    2, 0x08 /* Private */,
       9,    0,  117,    2, 0x08 /* Private */,
      10,    0,  118,    2, 0x08 /* Private */,
      11,    0,  119,    2, 0x08 /* Private */,
      12,    0,  120,    2, 0x08 /* Private */,
      13,    0,  121,    2, 0x08 /* Private */,
      14,    0,  122,    2, 0x08 /* Private */,
      15,    0,  123,    2, 0x08 /* Private */,
      16,    0,  124,    2, 0x08 /* Private */,
      17,    0,  125,    2, 0x08 /* Private */,
      18,    0,  126,    2, 0x08 /* Private */,
      19,    0,  127,    2, 0x08 /* Private */,
      20,    0,  128,    2, 0x08 /* Private */,
      21,    0,  129,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Counter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Counter *_t = static_cast<Counter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->change_flag(); break;
        case 1: _t->append_num((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_btn_1_clicked(); break;
        case 3: _t->on_btn_2_clicked(); break;
        case 4: _t->on_btn_3_clicked(); break;
        case 5: _t->on_btn_4_clicked(); break;
        case 6: _t->on_btn_5_clicked(); break;
        case 7: _t->on_btn_6_clicked(); break;
        case 8: _t->on_btn_7_clicked(); break;
        case 9: _t->on_btn_8_clicked(); break;
        case 10: _t->on_btn_9_clicked(); break;
        case 11: _t->on_btn_0_clicked(); break;
        case 12: _t->on_btn_clear_clicked(); break;
        case 13: _t->on_btn_add_clicked(); break;
        case 14: _t->on_btn_sub_clicked(); break;
        case 15: _t->on_btn_mul_clicked(); break;
        case 16: _t->on_btn_div_clicked(); break;
        case 17: _t->on_btn_result_clicked(); break;
        case 18: _t->on_btn_del_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Counter::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Counter.data,
      qt_meta_data_Counter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Counter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Counter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Counter.stringdata0))
        return static_cast<void*>(const_cast< Counter*>(this));
    return QDialog::qt_metacast(_clname);
}

int Counter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
