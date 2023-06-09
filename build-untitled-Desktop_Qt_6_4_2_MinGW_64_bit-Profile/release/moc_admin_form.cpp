/****************************************************************************
** Meta object code from reading C++ file 'admin_form.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../university_project_client/ui/admin_form.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin_form.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_admin_form_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[32];
    char stringdata4[15];
    char stringdata5[9];
    char stringdata6[15];
    char stringdata7[32];
    char stringdata8[6];
    char stringdata9[39];
    char stringdata10[5];
    char stringdata11[26];
    char stringdata12[17];
    char stringdata13[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_admin_form_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_admin_form_t qt_meta_stringdata_admin_form = {
    {
        QT_MOC_LITERAL(0, 10),  // "admin_form"
        QT_MOC_LITERAL(11, 15),  // "press_user_info"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 31),  // "on_pushButton_user_info_clicked"
        QT_MOC_LITERAL(60, 14),  // "get_admin_json"
        QT_MOC_LITERAL(75, 8),  // "ser_json"
        QT_MOC_LITERAL(84, 14),  // "prepare_window"
        QT_MOC_LITERAL(99, 31),  // "on_comboBox_currentIndexChanged"
        QT_MOC_LITERAL(131, 5),  // "index"
        QT_MOC_LITERAL(137, 38),  // "on_lineEdit_services_search_t..."
        QT_MOC_LITERAL(176, 4),  // "arg1"
        QT_MOC_LITERAL(181, 25),  // "on_listWidget_itemClicked"
        QT_MOC_LITERAL(207, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(224, 4)   // "item"
    },
    "admin_form",
    "press_user_info",
    "",
    "on_pushButton_user_info_clicked",
    "get_admin_json",
    "ser_json",
    "prepare_window",
    "on_comboBox_currentIndexChanged",
    "index",
    "on_lineEdit_services_search_textEdited",
    "arg1",
    "on_listWidget_itemClicked",
    "QListWidgetItem*",
    "item"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_admin_form[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    1,   58,    2, 0x08,    3 /* Private */,
       6,    0,   61,    2, 0x08,    5 /* Private */,
       7,    1,   62,    2, 0x08,    6 /* Private */,
       9,    1,   65,    2, 0x08,    8 /* Private */,
      11,    1,   68,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject admin_form::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_admin_form.offsetsAndSizes,
    qt_meta_data_admin_form,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_admin_form_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<admin_form, std::true_type>,
        // method 'press_user_info'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_user_info_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'get_admin_json'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'prepare_window'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_lineEdit_services_search_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_listWidget_itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>
    >,
    nullptr
} };

void admin_form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<admin_form *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->press_user_info(); break;
        case 1: _t->on_pushButton_user_info_clicked(); break;
        case 2: _t->get_admin_json((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->prepare_window(); break;
        case 4: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_lineEdit_services_search_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_listWidget_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (admin_form::*)();
            if (_t _q_method = &admin_form::press_user_info; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *admin_form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *admin_form::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_admin_form.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int admin_form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void admin_form::press_user_info()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
