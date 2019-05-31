/****************************************************************************
** Meta object code from reading C++ file 'AZUREMainThread.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../gui/include/AZUREMainThread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AZUREMainThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AZUREMainThreadWorker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AZUREMainThreadWorker[] = {
    "AZUREMainThreadWorker\0\0done()\0run()\0"
};

void AZUREMainThreadWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AZUREMainThreadWorker *_t = static_cast<AZUREMainThreadWorker *>(_o);
        switch (_id) {
        case 0: _t->done(); break;
        case 1: _t->run(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AZUREMainThreadWorker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AZUREMainThreadWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AZUREMainThreadWorker,
      qt_meta_data_AZUREMainThreadWorker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AZUREMainThreadWorker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AZUREMainThreadWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AZUREMainThreadWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AZUREMainThreadWorker))
        return static_cast<void*>(const_cast< AZUREMainThreadWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int AZUREMainThreadWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AZUREMainThreadWorker::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_AZUREMainThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AZUREMainThread[] = {
    "AZUREMainThread\0\0readyToRun()\0stopAZURE()\0"
};

void AZUREMainThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AZUREMainThread *_t = static_cast<AZUREMainThread *>(_o);
        switch (_id) {
        case 0: _t->readyToRun(); break;
        case 1: _t->stopAZURE(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AZUREMainThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AZUREMainThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_AZUREMainThread,
      qt_meta_data_AZUREMainThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AZUREMainThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AZUREMainThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AZUREMainThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AZUREMainThread))
        return static_cast<void*>(const_cast< AZUREMainThread*>(this));
    return QThread::qt_metacast(_clname);
}

int AZUREMainThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AZUREMainThread::readyToRun()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
