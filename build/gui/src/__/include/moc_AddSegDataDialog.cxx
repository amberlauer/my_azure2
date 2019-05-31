/****************************************************************************
** Meta object code from reading C++ file 'AddSegDataDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../gui/include/AddSegDataDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddSegDataDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddSegDataDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      34,   17,   17,   17, 0x0a,
      55,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AddSegDataDialog[] = {
    "AddSegDataDialog\0\0setChooseFile()\0"
    "dataTypeChanged(int)\0varyNormChanged(int)\0"
};

void AddSegDataDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddSegDataDialog *_t = static_cast<AddSegDataDialog *>(_o);
        switch (_id) {
        case 0: _t->setChooseFile(); break;
        case 1: _t->dataTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->varyNormChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AddSegDataDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddSegDataDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddSegDataDialog,
      qt_meta_data_AddSegDataDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddSegDataDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddSegDataDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddSegDataDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddSegDataDialog))
        return static_cast<void*>(const_cast< AddSegDataDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddSegDataDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
