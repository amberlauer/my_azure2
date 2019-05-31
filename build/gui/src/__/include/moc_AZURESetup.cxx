/****************************************************************************
** Meta object code from reading C++ file 'AZURESetup.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../gui/include/AZURESetup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AZURESetup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AZURESetup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      25,   11,   11,   11, 0x0a,
      40,   11,   11,   11, 0x08,
      48,   11,   11,   11, 0x08,
      55,   11,   11,   11, 0x08,
      68,   11,   11,   11, 0x08,
      82,   11,   11,   11, 0x08,
      89,   11,   11,   11, 0x08,
     105,   98,   11,   11, 0x08,
     129,   11,   11,   11, 0x08,
     142,   11,   11,   11, 0x08,
     153,   11,   11,   11, 0x08,
     167,   11,   11,   11, 0x08,
     179,   11,   11,   11, 0x08,
     193,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AZURESetup[] = {
    "AZURESetup\0\0SaveAndRun()\0DeleteThread()\0"
    "reset()\0open()\0openRecent()\0clearRecent()\0"
    "save()\0saveAs()\0action\0matrixChanged(QAction*)\0"
    "editChecks()\0editDirs()\0editOptions()\0"
    "showAbout()\0showTabInfo()\0openWebsite()\0"
};

void AZURESetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AZURESetup *_t = static_cast<AZURESetup *>(_o);
        switch (_id) {
        case 0: _t->SaveAndRun(); break;
        case 1: _t->DeleteThread(); break;
        case 2: _t->reset(); break;
        case 3: _t->open(); break;
        case 4: _t->openRecent(); break;
        case 5: _t->clearRecent(); break;
        case 6: _t->save(); break;
        case 7: _t->saveAs(); break;
        case 8: _t->matrixChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 9: _t->editChecks(); break;
        case 10: _t->editDirs(); break;
        case 11: _t->editOptions(); break;
        case 12: _t->showAbout(); break;
        case 13: _t->showTabInfo(); break;
        case 14: _t->openWebsite(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AZURESetup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AZURESetup::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AZURESetup,
      qt_meta_data_AZURESetup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AZURESetup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AZURESetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AZURESetup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AZURESetup))
        return static_cast<void*>(const_cast< AZURESetup*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AZURESetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
