/****************************************************************************
** Meta object code from reading C++ file 'logindialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QtProcess/logindialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LoginDialog_t {
    QByteArrayData data[13];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginDialog_t qt_meta_stringdata_LoginDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LoginDialog"
QT_MOC_LITERAL(1, 12, 12), // "staffClicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "staffLoggedin"
QT_MOC_LITERAL(4, 40, 14), // "reportLoggedin"
QT_MOC_LITERAL(5, 55, 11), // "reportLogin"
QT_MOC_LITERAL(6, 67, 23), // "backButtonPressedSignal"
QT_MOC_LITERAL(7, 91, 10), // "saleLoggin"
QT_MOC_LITERAL(8, 102, 14), // "inventoryLogin"
QT_MOC_LITERAL(9, 117, 21), // "keyboardButtonPressed"
QT_MOC_LITERAL(10, 139, 18), // "enterButtonPressed"
QT_MOC_LITERAL(11, 158, 17), // "backButtonPressed"
QT_MOC_LITERAL(12, 176, 21) // "on_backButton_clicked"

    },
    "LoginDialog\0staffClicked\0\0staffLoggedin\0"
    "reportLoggedin\0reportLogin\0"
    "backButtonPressedSignal\0saleLoggin\0"
    "inventoryLogin\0keyboardButtonPressed\0"
    "enterButtonPressed\0backButtonPressed\0"
    "on_backButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,
       8,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginDialog *_t = static_cast<LoginDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->staffClicked(); break;
        case 1: _t->staffLoggedin(); break;
        case 2: _t->reportLoggedin(); break;
        case 3: _t->reportLogin(); break;
        case 4: _t->backButtonPressedSignal(); break;
        case 5: _t->saleLoggin(); break;
        case 6: _t->inventoryLogin(); break;
        case 7: _t->keyboardButtonPressed(); break;
        case 8: _t->enterButtonPressed(); break;
        case 9: _t->backButtonPressed(); break;
        case 10: _t->on_backButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LoginDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginDialog::staffClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LoginDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginDialog::staffLoggedin)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LoginDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginDialog::reportLoggedin)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (LoginDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginDialog::reportLogin)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (LoginDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginDialog::backButtonPressedSignal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (LoginDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginDialog::saleLoggin)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (LoginDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginDialog::inventoryLogin)) {
                *result = 6;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject LoginDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LoginDialog.data,
      qt_meta_data_LoginDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LoginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LoginDialog.stringdata0))
        return static_cast<void*>(const_cast< LoginDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LoginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void LoginDialog::staffClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void LoginDialog::staffLoggedin()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void LoginDialog::reportLoggedin()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void LoginDialog::reportLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void LoginDialog::backButtonPressedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void LoginDialog::saleLoggin()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void LoginDialog::inventoryLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
