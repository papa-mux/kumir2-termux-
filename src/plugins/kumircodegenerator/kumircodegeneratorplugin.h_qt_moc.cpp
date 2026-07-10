/****************************************************************************
** Meta object code from reading C++ file 'kumircodegeneratorplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/plugins/kumircodegenerator/kumircodegeneratorplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kumircodegeneratorplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KumirCodeGenerator__KumirCodeGeneratorPlugin_t {
    QByteArrayData data[1];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KumirCodeGenerator__KumirCodeGeneratorPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KumirCodeGenerator__KumirCodeGeneratorPlugin_t qt_meta_stringdata_KumirCodeGenerator__KumirCodeGeneratorPlugin = {
    {
QT_MOC_LITERAL(0, 0, 44) // "KumirCodeGenerator::KumirCode..."

    },
    "KumirCodeGenerator::KumirCodeGeneratorPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KumirCodeGenerator__KumirCodeGeneratorPlugin[] = {

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

void KumirCodeGenerator::KumirCodeGeneratorPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject KumirCodeGenerator::KumirCodeGeneratorPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<ExtensionSystem::KPlugin::staticMetaObject>(),
    qt_meta_stringdata_KumirCodeGenerator__KumirCodeGeneratorPlugin.data,
    qt_meta_data_KumirCodeGenerator__KumirCodeGeneratorPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KumirCodeGenerator::KumirCodeGeneratorPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KumirCodeGenerator::KumirCodeGeneratorPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KumirCodeGenerator__KumirCodeGeneratorPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "GeneratorInterface"))
        return static_cast< GeneratorInterface*>(this);
    if (!strcmp(_clname, "kumir2.generator"))
        return static_cast< Shared::GeneratorInterface*>(this);
    return ExtensionSystem::KPlugin::qt_metacast(_clname);
}

int KumirCodeGenerator::KumirCodeGeneratorPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0x02,  0x78,  0x19,  'k',  'u',  'm',  'i',  'r', 
    '2',  '.',  'K',  'u',  'm',  'i',  'r',  'C', 
    'o',  'd',  'e',  'G',  'e',  'n',  'e',  'r', 
    'a',  't',  'o',  'r', 
    // "className"
    0x03,  0x78,  0x18,  'K',  'u',  'm',  'i',  'r', 
    'C',  'o',  'd',  'e',  'G',  'e',  'n',  'e', 
    'r',  'a',  't',  'o',  'r',  'P',  'l',  'u', 
    'g',  'i',  'n', 
    0xff, 
};
using namespace KumirCodeGenerator;
QT_MOC_EXPORT_PLUGIN(KumirCodeGenerator::KumirCodeGeneratorPlugin, KumirCodeGeneratorPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
