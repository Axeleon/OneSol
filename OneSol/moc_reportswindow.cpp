/****************************************************************************
** Meta object code from reading C++ file 'reportswindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QtProcess/reportswindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reportswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ReportsWindow_t {
    QByteArrayData data[7];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReportsWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReportsWindow_t qt_meta_stringdata_ReportsWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ReportsWindow"
QT_MOC_LITERAL(1, 14, 16), // "returnFromReport"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 25), // "on_generateButton_clicked"
QT_MOC_LITERAL(4, 58, 36), // "on_timePeriodBox_currentIndex..."
QT_MOC_LITERAL(5, 95, 5), // "index"
QT_MOC_LITERAL(6, 101, 23) // "on_returnButton_clicked"

    },
    "ReportsWindow\0returnFromReport\0\0"
    "on_generateButton_clicked\0"
    "on_timePeriodBox_currentIndexChanged\0"
    "index\0on_returnButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReportsWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void ReportsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReportsWindow *_t = static_cast<ReportsWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->returnFromReport(); break;
        case 1: _t->on_generateButton_clicked(); break;
        case 2: _t->on_timePeriodBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_returnButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ReportsWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReportsWindow::returnFromReport)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ReportsWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ReportsWindow.data,
      qt_meta_data_ReportsWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ReportsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReportsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ReportsWindow.stringdata0))
        return static_cast<void*>(const_cast< ReportsWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int ReportsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ReportsWindow::returnFromReport()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
