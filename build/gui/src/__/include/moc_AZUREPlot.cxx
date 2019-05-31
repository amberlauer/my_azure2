/****************************************************************************
** Meta object code from reading C++ file 'AZUREPlot.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../gui/include/AZUREPlot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AZUREPlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AZUREPlot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   11,   10,   10, 0x0a,
      46,   10,   10,   10, 0x0a,
      55,   10,   10,   10, 0x0a,
      68,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AZUREPlot[] = {
    "AZUREPlot\0\0newEntries\0draw(QList<PlotEntry*>)\0"
    "update()\0exportPlot()\0print()\0"
};

void AZUREPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AZUREPlot *_t = static_cast<AZUREPlot *>(_o);
        switch (_id) {
        case 0: _t->draw((*reinterpret_cast< QList<PlotEntry*>(*)>(_a[1]))); break;
        case 1: _t->update(); break;
        case 2: _t->exportPlot(); break;
        case 3: _t->print(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AZUREPlot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AZUREPlot::staticMetaObject = {
    { &QwtPlot::staticMetaObject, qt_meta_stringdata_AZUREPlot,
      qt_meta_data_AZUREPlot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AZUREPlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AZUREPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AZUREPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AZUREPlot))
        return static_cast<void*>(const_cast< AZUREPlot*>(this));
    return QwtPlot::qt_metacast(_clname);
}

int AZUREPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
