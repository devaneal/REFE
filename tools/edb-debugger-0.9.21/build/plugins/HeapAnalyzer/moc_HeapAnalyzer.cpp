/****************************************************************************
** Meta object code from reading C++ file 'HeapAnalyzer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/HeapAnalyzer/HeapAnalyzer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HeapAnalyzer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HeapAnalyzer__HeapAnalyzer_t {
    QByteArrayData data[7];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HeapAnalyzer__HeapAnalyzer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HeapAnalyzer__HeapAnalyzer_t qt_meta_stringdata_HeapAnalyzer__HeapAnalyzer = {
    {
QT_MOC_LITERAL(0, 0, 26), // "HeapAnalyzer::HeapAnalyzer"
QT_MOC_LITERAL(1, 27, 6), // "author"
QT_MOC_LITERAL(2, 34, 10), // "Evan Teran"
QT_MOC_LITERAL(3, 45, 3), // "url"
QT_MOC_LITERAL(4, 49, 22), // "http://www.codef00.com"
QT_MOC_LITERAL(5, 72, 9), // "show_menu"
QT_MOC_LITERAL(6, 82, 0) // ""

    },
    "HeapAnalyzer::HeapAnalyzer\0author\0"
    "Evan Teran\0url\0http://www.codef00.com\0"
    "show_menu\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HeapAnalyzer__HeapAnalyzer[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       1,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // slots: name, argc, parameters, tag, flags
       5,    0,   23,    6, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void HeapAnalyzer::HeapAnalyzer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HeapAnalyzer *_t = static_cast<HeapAnalyzer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->show_menu(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject HeapAnalyzer::HeapAnalyzer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HeapAnalyzer__HeapAnalyzer.data,
      qt_meta_data_HeapAnalyzer__HeapAnalyzer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HeapAnalyzer::HeapAnalyzer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HeapAnalyzer::HeapAnalyzer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HeapAnalyzer__HeapAnalyzer.stringdata0))
        return static_cast<void*>(const_cast< HeapAnalyzer*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< HeapAnalyzer*>(this));
    if (!strcmp(_clname, "edb.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< HeapAnalyzer*>(this));
    return QObject::qt_metacast(_clname);
}

int HeapAnalyzer::HeapAnalyzer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x0f, 0x00, 'e',  'd',  'b',  '.',  'I',  'P', 
    'l',  'u',  'g',  'i',  'n',  '/',  '1',  '.', 
    '0',  0x00, 0x00, 0x00, 0x9b, 0x07, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0c, 0x00, 'H',  'e', 
    'a',  'p',  'A',  'n',  'a',  'l',  'y',  'z', 
    'e',  'r',  0x00, 0x00, 0x1a, 0xe0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x0f, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'h',  0x00, 0x00, 0x00, ',',  0x00, 0x00, 0x00,
    '\\', 0x00, 0x00, 0x00, 'L',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x0f, 0x00, 'e',  'd',  'b',  '.',  'I',  'P', 
    'l',  'u',  'g',  'i',  'n',  '/',  '1',  '.', 
    '0',  0x00, 0x00, 0x00, 0x95, 0x07, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1b, 0x0b, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0c, 0x00, 'H',  'e',  'a',  'p',  'A',  'n', 
    'a',  'l',  'y',  'z',  'e',  'r',  0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x1a, 0xe0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    ',',  0x00, 0x00, 0x00, 'H',  0x00, 0x00, 0x00,
    'h',  0x00, 0x00, 0x00, 't',  0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace HeapAnalyzer;
QT_MOC_EXPORT_PLUGIN(HeapAnalyzer::HeapAnalyzer, HeapAnalyzer)

QT_END_MOC_NAMESPACE
