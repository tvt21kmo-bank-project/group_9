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
    char stringdata0[179];
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
QT_MOC_LITERAL(4, 39, 12), // "closeValikko"
QT_MOC_LITERAL(5, 52, 24), // "on_btnTilisiirto_clicked"
QT_MOC_LITERAL(6, 77, 24), // "on_btnNostaRahaa_clicked"
QT_MOC_LITERAL(7, 102, 24), // "on_btnNaytaSaldo_clicked"
QT_MOC_LITERAL(8, 127, 24), // "on_btnTapahtumat_clicked"
QT_MOC_LITERAL(9, 152, 26) // "on_btnKirjauduUlos_clicked"

    },
    "valikko\0openTilisiirto\0\0openNostaRahaa\0"
    "closeValikko\0on_btnTilisiirto_clicked\0"
    "on_btnNostaRahaa_clicked\0"
    "on_btnNaytaSaldo_clicked\0"
    "on_btnTapahtumat_clicked\0"
    "on_btnKirjauduUlos_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_valikko[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

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
        case 2: _t->closeValikko(); break;
        case 3: _t->on_btnTilisiirto_clicked(); break;
        case 4: _t->on_btnNostaRahaa_clicked(); break;
        case 5: _t->on_btnNaytaSaldo_clicked(); break;
        case 6: _t->on_btnTapahtumat_clicked(); break;
        case 7: _t->on_btnKirjauduUlos_clicked(); break;
        default: ;
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
        {
            typedef void (valikko::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&valikko::closeValikko)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
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

// SIGNAL 2
void valikko::closeValikko()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
