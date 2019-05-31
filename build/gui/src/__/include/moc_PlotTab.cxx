/****************************************************************************
** Meta object code from reading C++ file 'PlotTab.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../gui/include/PlotTab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlotTab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlotTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      16,    8,    8,    8, 0x0a,
      35,    8,    8,    8, 0x0a,
      54,    8,    8,    8, 0x0a,
      81,    8,    8,    8, 0x0a,
     120,  108,    8,    8, 0x0a,
     148,  142,    8,    8, 0x2a,
     162,    8,    8,    8, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_PlotTab[] = {
    "PlotTab\0\0draw()\0xAxisTypeChanged()\0"
    "yAxisTypeChanged()\0xAxisLogScaleChanged(bool)\0"
    "yAxisLogScaleChanged(bool)\0which,title\0"
    "showInfo(int,QString)\0which\0showInfo(int)\0"
    "showInfo()\0"
};

void PlotTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlotTab *_t = static_cast<PlotTab *>(_o);
        switch (_id) {
        case 0: _t->draw(); break;
        case 1: _t->xAxisTypeChanged(); break;
        case 2: _t->yAxisTypeChanged(); break;
        case 3: _t->xAxisLogScaleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->yAxisLogScaleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->showInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->showInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->showInfo(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlotTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlotTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlotTab,
      qt_meta_data_PlotTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlotTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlotTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlotTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlotTab))
        return static_cast<void*>(const_cast< PlotTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int PlotTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
