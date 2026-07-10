/****************************************************************************
** Meta object code from reading C++ file 'editorplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/plugins/editor/editorplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editorplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Editor__EditorPlugin_t {
    QByteArrayData data[6];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Editor__EditorPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Editor__EditorPlugin_t qt_meta_stringdata_Editor__EditorPlugin = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Editor::EditorPlugin"
QT_MOC_LITERAL(1, 21, 21), // "settingsUpdateRequest"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 4), // "keys"
QT_MOC_LITERAL(4, 49, 24), // "globalStateUpdateRequest"
QT_MOC_LITERAL(5, 74, 23) // "updateInsertMenuRequest"

    },
    "Editor::EditorPlugin\0settingsUpdateRequest\0"
    "\0keys\0globalStateUpdateRequest\0"
    "updateInsertMenuRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Editor__EditorPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    2,   32,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    2,    2,
    QMetaType::Void,

       0        // eod
};

void Editor::EditorPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditorPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->settingsUpdateRequest((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->globalStateUpdateRequest((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 2: _t->updateInsertMenuRequest(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditorPlugin::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditorPlugin::settingsUpdateRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EditorPlugin::*)(quint32 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditorPlugin::globalStateUpdateRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EditorPlugin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditorPlugin::updateInsertMenuRequest)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Editor::EditorPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<ExtensionSystem::KPlugin::staticMetaObject>(),
    qt_meta_stringdata_Editor__EditorPlugin.data,
    qt_meta_data_Editor__EditorPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Editor::EditorPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Editor::EditorPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Editor__EditorPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Shared::EditorInterface"))
        return static_cast< Shared::EditorInterface*>(this);
    if (!strcmp(_clname, "kumir2.editor"))
        return static_cast< Shared::EditorInterface*>(this);
    return ExtensionSystem::KPlugin::qt_metacast(_clname);
}

int Editor::EditorPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtensionSystem::KPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Editor::EditorPlugin::settingsUpdateRequest(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Editor::EditorPlugin::globalStateUpdateRequest(quint32 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Editor::EditorPlugin::updateInsertMenuRequest()
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
    0x02,  0x6d,  'k',  'u',  'm',  'i',  'r',  '2', 
    '.',  'E',  'd',  'i',  't',  'o',  'r', 
    // "className"
    0x03,  0x6c,  'E',  'd',  'i',  't',  'o',  'r', 
    'P',  'l',  'u',  'g',  'i',  'n', 
    0xff, 
};
using namespace Editor;
QT_MOC_EXPORT_PLUGIN(Editor::EditorPlugin, EditorPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
