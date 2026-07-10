/****************************************************************************
** Meta object code from reading C++ file 'keyboardplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "keyboardplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keyboardplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ActorKeyboard__KeyboardPlugin_t {
    QByteArrayData data[13];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActorKeyboard__KeyboardPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActorKeyboard__KeyboardPlugin_t qt_meta_stringdata_ActorKeyboard__KeyboardPlugin = {
    {
QT_MOC_LITERAL(0, 0, 29), // "ActorKeyboard::KeyboardPlugin"
QT_MOC_LITERAL(1, 30, 4), // "sync"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "asyncRun"
QT_MOC_LITERAL(4, 45, 33), // "notifyOnTemplateParametersCha..."
QT_MOC_LITERAL(5, 79, 13), // "loadActorData"
QT_MOC_LITERAL(6, 93, 10), // "QIODevice*"
QT_MOC_LITERAL(7, 104, 6), // "source"
QT_MOC_LITERAL(8, 111, 13), // "asyncEvaluate"
QT_MOC_LITERAL(9, 125, 5), // "index"
QT_MOC_LITERAL(10, 131, 4), // "args"
QT_MOC_LITERAL(11, 136, 38), // "handleSettingsChangedCppImple..."
QT_MOC_LITERAL(12, 175, 4) // "keys"

    },
    "ActorKeyboard::KeyboardPlugin\0sync\0\0"
    "asyncRun\0notifyOnTemplateParametersChanged\0"
    "loadActorData\0QIODevice*\0source\0"
    "asyncEvaluate\0index\0args\0"
    "handleSettingsChangedCppImplementation\0"
    "keys"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActorKeyboard__KeyboardPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    2,   45,    2, 0x06 /* Public */,
       4,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   51,    2, 0x0a /* Public */,
       8,    2,   54,    2, 0x08 /* Private */,
      11,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::QVariantList,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::UInt, QMetaType::QVariantList,    9,   10,
    QMetaType::Void, QMetaType::QStringList,   12,

       0        // eod
};

void ActorKeyboard::KeyboardPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KeyboardPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sync(); break;
        case 1: _t->asyncRun((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const QVariantList(*)>(_a[2]))); break;
        case 2: _t->notifyOnTemplateParametersChanged(); break;
        case 3: _t->loadActorData((*reinterpret_cast< QIODevice*(*)>(_a[1]))); break;
        case 4: _t->asyncEvaluate((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const QVariantList(*)>(_a[2]))); break;
        case 5: _t->handleSettingsChangedCppImplementation((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KeyboardPlugin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyboardPlugin::sync)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KeyboardPlugin::*)(quint32 , const QVariantList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyboardPlugin::asyncRun)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KeyboardPlugin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyboardPlugin::notifyOnTemplateParametersChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ActorKeyboard::KeyboardPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<ExtensionSystem::KPlugin::staticMetaObject>(),
    qt_meta_stringdata_ActorKeyboard__KeyboardPlugin.data,
    qt_meta_data_ActorKeyboard__KeyboardPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActorKeyboard::KeyboardPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActorKeyboard::KeyboardPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActorKeyboard__KeyboardPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Shared::ActorInterface"))
        return static_cast< Shared::ActorInterface*>(this);
    if (!strcmp(_clname, "kumir2.Actor"))
        return static_cast< Shared::ActorInterface*>(this);
    return ExtensionSystem::KPlugin::qt_metacast(_clname);
}

int ActorKeyboard::KeyboardPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtensionSystem::KPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ActorKeyboard::KeyboardPlugin::sync()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ActorKeyboard::KeyboardPlugin::asyncRun(quint32 _t1, const QVariantList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ActorKeyboard::KeyboardPlugin::notifyOnTemplateParametersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x74,  'k',  'u',  'm',  'i',  'r',  '2', 
    '.',  'A',  'c',  't',  'o',  'r',  'K',  'e', 
    'y',  'b',  'o',  'a',  'r',  'd', 
    // "className"
    0x03,  0x6e,  'K',  'e',  'y',  'b',  'o',  'a', 
    'r',  'd',  'P',  'l',  'u',  'g',  'i',  'n', 
    0xff, 
};
using namespace ActorKeyboard;
QT_MOC_EXPORT_PLUGIN(ActorKeyboard::KeyboardPlugin, KeyboardPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
