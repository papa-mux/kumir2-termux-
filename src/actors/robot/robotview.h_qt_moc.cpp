/****************************************************************************
** Meta object code from reading C++ file 'robotview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/actors/robot/robotview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'robotview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ActorRobot__RobotView_t {
    QByteArrayData data[11];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActorRobot__RobotView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActorRobot__RobotView_t qt_meta_stringdata_ActorRobot__RobotView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ActorRobot::RobotView"
QT_MOC_LITERAL(1, 22, 13), // "resizeRequest"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "newGeometry"
QT_MOC_LITERAL(4, 49, 12), // "handleDocked"
QT_MOC_LITERAL(5, 62, 14), // "changeEditMode"
QT_MOC_LITERAL(6, 77, 5), // "state"
QT_MOC_LITERAL(7, 83, 7), // "setDock"
QT_MOC_LITERAL(8, 91, 10), // "reloadSett"
QT_MOC_LITERAL(9, 102, 28), // "ExtensionSystem::SettingsPtr"
QT_MOC_LITERAL(10, 131, 8) // "settings"

    },
    "ActorRobot::RobotView\0resizeRequest\0"
    "\0newGeometry\0handleDocked\0changeEditMode\0"
    "state\0setDock\0reloadSett\0"
    "ExtensionSystem::SettingsPtr\0settings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActorRobot__RobotView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x0a /* Public */,
       7,    1,   46,    2, 0x0a /* Public */,
       8,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QSize,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void ActorRobot::RobotView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobotView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resizeRequest((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 1: _t->handleDocked(); break;
        case 2: _t->changeEditMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setDock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->reloadSett((*reinterpret_cast< ExtensionSystem::SettingsPtr(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RobotView::*)(const QSize & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotView::resizeRequest)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ActorRobot::RobotView::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_ActorRobot__RobotView.data,
    qt_meta_data_ActorRobot__RobotView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActorRobot::RobotView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActorRobot::RobotView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActorRobot__RobotView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int ActorRobot::RobotView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ActorRobot::RobotView::resizeRequest(const QSize & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
