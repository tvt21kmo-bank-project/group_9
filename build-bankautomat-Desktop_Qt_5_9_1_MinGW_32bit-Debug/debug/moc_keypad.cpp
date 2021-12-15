/****************************************************************************
** Meta object code from reading C++ file 'keypad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bankautomat/keypad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keypad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Keypad_t {
    QByteArrayData data[17];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Keypad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Keypad_t qt_meta_stringdata_Keypad = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Keypad"
QT_MOC_LITERAL(1, 7, 16), // "numpadiaPainettu"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "text"
QT_MOC_LITERAL(4, 30, 15), // "on_btn0_clicked"
QT_MOC_LITERAL(5, 46, 15), // "on_btn1_clicked"
QT_MOC_LITERAL(6, 62, 15), // "on_btn2_clicked"
QT_MOC_LITERAL(7, 78, 15), // "on_btn3_clicked"
QT_MOC_LITERAL(8, 94, 15), // "on_btn4_clicked"
QT_MOC_LITERAL(9, 110, 15), // "on_btn5_clicked"
QT_MOC_LITERAL(10, 126, 15), // "on_btn6_clicked"
QT_MOC_LITERAL(11, 142, 15), // "on_btn7_clicked"
QT_MOC_LITERAL(12, 158, 15), // "on_btn8_clicked"
QT_MOC_LITERAL(13, 174, 15), // "on_btn9_clicked"
QT_MOC_LITERAL(14, 190, 20), // "on_btnCancel_clicked"
QT_MOC_LITERAL(15, 211, 19), // "on_btnClear_clicked"
QT_MOC_LITERAL(16, 231, 19) // "on_btnEnter_clicked"

    },
    "Keypad\0numpadiaPainettu\0\0text\0"
    "on_btn0_clicked\0on_btn1_clicked\0"
    "on_btn2_clicked\0on_btn3_clicked\0"
    "on_btn4_clicked\0on_btn5_clicked\0"
    "on_btn6_clicked\0on_btn7_clicked\0"
    "on_btn8_clicked\0on_btn9_clicked\0"
    "on_btnCancel_clicked\0on_btnClear_clicked\0"
    "on_btnEnter_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Keypad[] = {

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
       1,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   87,    2, 0x08 /* Private */,
       5,    0,   88,    2, 0x08 /* Private */,
       6,    0,   89,    2, 0x08 /* Private */,
       7,    0,   90,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
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

void Keypad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Keypad *_t = static_cast<Keypad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->numpadiaPainettu((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_btn0_clicked(); break;
        case 2: _t->on_btn1_clicked(); break;
        case 3: _t->on_btn2_clicked(); break;
        case 4: _t->on_btn3_clicked(); break;
        case 5: _t->on_btn4_clicked(); break;
        case 6: _t->on_btn5_clicked(); break;
        case 7: _t->on_btn6_clicked(); break;
        case 8: _t->on_btn7_clicked(); break;
        case 9: _t->on_btn8_clicked(); break;
        case 10: _t->on_btn9_clicked(); break;
        case 11: _t->on_btnCancel_clicked(); break;
        case 12: _t->on_btnClear_clicked(); break;
        case 13: _t->on_btnEnter_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Keypad::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Keypad::numpadiaPainettu)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Keypad::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Keypad.data,
      qt_meta_data_Keypad,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Keypad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Keypad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Keypad.stringdata0))
        return static_cast<void*>(const_cast< Keypad*>(this));
    return QWidget::qt_metacast(_clname);
}

int Keypad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Keypad::numpadiaPainettu(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
