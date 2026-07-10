/****************************************************************************
** Meta object code from reading C++ file 'kumiranalizerplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/plugins/kumiranalizer/kumiranalizerplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kumiranalizerplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KumirAnalizer__KumirAnalizerPlugin_t {
    QByteArrayData data[1];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KumirAnalizer__KumirAnalizerPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KumirAnalizer__KumirAnalizerPlugin_t qt_meta_stringdata_KumirAnalizer__KumirAnalizerPlugin = {
    {
QT_MOC_LITERAL(0, 0, 34) // "KumirAnalizer::KumirAnalizerP..."

    },
    "KumirAnalizer::KumirAnalizerPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KumirAnalizer__KumirAnalizerPlugin[] = {

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

void KumirAnalizer::KumirAnalizerPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject KumirAnalizer::KumirAnalizerPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<ExtensionSystem::KPlugin::staticMetaObject>(),
    qt_meta_stringdata_KumirAnalizer__KumirAnalizerPlugin.data,
    qt_meta_data_KumirAnalizer__KumirAnalizerPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KumirAnalizer::KumirAnalizerPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KumirAnalizer::KumirAnalizerPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KumirAnalizer__KumirAnalizerPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Shared::AnalizerInterface"))
        return static_cast< Shared::AnalizerInterface*>(this);
    if (!strcmp(_clname, "kumir2.Analizer"))
        return static_cast< Shared::AnalizerInterface*>(this);
    return ExtensionSystem::KPlugin::qt_metacast(_clname);
}

int KumirAnalizer::KumirAnalizerPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0x02,  0x74,  'k',  'u',  'm',  'i',  'r',  '2', 
    '.',  'K',  'u',  'm',  'i',  'r',  'A',  'n', 
    'a',  'l',  'i',  'z',  'e',  'r', 
    // "className"
    0x03,  0x73,  'K',  'u',  'm',  'i',  'r',  'A', 
    'n',  'a',  'l',  'i',  'z',  'e',  'r',  'P', 
    'l',  'u',  'g',  'i',  'n', 
    0xff, 
};
using namespace KumirAnalizer;
QT_MOC_EXPORT_PLUGIN(KumirAnalizer::KumirAnalizerPlugin, KumirAnalizerPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
