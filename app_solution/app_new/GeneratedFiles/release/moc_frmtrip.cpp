/****************************************************************************
** Meta object code from reading C++ file 'frmtrip.h'
**
** Created: Fri Sep 2 11:03:07 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../frmtrip.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmtrip.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FrmTrip[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      30,   24,    8,    8, 0x08,
      66,   59,   54,    8, 0x08,
      98,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FrmTrip[] = {
    "FrmTrip\0\0createRecord()\0index\0"
    "previewRow(QModelIndex)\0bool\0button\0"
    "onButtonClick(QAbstractButton*)\0"
    "onItemSelection()\0"
};

const QMetaObject FrmTrip::staticMetaObject = {
    { &PreviewTab::staticMetaObject, qt_meta_stringdata_FrmTrip,
      qt_meta_data_FrmTrip, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FrmTrip::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FrmTrip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FrmTrip::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrmTrip))
        return static_cast<void*>(const_cast< FrmTrip*>(this));
    if (!strcmp(_clname, "Ui::FrmTrip"))
        return static_cast< Ui::FrmTrip*>(const_cast< FrmTrip*>(this));
    return PreviewTab::qt_metacast(_clname);
}

int FrmTrip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PreviewTab::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: createRecord(); break;
        case 1: previewRow((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: { bool _r = onButtonClick((*reinterpret_cast< QAbstractButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: onItemSelection(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
