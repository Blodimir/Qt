/****************************************************************************
** Meta object code from reading C++ file 'showtata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QT-master(Max_Jur)/QT/bd/showtata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'showtata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_showtata_t {
    QByteArrayData data[10];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_showtata_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_showtata_t qt_meta_stringdata_showtata = {
    {
QT_MOC_LITERAL(0, 0, 8), // "showtata"
QT_MOC_LITERAL(1, 9, 6), // "closed"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 39, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(5, 63, 30), // "on_comboBox_currentTextChanged"
QT_MOC_LITERAL(6, 94, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(7, 118, 11), // "sendMessage"
QT_MOC_LITERAL(8, 130, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(9, 154, 23) // "on_pushButton_5_clicked"

    },
    "showtata\0closed\0\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_comboBox_currentTextChanged\0"
    "on_pushButton_3_clicked\0sendMessage\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_showtata[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Bool,

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

void showtata::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        showtata *_t = static_cast<showtata *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->closed();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
//        case 3: _t->on_comboBox_currentTextChanged(); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->sendMessage(); break;
        case 6: _t->on_pushButton_4_clicked(); break;
        case 7: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef bool (showtata::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&showtata::closed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject showtata::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_showtata.data,
      qt_meta_data_showtata,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *showtata::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *showtata::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_showtata.stringdata0))
        return static_cast<void*>(const_cast< showtata*>(this));
    return QWidget::qt_metacast(_clname);
}

int showtata::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
bool showtata::closed()
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
