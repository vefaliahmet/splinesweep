/****************************************************************************
** Meta object code from reading C++ file 'ImageLoader.h'
**
** Created: Sun Apr 18 15:41:09 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ImageLoader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageLoader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageLoader[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x05,
      36,   13,   12,   12, 0x05,
      59,   55,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      84,   77,   12,   12, 0x0a,
     100,   77,   12,   12, 0x0a,
     125,  116,   12,   12, 0x08,
     149,  116,   12,   12, 0x08,
     175,   77,   12,   12, 0x08,
     199,   77,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ImageLoader[] = {
    "ImageLoader\0\0image\0newImage(QImage)\0"
    "newTexture(QImage)\0num\0newNumImages(int)\0"
    "passed\0nextImage(bool)\0prevImage(bool)\0"
    "selected\0loadImages(QStringList)\0"
    "loadTextures(QStringList)\0"
    "displayLoadDialog(bool)\0displayTexDialog(bool)\0"
};

const QMetaObject ImageLoader::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ImageLoader,
      qt_meta_data_ImageLoader, 0 }
};

const QMetaObject *ImageLoader::metaObject() const
{
    return &staticMetaObject;
}

void *ImageLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageLoader))
        return static_cast<void*>(const_cast< ImageLoader*>(this));
    return QWidget::qt_metacast(_clname);
}

int ImageLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: newImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: newTexture((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 2: newNumImages((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: nextImage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: prevImage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: loadImages((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 6: loadTextures((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 7: displayLoadDialog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: displayTexDialog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ImageLoader::newImage(QImage _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ImageLoader::newTexture(QImage _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ImageLoader::newNumImages(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
