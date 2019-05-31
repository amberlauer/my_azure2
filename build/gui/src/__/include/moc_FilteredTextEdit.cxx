/****************************************************************************
** Meta object code from reading C++ file 'FilteredTextEdit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../gui/include/FilteredTextEdit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FilteredTextEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FilteredTextEdit[] = {

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
      25,   18,   17,   17, 0x0a,
      46,   40,   17,   17, 0x0a,
      76,   40,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FilteredTextEdit[] = {
    "FilteredTextEdit\0\0string\0write(QString)\0"
    "event\0mousePressEvent(QMouseEvent*)\0"
    "mouseDoubleClickEvent(QMouseEvent*)\0"
};

void FilteredTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FilteredTextEdit *_t = static_cast<FilteredTextEdit *>(_o);
        switch (_id) {
        case 0: _t->write((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->mouseDoubleClickEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FilteredTextEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FilteredTextEdit::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_FilteredTextEdit,
      qt_meta_data_FilteredTextEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FilteredTextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FilteredTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FilteredTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FilteredTextEdit))
        return static_cast<void*>(const_cast< FilteredTextEdit*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int FilteredTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
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
