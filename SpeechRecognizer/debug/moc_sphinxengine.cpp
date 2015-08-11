/****************************************************************************
** Meta object code from reading C++ file 'sphinxengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sphinxengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sphinxengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SphinxEngine_t {
    QByteArrayData data[6];
    char stringdata[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SphinxEngine_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SphinxEngine_t qt_meta_stringdata_SphinxEngine = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 16),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 11),
QT_MOC_LITERAL(4, 43, 4),
QT_MOC_LITERAL(5, 48, 22)
    },
    "SphinxEngine\0speechRecognized\0\0"
    "const char*\0word\0handleStartRecognition\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SphinxEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    0,   27,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SphinxEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SphinxEngine *_t = static_cast<SphinxEngine *>(_o);
        switch (_id) {
        case 0: _t->speechRecognized((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 1: _t->handleStartRecognition(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SphinxEngine::*_t)(const char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SphinxEngine::speechRecognized)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SphinxEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SphinxEngine.data,
      qt_meta_data_SphinxEngine,  qt_static_metacall, 0, 0}
};


const QMetaObject *SphinxEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SphinxEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SphinxEngine.stringdata))
        return static_cast<void*>(const_cast< SphinxEngine*>(this));
    return QObject::qt_metacast(_clname);
}

int SphinxEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SphinxEngine::speechRecognized(const char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
