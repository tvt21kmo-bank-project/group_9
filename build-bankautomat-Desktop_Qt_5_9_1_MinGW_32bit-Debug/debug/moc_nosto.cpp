/****************************************************************************
** Meta object code from reading C++ file 'nosto.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bankautomat/nosto.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nosto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Nosto_t {
    QByteArrayData data[19];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Nosto_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Nosto_t qt_meta_stringdata_Nosto = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Nosto"
QT_MOC_LITERAL(1, 6, 13), // "NostoPainettu"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 20), // "custom_summan_syotto"
QT_MOC_LITERAL(4, 42, 4), // "text"
QT_MOC_LITERAL(5, 47, 25), // "on_btnNostoAlkuun_clicked"
QT_MOC_LITERAL(6, 73, 21), // "on_btnNosto20_clicked"
QT_MOC_LITERAL(7, 95, 21), // "on_btnNosto40_clicked"
QT_MOC_LITERAL(8, 117, 21), // "on_btnNosto60_clicked"
QT_MOC_LITERAL(9, 139, 22), // "on_btnNosto100_clicked"
QT_MOC_LITERAL(10, 162, 22), // "on_btnNosto250_clicked"
QT_MOC_LITERAL(11, 185, 22), // "on_btnNosto500_clicked"
QT_MOC_LITERAL(12, 208, 27), // "on_btnNostoMuuSumma_clicked"
QT_MOC_LITERAL(13, 236, 13), // "infoNostoSlot"
QT_MOC_LITERAL(14, 250, 14), // "QNetworkReply*"
QT_MOC_LITERAL(15, 265, 5), // "reply"
QT_MOC_LITERAL(16, 271, 9), // "onTimeout"
QT_MOC_LITERAL(17, 281, 8), // "nosta_20"
QT_MOC_LITERAL(18, 290, 22) // "clear_animation_screen"

    },
    "Nosto\0NostoPainettu\0\0custom_summan_syotto\0"
    "text\0on_btnNostoAlkuun_clicked\0"
    "on_btnNosto20_clicked\0on_btnNosto40_clicked\0"
    "on_btnNosto60_clicked\0on_btnNosto100_clicked\0"
    "on_btnNosto250_clicked\0on_btnNosto500_clicked\0"
    "on_btnNostoMuuSumma_clicked\0infoNostoSlot\0"
    "QNetworkReply*\0reply\0onTimeout\0nosta_20\0"
    "clear_animation_screen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Nosto[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   85,    2, 0x0a /* Public */,
       5,    0,   88,    2, 0x08 /* Private */,
       6,    0,   89,    2, 0x08 /* Private */,
       7,    0,   90,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    1,   96,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,
      17,    0,  100,    2, 0x08 /* Private */,
      18,    0,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Nosto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Nosto *_t = static_cast<Nosto *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NostoPainettu(); break;
        case 1: _t->custom_summan_syotto((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_btnNostoAlkuun_clicked(); break;
        case 3: _t->on_btnNosto20_clicked(); break;
        case 4: _t->on_btnNosto40_clicked(); break;
        case 5: _t->on_btnNosto60_clicked(); break;
        case 6: _t->on_btnNosto100_clicked(); break;
        case 7: _t->on_btnNosto250_clicked(); break;
        case 8: _t->on_btnNosto500_clicked(); break;
        case 9: _t->on_btnNostoMuuSumma_clicked(); break;
        case 10: _t->infoNostoSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 11: _t->onTimeout(); break;
        case 12: _t->nosta_20(); break;
        case 13: _t->clear_animation_screen(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
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
            typedef void (Nosto::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Nosto::NostoPainettu)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Nosto::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Nosto.data,
      qt_meta_data_Nosto,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Nosto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Nosto::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Nosto.stringdata0))
        return static_cast<void*>(const_cast< Nosto*>(this));
    return QDialog::qt_metacast(_clname);
}

int Nosto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Nosto::NostoPainettu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
