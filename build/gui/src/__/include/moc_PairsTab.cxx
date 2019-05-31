/****************************************************************************
** Meta object code from reading C++ file 'PairsTab.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../gui/include/PairsTab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PairsTab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PairsTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      25,    9,    9,    9, 0x05,
      42,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,    9,    9,    9, 0x0a,
      92,   68,    9,    9, 0x0a,
     120,    9,    9,    9, 0x0a,
     131,   68,    9,    9, 0x0a,
     160,    9,    9,    9, 0x0a,
     183,  173,    9,    9, 0x0a,
     225,  213,    9,    9, 0x0a,
     253,  247,    9,    9, 0x2a,
     267,    9,    9,    9, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_PairsTab[] = {
    "PairsTab\0\0pairAdded(int)\0pairRemoved(int)\0"
    "pairEdited(int)\0addPair()\0"
    "pair,pairIndex,fromFile\0"
    "addPair(PairsData,int,bool)\0editPair()\0"
    "editPair(PairsData,int,bool)\0removePair()\0"
    "selection\0updateButtons(QItemSelection)\0"
    "which,title\0showInfo(int,QString)\0"
    "which\0showInfo(int)\0showInfo()\0"
};

void PairsTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PairsTab *_t = static_cast<PairsTab *>(_o);
        switch (_id) {
        case 0: _t->pairAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->pairRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->pairEdited((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->addPair(); break;
        case 4: _t->addPair((*reinterpret_cast< PairsData(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->editPair(); break;
        case 6: _t->editPair((*reinterpret_cast< PairsData(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: _t->removePair(); break;
        case 8: _t->updateButtons((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 9: _t->showInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->showInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->showInfo(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PairsTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PairsTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PairsTab,
      qt_meta_data_PairsTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PairsTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PairsTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PairsTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PairsTab))
        return static_cast<void*>(const_cast< PairsTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int PairsTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PairsTab::pairAdded(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PairsTab::pairRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PairsTab::pairEdited(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
