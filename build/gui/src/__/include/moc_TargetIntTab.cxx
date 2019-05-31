/****************************************************************************
** Meta object code from reading C++ file 'TargetIntTab.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../gui/include/TargetIntTab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TargetIntTab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TargetIntTab[] = {

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
      14,   13,   13,   13, 0x0a,
      29,   24,   13,   13, 0x0a,
      52,   13,   13,   13, 0x0a,
      63,   13,   13,   13, 0x0a,
      86,   76,   13,   13, 0x0a,
     128,  116,   13,   13, 0x0a,
     156,  150,   13,   13, 0x2a,
     170,   13,   13,   13, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_TargetIntTab[] = {
    "TargetIntTab\0\0addLine()\0line\0"
    "addLine(TargetIntData)\0editLine()\0"
    "deleteLine()\0selection\0"
    "updateButtons(QItemSelection)\0which,title\0"
    "showInfo(int,QString)\0which\0showInfo(int)\0"
    "showInfo()\0"
};

void TargetIntTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TargetIntTab *_t = static_cast<TargetIntTab *>(_o);
        switch (_id) {
        case 0: _t->addLine(); break;
        case 1: _t->addLine((*reinterpret_cast< TargetIntData(*)>(_a[1]))); break;
        case 2: _t->editLine(); break;
        case 3: _t->deleteLine(); break;
        case 4: _t->updateButtons((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 5: _t->showInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->showInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->showInfo(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TargetIntTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TargetIntTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TargetIntTab,
      qt_meta_data_TargetIntTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TargetIntTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TargetIntTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TargetIntTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TargetIntTab))
        return static_cast<void*>(const_cast< TargetIntTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int TargetIntTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
