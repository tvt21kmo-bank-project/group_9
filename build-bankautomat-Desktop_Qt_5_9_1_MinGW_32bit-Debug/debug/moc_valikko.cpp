/****************************************************************************
** Meta object code from reading C++ file 'valikko.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bankautomat/valikko.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'valikko.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_valikko_t {
    QByteArrayData data[10];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_valikko_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_valikko_t qt_meta_stringdata_valikko = {
    {
QT_MOC_LITERAL(0, 0, 7), // "valikko"
QT_MOC_LITERAL(1, 8, 14), // "openTilisiirto"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "openNostaRahaa"
QT_MOC_LITERAL(4, 39, 24), // "on_btnTilisiirto_clicked"
QT_MOC_LITERAL(5, 64, 24), // "on_btnNostaRahaa_clicked"
QT_MOC_LITERAL(6, 89, 24), // "on_btnNaytaSaldo_clicked"
QT_MOC_LITERAL(7, 114, 12), // "getSaldoSlot"
QT_MOC_LITERAL(8, 127, 14), // "QNetworkReply*"
QT_MOC_LITERAL(9, 142, 5) // "reply"

    },
    "valikko\0openTilisiirto\0\0openNostaRahaa\0"
    "on_btnTilisiirto_clicked\0"
    "on_btnNostaRahaa_clicked\0"
    "on_btnNaytaSaldo_clicked\0getSaldoSlot\0"
    "QNetworkReply*\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_valikko[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void valikko::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        valikko *_t = static_cast<valikko *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openTilisiirto(); break;
        case 1: _t->openNostaRahaa(); break;
        case 2: _t->on_btnTilisiirto_clicked(); break;
        case 3: _t->on_btnNostaRahaa_clicked(); break;
        case 4: _t->on_btnNaytaSaldo_clicked(); break;
        case 5: _t->getSaldoSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (valikko::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&valikko::openTilisiirto)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (valikko::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&valikko::openNostaRahaa)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject valikko::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_valikko.data,
      qt_meta_data_valikko,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *valikko::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *valikko::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_valikko.stringdata0))
        return static_cast<void*>(const_cast< valikko*>(this));
    return QWidget::qt_metacast(_clname);
}

int valikko::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void valikko::openTilisiirto()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void valikko::openNostaRahaa()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
