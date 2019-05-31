/****************************************************************************
** Meta object code from reading C++ file 'LevelsTab.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../gui/include/LevelsTab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LevelsTab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LevelsTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   11,   10,   10, 0x05,
      46,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      83,   10,   10,   10, 0x0a,
     109,   94,   10,   10, 0x0a,
     135,   10,   10,   10, 0x0a,
     149,   10,   10,   10, 0x0a,
     171,  161,   10,   10, 0x0a,
     201,  161,   10,   10, 0x0a,
     230,   10,   10,   10, 0x0a,
     272,  262,   10,   10, 0x0a,
     303,  161,   10,   10, 0x0a,
     340,  333,   10,   10, 0x0a,
     380,  368,   10,   10, 0x0a,
     408,  402,   10,   10, 0x2a,
     422,   10,   10,   10, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_LevelsTab[] = {
    "LevelsTab\0\0,,\0readNewPair(PairsData,int,bool)\0"
    "readExistingPair(PairsData,int,bool)\0"
    "addLevel()\0level,fromFile\0"
    "addLevel(LevelsData,bool)\0removeLevel()\0"
    "editLevel()\0selection\0"
    "updateButtons(QItemSelection)\0"
    "updateFilter(QItemSelection)\0"
    "updateChannelsPairAddedEdited()\0"
    "pairIndex\0updateChannelsPairRemoved(int)\0"
    "updateDetails(QItemSelection)\0string\0"
    "updateReducedWidth(QString)\0which,title\0"
    "showInfo(int,QString)\0which\0showInfo(int)\0"
    "showInfo()\0"
};

void LevelsTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LevelsTab *_t = static_cast<LevelsTab *>(_o);
        switch (_id) {
        case 0: _t->readNewPair((*reinterpret_cast< PairsData(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->readExistingPair((*reinterpret_cast< PairsData(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->addLevel(); break;
        case 3: _t->addLevel((*reinterpret_cast< LevelsData(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->removeLevel(); break;
        case 5: _t->editLevel(); break;
        case 6: _t->updateButtons((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 7: _t->updateFilter((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 8: _t->updateChannelsPairAddedEdited(); break;
        case 9: _t->updateChannelsPairRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->updateDetails((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 11: _t->updateReducedWidth((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->showInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 13: _t->showInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->showInfo(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LevelsTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LevelsTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LevelsTab,
      qt_meta_data_LevelsTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LevelsTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LevelsTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LevelsTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LevelsTab))
        return static_cast<void*>(const_cast< LevelsTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int LevelsTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void LevelsTab::readNewPair(PairsData _t1, int _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LevelsTab::readExistingPair(PairsData _t1, int _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
