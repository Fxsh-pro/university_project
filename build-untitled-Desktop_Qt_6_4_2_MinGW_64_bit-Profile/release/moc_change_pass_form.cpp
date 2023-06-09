/****************************************************************************
** Meta object code from reading C++ file 'change_pass_form.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../university_project_client/h/change_pass_form.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'change_pass_form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_change_pass_form_t {
    uint offsetsAndSizes[26];
    char stringdata0[17];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[14];
    char stringdata5[11];
    char stringdata6[6];
    char stringdata7[30];
    char stringdata8[23];
    char stringdata9[29];
    char stringdata10[22];
    char stringdata11[41];
    char stringdata12[39];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_change_pass_form_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_change_pass_form_t qt_meta_stringdata_change_pass_form = {
    {
        QT_MOC_LITERAL(0, 16),  // "change_pass_form"
        QT_MOC_LITERAL(17, 19),  // "slot_on_change_pass"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 9),  // "user_name"
        QT_MOC_LITERAL(48, 13),  // "keyPressEvent"
        QT_MOC_LITERAL(62, 10),  // "QKeyEvent*"
        QT_MOC_LITERAL(73, 5),  // "event"
        QT_MOC_LITERAL(79, 29),  // "on_confirm_pushbutton_clicked"
        QT_MOC_LITERAL(109, 22),  // "slot_on_change_pass_ok"
        QT_MOC_LITERAL(132, 28),  // "on_cancel_pushbutton_clicked"
        QT_MOC_LITERAL(161, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(183, 40),  // "on_pushButton_set_visible_pas..."
        QT_MOC_LITERAL(224, 38)   // "on_pushButton_set_visible_pas..."
    },
    "change_pass_form",
    "slot_on_change_pass",
    "",
    "user_name",
    "keyPressEvent",
    "QKeyEvent*",
    "event",
    "on_confirm_pushbutton_clicked",
    "slot_on_change_pass_ok",
    "on_cancel_pushbutton_clicked",
    "on_pushButton_clicked",
    "on_pushButton_set_visible_pass_2_clicked",
    "on_pushButton_set_visible_pass_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_change_pass_form[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x0a,    1 /* Public */,
       4,    1,   65,    2, 0x0a,    3 /* Public */,
       7,    0,   68,    2, 0x08,    5 /* Private */,
       8,    0,   69,    2, 0x08,    6 /* Private */,
       9,    0,   70,    2, 0x08,    7 /* Private */,
      10,    0,   71,    2, 0x08,    8 /* Private */,
      11,    0,   72,    2, 0x08,    9 /* Private */,
      12,    0,   73,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject change_pass_form::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_change_pass_form.offsetsAndSizes,
    qt_meta_data_change_pass_form,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_change_pass_form_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<change_pass_form, std::true_type>,
        // method 'slot_on_change_pass'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'keyPressEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>,
        // method 'on_confirm_pushbutton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_on_change_pass_ok'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cancel_pushbutton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_set_visible_pass_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_set_visible_pass_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void change_pass_form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<change_pass_form *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slot_on_change_pass((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->keyPressEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 2: _t->on_confirm_pushbutton_clicked(); break;
        case 3: _t->slot_on_change_pass_ok(); break;
        case 4: _t->on_cancel_pushbutton_clicked(); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_pushButton_set_visible_pass_2_clicked(); break;
        case 7: _t->on_pushButton_set_visible_pass_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *change_pass_form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *change_pass_form::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_change_pass_form.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int change_pass_form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
