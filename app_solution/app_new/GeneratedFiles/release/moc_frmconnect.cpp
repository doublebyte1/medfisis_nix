/****************************************************************************
** Meta object code from reading C++ file 'frmconnect.h'
**
** Created: Fri Sep 2 11:02:54 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../frmconnect.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmconnect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FrmConnect[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      77,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     129,   11,   11,   11, 0x0a,
     138,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FrmConnect[] = {
    "FrmConnect\0\0"
    "strHost,strDataSource,strUsername,strPassword,strAlias,strDriver\0"
    "ok(QString,QString,QString,QString,QString,QString)\0"
    "accept()\0reject()\0"
};

const QMetaObject FrmConnect::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FrmConnect,
      qt_meta_data_FrmConnect, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FrmConnect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FrmConnect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FrmConnect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrmConnect))
        return static_cast<void*>(const_cast< FrmConnect*>(this));
    if (!strcmp(_clname, "Ui::frmconnect"))
        return static_cast< Ui::frmconnect*>(const_cast< FrmConnect*>(this));
    return QDialog::qt_metacast(_clname);
}

int FrmConnect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ok((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 1: accept(); break;
        case 2: reject(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void FrmConnect::ok(const QString & _t1, const QString & _t2, const QString & _t3, const QString & _t4, const QString & _t5, const QString & _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
