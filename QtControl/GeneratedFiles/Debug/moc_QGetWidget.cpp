/****************************************************************************
** Meta object code from reading C++ file 'QGetWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QGetWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGetWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGetWidget_t {
    QByteArrayData data[10];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGetWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGetWidget_t qt_meta_stringdata_QGetWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QGetWidget"
QT_MOC_LITERAL(1, 11, 18), // "on_btnBack_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "on_btnHome_clicked"
QT_MOC_LITERAL(4, 50, 20), // "on_btnNumGet_clicked"
QT_MOC_LITERAL(5, 71, 19), // "on_btnQRGet_clicked"
QT_MOC_LITERAL(6, 91, 21), // "on_btnNumSave_clicked"
QT_MOC_LITERAL(7, 113, 20), // "on_btnQRSave_clicked"
QT_MOC_LITERAL(8, 134, 22), // "on_slot_OpendoorFinish"
QT_MOC_LITERAL(9, 157, 23) // "on_slot_ClosedoorFinish"

    },
    "QGetWidget\0on_btnBack_clicked\0\0"
    "on_btnHome_clicked\0on_btnNumGet_clicked\0"
    "on_btnQRGet_clicked\0on_btnNumSave_clicked\0"
    "on_btnQRSave_clicked\0on_slot_OpendoorFinish\0"
    "on_slot_ClosedoorFinish"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGetWidget[] = {

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

void QGetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGetWidget *_t = static_cast<QGetWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnBack_clicked(); break;
        case 1: _t->on_btnHome_clicked(); break;
        case 2: _t->on_btnNumGet_clicked(); break;
        case 3: _t->on_btnQRGet_clicked(); break;
        case 4: _t->on_btnNumSave_clicked(); break;
        case 5: _t->on_btnQRSave_clicked(); break;
        case 6: _t->on_slot_OpendoorFinish(); break;
        case 7: _t->on_slot_ClosedoorFinish(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QGetWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QGetWidget.data,
      qt_meta_data_QGetWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGetWidget.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QGetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
