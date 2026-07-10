/****************************************************************************
** Meta object code from reading C++ file 'rfield.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/actors/robot/rfield.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rfield.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ActorRobot__FieldItm_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActorRobot__FieldItm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActorRobot__FieldItm_t qt_meta_stringdata_ActorRobot__FieldItm = {
    {
QT_MOC_LITERAL(0, 0, 20) // "ActorRobot::FieldItm"

    },
    "ActorRobot::FieldItm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActorRobot__FieldItm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ActorRobot::FieldItm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ActorRobot::FieldItm::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsWidget::staticMetaObject>(),
    qt_meta_stringdata_ActorRobot__FieldItm.data,
    qt_meta_data_ActorRobot__FieldItm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActorRobot::FieldItm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActorRobot::FieldItm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActorRobot__FieldItm.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsWidget::qt_metacast(_clname);
}

int ActorRobot::FieldItm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ActorRobot__RoboField_t {
    QByteArrayData data[13];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActorRobot__RoboField_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActorRobot__RoboField_t qt_meta_stringdata_ActorRobot__RoboField = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ActorRobot::RoboField"
QT_MOC_LITERAL(1, 22, 10), // "MousePress"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 1), // "x"
QT_MOC_LITERAL(4, 36, 1), // "y"
QT_MOC_LITERAL(5, 38, 4), // "Flag"
QT_MOC_LITERAL(6, 43, 9), // "roboMoved"
QT_MOC_LITERAL(7, 53, 3), // "pos"
QT_MOC_LITERAL(8, 57, 8), // "timerTic"
QT_MOC_LITERAL(9, 66, 6), // "addRow"
QT_MOC_LITERAL(10, 73, 6), // "remRow"
QT_MOC_LITERAL(11, 80, 6), // "remCol"
QT_MOC_LITERAL(12, 87, 6) // "addCol"

    },
    "ActorRobot::RoboField\0MousePress\0\0x\0"
    "y\0Flag\0roboMoved\0pos\0timerTic\0addRow\0"
    "remRow\0remCol\0addCol"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActorRobot__RoboField[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   56,    2, 0x0a /* Public */,
       8,    0,   59,    2, 0x0a /* Public */,
       9,    0,   60,    2, 0x0a /* Public */,
      10,    0,   61,    2, 0x0a /* Public */,
      11,    0,   62,    2, 0x0a /* Public */,
      12,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::Bool,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QPointF,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ActorRobot::RoboField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoboField *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->MousePress((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->roboMoved((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 2: _t->timerTic(); break;
        case 3: _t->addRow(); break;
        case 4: _t->remRow(); break;
        case 5: _t->remCol(); break;
        case 6: _t->addCol(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RoboField::*)(qreal , qreal , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoboField::MousePress)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ActorRobot::RoboField::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_ActorRobot__RoboField.data,
    qt_meta_data_ActorRobot__RoboField,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActorRobot::RoboField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActorRobot::RoboField::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActorRobot__RoboField.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int ActorRobot::RoboField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ActorRobot::RoboField::MousePress(qreal _t1, qreal _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
