/****************************************************************************
** Meta object code from reading C++ file 'videoplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../chapter5/videoplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videoplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VideoPlayer_t {
    QByteArrayData data[12];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoPlayer_t qt_meta_stringdata_VideoPlayer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VideoPlayer"
QT_MOC_LITERAL(1, 12, 10), // "onTimerOut"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "setPosTime"
QT_MOC_LITERAL(4, 35, 4), // "time"
QT_MOC_LITERAL(5, 40, 18), // "on_playBtn_clicked"
QT_MOC_LITERAL(6, 59, 26), // "on_progressBar_sliderMoved"
QT_MOC_LITERAL(7, 86, 8), // "position"
QT_MOC_LITERAL(8, 95, 29), // "on_progressBar_sliderReleased"
QT_MOC_LITERAL(9, 125, 28), // "on_progressBar_sliderPressed"
QT_MOC_LITERAL(10, 154, 26), // "on_voiceSlider_sliderMoved"
QT_MOC_LITERAL(11, 181, 16) // "on_voice_clicked"

    },
    "VideoPlayer\0onTimerOut\0\0setPosTime\0"
    "time\0on_playBtn_clicked\0"
    "on_progressBar_sliderMoved\0position\0"
    "on_progressBar_sliderReleased\0"
    "on_progressBar_sliderPressed\0"
    "on_voiceSlider_sliderMoved\0on_voice_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    1,   55,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    1,   64,    2, 0x08 /* Private */,
      11,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void VideoPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoPlayer *_t = static_cast<VideoPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTimerOut(); break;
        case 1: _t->setPosTime((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->on_playBtn_clicked(); break;
        case 3: _t->on_progressBar_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_progressBar_sliderReleased(); break;
        case 5: _t->on_progressBar_sliderPressed(); break;
        case 6: _t->on_voiceSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_voice_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject VideoPlayer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_VideoPlayer.data,
      qt_meta_data_VideoPlayer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VideoPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VideoPlayer.stringdata0))
        return static_cast<void*>(const_cast< VideoPlayer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int VideoPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
