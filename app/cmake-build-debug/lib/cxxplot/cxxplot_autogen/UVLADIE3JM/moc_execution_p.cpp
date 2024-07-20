/****************************************************************************
** Meta object code from reading C++ file 'execution_p.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../lib/cxxplot/src/execution_p.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'execution_p.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cxxplot__mainWorker_t {
    const uint offsetsAndSize[10];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_cxxplot__mainWorker_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_cxxplot__mainWorker_t qt_meta_stringdata_cxxplot__mainWorker = {
    {
QT_MOC_LITERAL(0, 19), // "cxxplot::mainWorker"
QT_MOC_LITERAL(20, 8), // "finished"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 2), // "go"
QT_MOC_LITERAL(33, 12) // "return_value"

    },
    "cxxplot::mainWorker\0finished\0\0go\0"
    "return_value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cxxplot__mainWorker[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   33,    2, 0x0a,    2 /* Public */,
       4,    0,   34,    2, 0x0a,    3 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Int,

       0        // eod
};

void cxxplot::mainWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mainWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->go(); break;
        case 2: { int _r = _t->return_value();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mainWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mainWorker::finished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject cxxplot::mainWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_cxxplot__mainWorker.offsetsAndSize,
    qt_meta_data_cxxplot__mainWorker,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_cxxplot__mainWorker_t
, QtPrivate::TypeAndForceComplete<mainWorker, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *cxxplot::mainWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cxxplot::mainWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cxxplot__mainWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cxxplot::mainWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void cxxplot::mainWorker::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_cxxplot__async_invoker_t {
    const uint offsetsAndSize[8];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_cxxplot__async_invoker_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_cxxplot__async_invoker_t qt_meta_stringdata_cxxplot__async_invoker = {
    {
QT_MOC_LITERAL(0, 22), // "cxxplot::async_invoker"
QT_MOC_LITERAL(23, 8), // "finished"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 7) // "process"

    },
    "cxxplot::async_invoker\0finished\0\0"
    "process"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cxxplot__async_invoker[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   27,    2, 0x0a,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void cxxplot::async_invoker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<async_invoker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->process(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (async_invoker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&async_invoker::finished)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject cxxplot::async_invoker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_cxxplot__async_invoker.offsetsAndSize,
    qt_meta_data_cxxplot__async_invoker,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_cxxplot__async_invoker_t
, QtPrivate::TypeAndForceComplete<async_invoker, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *cxxplot::async_invoker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cxxplot::async_invoker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cxxplot__async_invoker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cxxplot::async_invoker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void cxxplot::async_invoker::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_cxxplot__invoker_t {
    const uint offsetsAndSize[2];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_cxxplot__invoker_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_cxxplot__invoker_t qt_meta_stringdata_cxxplot__invoker = {
    {
QT_MOC_LITERAL(0, 16) // "cxxplot::invoker"

    },
    "cxxplot::invoker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cxxplot__invoker[] = {

 // content:
      10,       // revision
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

void cxxplot::invoker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject cxxplot::invoker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_cxxplot__invoker.offsetsAndSize,
    qt_meta_data_cxxplot__invoker,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_cxxplot__invoker_t
, QtPrivate::TypeAndForceComplete<invoker, std::true_type>



>,
    nullptr
} };


const QMetaObject *cxxplot::invoker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cxxplot::invoker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cxxplot__invoker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cxxplot::invoker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
