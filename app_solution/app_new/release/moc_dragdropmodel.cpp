/****************************************************************************
** Meta object code from reading C++ file 'dragdropmodel.h'
**
** Created: Fri Sep 2 11:16:35 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dragdropmodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dragdropmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TreeMimeData[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_TreeMimeData[] = {
    "TreeMimeData\0"
};

const QMetaObject TreeMimeData::staticMetaObject = {
    { &QMimeData::staticMetaObject, qt_meta_stringdata_TreeMimeData,
      qt_meta_data_TreeMimeData, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TreeMimeData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TreeMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TreeMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TreeMimeData))
        return static_cast<void*>(const_cast< TreeMimeData*>(this));
    return QMimeData::qt_metacast(_clname);
}

int TreeMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMimeData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_DragDropModel[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   15,   14,   14, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_DragDropModel[] = {
    "DragDropModel\0\0idx\0ExpandThis(QModelIndex)\0"
};

const QMetaObject DragDropModel::staticMetaObject = {
    { &TreeModel::staticMetaObject, qt_meta_stringdata_DragDropModel,
      qt_meta_data_DragDropModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DragDropModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DragDropModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DragDropModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DragDropModel))
        return static_cast<void*>(const_cast< DragDropModel*>(this));
    return TreeModel::qt_metacast(_clname);
}

int DragDropModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TreeModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ExpandThis((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void DragDropModel::ExpandThis(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
