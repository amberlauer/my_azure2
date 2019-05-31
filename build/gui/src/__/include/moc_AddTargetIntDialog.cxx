/****************************************************************************
** Meta object code from reading C++ file 'AddTargetIntDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../gui/include/AddTargetIntDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddTargetIntDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddTargetIntDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   20,   19,   19, 0x0a,
      58,   20,   19,   19, 0x0a,
      96,   86,   19,   19, 0x0a,
     133,  122,   19,   19, 0x0a,
     159,   20,   19,   19, 0x0a,
     190,   86,   19,   19, 0x0a,
     219,  122,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AddTargetIntDialog[] = {
    "AddTargetIntDialog\0\0checked\0"
    "convolutionCheckChanged(bool)\0"
    "targetIntCheckChanged(bool)\0newNumber\0"
    "parameterSpinChanged(int)\0row,column\0"
    "parameterChanged(int,int)\0"
    "qCoefficientCheckChanged(bool)\0"
    "qCoefficientSpinChanged(int)\0"
    "qCoefficientChanged(int,int)\0"
};

void AddTargetIntDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddTargetIntDialog *_t = static_cast<AddTargetIntDialog *>(_o);
        switch (_id) {
        case 0: _t->convolutionCheckChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->targetIntCheckChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->parameterSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->qCoefficientCheckChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->qCoefficientSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->qCoefficientChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AddTargetIntDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddTargetIntDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddTargetIntDialog,
      qt_meta_data_AddTargetIntDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddTargetIntDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddTargetIntDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddTargetIntDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddTargetIntDialog))
        return static_cast<void*>(const_cast< AddTargetIntDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddTargetIntDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
