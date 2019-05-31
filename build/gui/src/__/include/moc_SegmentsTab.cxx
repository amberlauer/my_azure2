/****************************************************************************
** Meta object code from reading C++ file 'SegmentsTab.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../gui/include/SegmentsTab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SegmentsTab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SegmentsTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      35,   30,   12,   12, 0x0a,
      68,   12,   12,   12, 0x0a,
      85,   30,   12,   12, 0x0a,
     118,   12,   12,   12, 0x0a,
     136,   12,   12,   12, 0x0a,
     154,   12,   12,   12, 0x0a,
     174,   12,   12,   12, 0x0a,
     194,   12,   12,   12, 0x0a,
     214,   12,   12,   12, 0x0a,
     236,   12,   12,   12, 0x0a,
     256,   12,   12,   12, 0x0a,
     288,  278,   12,   12, 0x0a,
     325,  278,   12,   12, 0x0a,
     376,  367,  362,   12, 0x0a,
     416,  406,  362,   12, 0x0a,
     447,  367,  362,   12, 0x0a,
     477,  406,  362,   12, 0x0a,
     514,  508,   12,   12, 0x0a,
     553,  541,   12,   12, 0x0a,
     581,  575,   12,   12, 0x2a,
     595,   12,   12,   12, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_SegmentsTab[] = {
    "SegmentsTab\0\0addSegDataLine()\0line\0"
    "addSegDataLine(SegmentsDataData)\0"
    "addSegTestLine()\0addSegTestLine(SegmentsTestData)\0"
    "editSegDataLine()\0editSegTestLine()\0"
    "deleteSegDataLine()\0deleteSegTestLine()\0"
    "moveSegDataLineUp()\0moveSegDataLineDown()\0"
    "moveSegTestLineUp()\0moveSegTestLineDown()\0"
    "selection\0updateSegDataButtons(QItemSelection)\0"
    "updateSegTestButtons(QItemSelection)\0"
    "bool\0inStream\0readSegDataFile(QTextStream&)\0"
    "outStream\0writeSegDataFile(QTextStream&)\0"
    "readSegTestFile(QTextStream&)\0"
    "writeSegTestFile(QTextStream&)\0model\0"
    "setPairsModel(PairsModel*)\0which,title\0"
    "showInfo(int,QString)\0which\0showInfo(int)\0"
    "showInfo()\0"
};

void SegmentsTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SegmentsTab *_t = static_cast<SegmentsTab *>(_o);
        switch (_id) {
        case 0: _t->addSegDataLine(); break;
        case 1: _t->addSegDataLine((*reinterpret_cast< SegmentsDataData(*)>(_a[1]))); break;
        case 2: _t->addSegTestLine(); break;
        case 3: _t->addSegTestLine((*reinterpret_cast< SegmentsTestData(*)>(_a[1]))); break;
        case 4: _t->editSegDataLine(); break;
        case 5: _t->editSegTestLine(); break;
        case 6: _t->deleteSegDataLine(); break;
        case 7: _t->deleteSegTestLine(); break;
        case 8: _t->moveSegDataLineUp(); break;
        case 9: _t->moveSegDataLineDown(); break;
        case 10: _t->moveSegTestLineUp(); break;
        case 11: _t->moveSegTestLineDown(); break;
        case 12: _t->updateSegDataButtons((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 13: _t->updateSegTestButtons((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 14: { bool _r = _t->readSegDataFile((*reinterpret_cast< QTextStream(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->writeSegDataFile((*reinterpret_cast< QTextStream(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->readSegTestFile((*reinterpret_cast< QTextStream(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->writeSegTestFile((*reinterpret_cast< QTextStream(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: _t->setPairsModel((*reinterpret_cast< PairsModel*(*)>(_a[1]))); break;
        case 19: _t->showInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 20: _t->showInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->showInfo(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SegmentsTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SegmentsTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SegmentsTab,
      qt_meta_data_SegmentsTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SegmentsTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SegmentsTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SegmentsTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SegmentsTab))
        return static_cast<void*>(const_cast< SegmentsTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int SegmentsTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
