/****************************************************************************
** Meta object code from reading C++ file 'RunTab.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../gui/include/RunTab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RunTab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RunTab[] = {

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
      20,    8,    7,    7, 0x0a,
      48,   42,    7,    7, 0x2a,
      62,    7,    7,    7, 0x2a,
      79,   73,    7,    7, 0x08,
     115,  107,    7,    7, 0x08,
     144,  107,    7,    7, 0x08,
     177,  107,    7,    7, 0x08,
     214,  205,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RunTab[] = {
    "RunTab\0\0which,title\0showInfo(int,QString)\0"
    "which\0showInfo(int)\0showInfo()\0index\0"
    "calculationTypeChanged(int)\0checked\0"
    "paramFileButtonChanged(bool)\0"
    "integralsFileButtonChanged(bool)\0"
    "fileTempButtonChanged(bool)\0lineEdit\0"
    "setChooseFile(QLineEdit*)\0"
};

void RunTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RunTab *_t = static_cast<RunTab *>(_o);
        switch (_id) {
        case 0: _t->showInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->showInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->showInfo(); break;
        case 3: _t->calculationTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->paramFileButtonChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->integralsFileButtonChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->fileTempButtonChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setChooseFile((*reinterpret_cast< QLineEdit*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RunTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RunTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RunTab,
      qt_meta_data_RunTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RunTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RunTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RunTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RunTab))
        return static_cast<void*>(const_cast< RunTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int RunTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
