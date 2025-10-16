/****************************************************************************
** Meta object code from reading C++ file 'graph_creator_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/graph_creator_rviz_plugin/src/graph_creator_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graph_creator_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_graph_creator_rviz_plugin__GraphCreatorPanel_t {
    QByteArrayData data[16];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_graph_creator_rviz_plugin__GraphCreatorPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_graph_creator_rviz_plugin__GraphCreatorPanel_t qt_meta_stringdata_graph_creator_rviz_plugin__GraphCreatorPanel = {
    {
QT_MOC_LITERAL(0, 0, 44), // "graph_creator_rviz_plugin::Gr..."
QT_MOC_LITERAL(1, 45, 23), // "onCreateVerticesClicked"
QT_MOC_LITERAL(2, 69, 0), // ""
QT_MOC_LITERAL(3, 70, 20), // "onCreateEdgesClicked"
QT_MOC_LITERAL(4, 91, 30), // "onEdgeCreationTypeIndexChanged"
QT_MOC_LITERAL(5, 122, 5), // "index"
QT_MOC_LITERAL(6, 128, 31), // "onEdgeDirectionTypeIndexChanged"
QT_MOC_LITERAL(7, 160, 24), // "onLockAllVerticesClicked"
QT_MOC_LITERAL(8, 185, 21), // "onLockAllEdgesClicked"
QT_MOC_LITERAL(9, 207, 31), // "ongraphElementTableValueChanged"
QT_MOC_LITERAL(10, 239, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(11, 257, 4), // "item"
QT_MOC_LITERAL(12, 262, 30), // "onOperateOnAppTypeIndexChanged"
QT_MOC_LITERAL(13, 293, 18), // "onLoadGraphClicked"
QT_MOC_LITERAL(14, 312, 18), // "onSaveGraphClicked"
QT_MOC_LITERAL(15, 331, 16) // "onRefreshClicked"

    },
    "graph_creator_rviz_plugin::GraphCreatorPanel\0"
    "onCreateVerticesClicked\0\0onCreateEdgesClicked\0"
    "onEdgeCreationTypeIndexChanged\0index\0"
    "onEdgeDirectionTypeIndexChanged\0"
    "onLockAllVerticesClicked\0onLockAllEdgesClicked\0"
    "ongraphElementTableValueChanged\0"
    "QTableWidgetItem*\0item\0"
    "onOperateOnAppTypeIndexChanged\0"
    "onLoadGraphClicked\0onSaveGraphClicked\0"
    "onRefreshClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_graph_creator_rviz_plugin__GraphCreatorPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    1,   71,    2, 0x0a /* Public */,
       6,    1,   74,    2, 0x0a /* Public */,
       7,    0,   77,    2, 0x0a /* Public */,
       8,    0,   78,    2, 0x0a /* Public */,
       9,    1,   79,    2, 0x0a /* Public */,
      12,    1,   82,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x0a /* Public */,
      14,    0,   86,    2, 0x0a /* Public */,
      15,    0,   87,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void graph_creator_rviz_plugin::GraphCreatorPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphCreatorPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onCreateVerticesClicked(); break;
        case 1: _t->onCreateEdgesClicked(); break;
        case 2: _t->onEdgeCreationTypeIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onEdgeDirectionTypeIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onLockAllVerticesClicked(); break;
        case 5: _t->onLockAllEdgesClicked(); break;
        case 6: _t->ongraphElementTableValueChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->onOperateOnAppTypeIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onLoadGraphClicked(); break;
        case 9: _t->onSaveGraphClicked(); break;
        case 10: _t->onRefreshClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject graph_creator_rviz_plugin::GraphCreatorPanel::staticMetaObject = { {
    &rviz::Panel::staticMetaObject,
    qt_meta_stringdata_graph_creator_rviz_plugin__GraphCreatorPanel.data,
    qt_meta_data_graph_creator_rviz_plugin__GraphCreatorPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *graph_creator_rviz_plugin::GraphCreatorPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *graph_creator_rviz_plugin::GraphCreatorPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_graph_creator_rviz_plugin__GraphCreatorPanel.stringdata0))
        return static_cast<void*>(this);
    return rviz::Panel::qt_metacast(_clname);
}

int graph_creator_rviz_plugin::GraphCreatorPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz::Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
