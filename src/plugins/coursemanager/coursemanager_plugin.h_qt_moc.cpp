/****************************************************************************
** Meta object code from reading C++ file 'coursemanager_plugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/plugins/coursemanager/coursemanager_plugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coursemanager_plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CourseManager__Plugin_t {
    QByteArrayData data[10];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CourseManager__Plugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CourseManager__Plugin_t qt_meta_stringdata_CourseManager__Plugin = {
    {
QT_MOC_LITERAL(0, 0, 21), // "CourseManager::Plugin"
QT_MOC_LITERAL(1, 22, 10), // "setEnabled"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "value"
QT_MOC_LITERAL(4, 40, 16), // "setTestingResult"
QT_MOC_LITERAL(5, 57, 16), // "ProgramRunStatus"
QT_MOC_LITERAL(6, 74, 6), // "status"
QT_MOC_LITERAL(7, 81, 9), // "nextField"
QT_MOC_LITERAL(8, 91, 9), // "prevField"
QT_MOC_LITERAL(9, 101, 11) // "lockContrls"

    },
    "CourseManager::Plugin\0setEnabled\0\0"
    "value\0setTestingResult\0ProgramRunStatus\0"
    "status\0nextField\0prevField\0lockContrls"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CourseManager__Plugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    2,   42,    2, 0x0a /* Public */,
       7,    0,   47,    2, 0x0a /* Public */,
       8,    0,   48,    2, 0x0a /* Public */,
       9,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CourseManager::Plugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Plugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setTestingResult((*reinterpret_cast< ProgramRunStatus(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->nextField(); break;
        case 3: _t->prevField(); break;
        case 4: _t->lockContrls(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CourseManager::Plugin::staticMetaObject = { {
    QMetaObject::SuperData::link<ExtensionSystem::KPlugin::staticMetaObject>(),
    qt_meta_stringdata_CourseManager__Plugin.data,
    qt_meta_data_CourseManager__Plugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CourseManager::Plugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CourseManager::Plugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CourseManager__Plugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Shared::CoursesInterface"))
        return static_cast< Shared::CoursesInterface*>(this);
    if (!strcmp(_clname, "kumir2.CourseManager"))
        return static_cast< Shared::CoursesInterface*>(this);
    return ExtensionSystem::KPlugin::qt_metacast(_clname);
}

int CourseManager::Plugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtensionSystem::KPlugin::qt_metacall(_c, _id, _a);
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

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x74,  'k',  'u',  'm',  'i',  'r',  '2', 
    '.',  'C',  'o',  'u',  'r',  's',  'e',  'M', 
    'a',  'n',  'a',  'g',  'e',  'r', 
    // "className"
    0x03,  0x66,  'P',  'l',  'u',  'g',  'i',  'n', 
    0xff, 
};
using namespace CourseManager;
QT_MOC_EXPORT_PLUGIN(CourseManager::Plugin, Plugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
