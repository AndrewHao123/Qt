/****************************************************************************
** Meta object code from reading C++ file 'clientwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Robot_Control/clientwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClientWidget_t {
    QByteArrayData data[10];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientWidget_t qt_meta_stringdata_ClientWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ClientWidget"
QT_MOC_LITERAL(1, 13, 28), // "on_pushButtonConnect_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 28), // "on_pushButtonSend_01_clicked"
QT_MOC_LITERAL(4, 72, 26), // "on_pushButtonClose_clicked"
QT_MOC_LITERAL(5, 99, 28), // "on_pushButtonSend_02_clicked"
QT_MOC_LITERAL(6, 128, 28), // "on_pushButtonSend_03_clicked"
QT_MOC_LITERAL(7, 157, 28), // "on_pushButtonSend_04_clicked"
QT_MOC_LITERAL(8, 186, 28), // "on_pushButtonSend_05_clicked"
QT_MOC_LITERAL(9, 215, 28) // "on_pushButtonSend_06_clicked"

    },
    "ClientWidget\0on_pushButtonConnect_clicked\0"
    "\0on_pushButtonSend_01_clicked\0"
    "on_pushButtonClose_clicked\0"
    "on_pushButtonSend_02_clicked\0"
    "on_pushButtonSend_03_clicked\0"
    "on_pushButtonSend_04_clicked\0"
    "on_pushButtonSend_05_clicked\0"
    "on_pushButtonSend_06_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientWidget[] = {

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
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
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

void ClientWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientWidget *_t = static_cast<ClientWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonConnect_clicked(); break;
        case 1: _t->on_pushButtonSend_01_clicked(); break;
        case 2: _t->on_pushButtonClose_clicked(); break;
        case 3: _t->on_pushButtonSend_02_clicked(); break;
        case 4: _t->on_pushButtonSend_03_clicked(); break;
        case 5: _t->on_pushButtonSend_04_clicked(); break;
        case 6: _t->on_pushButtonSend_05_clicked(); break;
        case 7: _t->on_pushButtonSend_06_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ClientWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ClientWidget.data,
      qt_meta_data_ClientWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClientWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClientWidget.stringdata0))
        return static_cast<void*>(const_cast< ClientWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ClientWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
