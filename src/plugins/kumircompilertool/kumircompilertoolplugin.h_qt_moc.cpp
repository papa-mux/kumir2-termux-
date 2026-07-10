/****************************************************************************
** Meta object code from reading C++ file 'kumircompilertoolplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/plugins/kumircompilertool/kumircompilertoolplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kumircompilertoolplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KumirCompilerTool__KumirCompilerToolPlugin_t {
    QByteArrayData data[1];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KumirCompilerTool__KumirCompilerToolPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KumirCompilerTool__KumirCompilerToolPlugin_t qt_meta_stringdata_KumirCompilerTool__KumirCompilerToolPlugin = {
    {
QT_MOC_LITERAL(0, 0, 42) // "KumirCompilerTool::KumirCompi..."

    },
    "KumirCompilerTool::KumirCompilerToolPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KumirCompilerTool__KumirCompilerToolPlugin[] = {

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

void KumirCompilerTool::KumirCompilerToolPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject KumirCompilerTool::KumirCompilerToolPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<ExtensionSystem::KPlugin::staticMetaObject>(),
    qt_meta_stringdata_KumirCompilerTool__KumirCompilerToolPlugin.data,
    qt_meta_data_KumirCompilerTool__KumirCompilerToolPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KumirCompilerTool::KumirCompilerToolPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KumirCompilerTool::KumirCompilerToolPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KumirCompilerTool__KumirCompilerToolPlugin.stringdata0))
        return static_cast<void*>(this);
    return ExtensionSystem::KPlugin::qt_metacast(_clname);
}

int KumirCompilerTool::KumirCompilerToolPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtensionSystem::KPlugin::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x18,  'k',  'u',  'm',  'i',  'r', 
    '2',  '.',  'K',  'u',  'm',  'i',  'r',  'C', 
    'o',  'm',  'p',  'i',  'l',  'e',  'r',  'T', 
    'o',  'o',  'l', 
    // "className"
    0x03,  0x77,  'K',  'u',  'm',  'i',  'r',  'C', 
    'o',  'm',  'p',  'i',  'l',  'e',  'r',  'T', 
    'o',  'o',  'l',  'P',  'l',  'u',  'g',  'i', 
    'n', 
    0xff, 
};
using namespace KumirCompilerTool;
QT_MOC_EXPORT_PLUGIN(KumirCompilerTool::KumirCompilerToolPlugin, KumirCompilerToolPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
