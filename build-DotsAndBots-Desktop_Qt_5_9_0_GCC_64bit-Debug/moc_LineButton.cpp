/****************************************************************************
** Meta object code from reading C++ file 'LineButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DotsAndBots/LineButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LineButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LineButton_t {
    QByteArrayData data[11];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LineButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LineButton_t qt_meta_stringdata_LineButton = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LineButton"
QT_MOC_LITERAL(1, 11, 11), // "modeChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 15), // "Qt::Orientation"
QT_MOC_LITERAL(4, 40, 4), // "mode"
QT_MOC_LITERAL(5, 45, 12), // "colorChanged"
QT_MOC_LITERAL(6, 58, 5), // "color"
QT_MOC_LITERAL(7, 64, 7), // "setMode"
QT_MOC_LITERAL(8, 72, 8), // "setColor"
QT_MOC_LITERAL(9, 81, 5), // "reset"
QT_MOC_LITERAL(10, 87, 16) // "updateStyleSheet"

    },
    "LineButton\0modeChanged\0\0Qt::Orientation\0"
    "mode\0colorChanged\0color\0setMode\0"
    "setColor\0reset\0updateStyleSheet"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LineButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   50,    2, 0x0a /* Public */,
       8,    1,   53,    2, 0x0a /* Public */,
       9,    0,   56,    2, 0x0a /* Public */,
      10,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QColor,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QColor,    6,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       6, QMetaType::QColor, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void LineButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LineButton *_t = static_cast<LineButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modeChanged((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 1: _t->colorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->setMode((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 3: _t->setColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 4: _t->reset(); break;
        case 5: _t->updateStyleSheet(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LineButton::*_t)(Qt::Orientation );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LineButton::modeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LineButton::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LineButton::colorChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        LineButton *_t = static_cast<LineButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Orientation*>(_v) = _t->mode(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        LineButton *_t = static_cast<LineButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMode(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 1: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject LineButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_LineButton.data,
      qt_meta_data_LineButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LineButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LineButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LineButton.stringdata0))
        return static_cast<void*>(const_cast< LineButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int LineButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LineButton::modeChanged(Qt::Orientation _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LineButton::colorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
