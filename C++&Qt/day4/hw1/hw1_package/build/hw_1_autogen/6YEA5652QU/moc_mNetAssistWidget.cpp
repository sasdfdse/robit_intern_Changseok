/****************************************************************************
** Meta object code from reading C++ file 'mNetAssistWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../include/mNetAssistWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mNetAssistWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mNetAssistWidget_t {
    QByteArrayData data[43];
    char stringdata0[766];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mNetAssistWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mNetAssistWidget_t qt_meta_stringdata_mNetAssistWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "mNetAssistWidget"
QT_MOC_LITERAL(1, 17, 16), // "sendDataToClient"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "char*"
QT_MOC_LITERAL(4, 41, 3), // "msg"
QT_MOC_LITERAL(5, 45, 6), // "length"
QT_MOC_LITERAL(6, 52, 16), // "socketDescriptor"
QT_MOC_LITERAL(7, 69, 18), // "socketDescriptorEx"
QT_MOC_LITERAL(8, 88, 22), // "on_pBtnNetCnnt_clicked"
QT_MOC_LITERAL(9, 111, 7), // "checked"
QT_MOC_LITERAL(10, 119, 34), // "on_cBoxNetType_currentIndexCh..."
QT_MOC_LITERAL(11, 154, 5), // "index"
QT_MOC_LITERAL(12, 160, 23), // "on_pBtnSendData_clicked"
QT_MOC_LITERAL(13, 184, 27), // "on_pBtnClearRcvDisp_clicked"
QT_MOC_LITERAL(14, 212, 27), // "on_lEditUdpPort_textChanged"
QT_MOC_LITERAL(15, 240, 4), // "text"
QT_MOC_LITERAL(16, 245, 25), // "on_lEditUdpIP_textChanged"
QT_MOC_LITERAL(17, 271, 23), // "on_pBtnResetCnt_clicked"
QT_MOC_LITERAL(18, 295, 14), // "ConvertHexChar"
QT_MOC_LITERAL(19, 310, 2), // "ch"
QT_MOC_LITERAL(20, 313, 13), // "ConvertHexStr"
QT_MOC_LITERAL(21, 327, 9), // "hexSubStr"
QT_MOC_LITERAL(22, 337, 15), // "udpDataReceived"
QT_MOC_LITERAL(23, 353, 21), // "tcpClientDataReceived"
QT_MOC_LITERAL(24, 375, 22), // "slotTryCreateTcpServer"
QT_MOC_LITERAL(25, 398, 19), // "slotDeleteTcpServer"
QT_MOC_LITERAL(26, 418, 21), // "tcpServerDataReceived"
QT_MOC_LITERAL(27, 440, 13), // "addClientLink"
QT_MOC_LITERAL(28, 454, 14), // "clientAddrPort"
QT_MOC_LITERAL(29, 469, 16), // "removeClientLink"
QT_MOC_LITERAL(30, 486, 10), // "toSendData"
QT_MOC_LITERAL(31, 497, 10), // "toSendFile"
QT_MOC_LITERAL(32, 508, 23), // "insertDateTimeInRcvDisp"
QT_MOC_LITERAL(33, 532, 7), // "msDelay"
QT_MOC_LITERAL(34, 540, 4), // "msec"
QT_MOC_LITERAL(35, 545, 26), // "on_pBtnSaveRcvData_clicked"
QT_MOC_LITERAL(36, 572, 22), // "on_cBoxLoopSnd_toggled"
QT_MOC_LITERAL(37, 595, 36), // "on_lEdit_Interval_ms_editingF..."
QT_MOC_LITERAL(38, 632, 27), // "on_pBtnClearSndDisp_clicked"
QT_MOC_LITERAL(39, 660, 26), // "on_pBtnLoadSndData_clicked"
QT_MOC_LITERAL(40, 687, 23), // "on_StartRcvFile_clicked"
QT_MOC_LITERAL(41, 711, 27), // "on_cBoxStartSndFile_clicked"
QT_MOC_LITERAL(42, 739, 26) // "on_cBox_SndHexDisp_clicked"

    },
    "mNetAssistWidget\0sendDataToClient\0\0"
    "char*\0msg\0length\0socketDescriptor\0"
    "socketDescriptorEx\0on_pBtnNetCnnt_clicked\0"
    "checked\0on_cBoxNetType_currentIndexChanged\0"
    "index\0on_pBtnSendData_clicked\0"
    "on_pBtnClearRcvDisp_clicked\0"
    "on_lEditUdpPort_textChanged\0text\0"
    "on_lEditUdpIP_textChanged\0"
    "on_pBtnResetCnt_clicked\0ConvertHexChar\0"
    "ch\0ConvertHexStr\0hexSubStr\0udpDataReceived\0"
    "tcpClientDataReceived\0slotTryCreateTcpServer\0"
    "slotDeleteTcpServer\0tcpServerDataReceived\0"
    "addClientLink\0clientAddrPort\0"
    "removeClientLink\0toSendData\0toSendFile\0"
    "insertDateTimeInRcvDisp\0msDelay\0msec\0"
    "on_pBtnSaveRcvData_clicked\0"
    "on_cBoxLoopSnd_toggled\0"
    "on_lEdit_Interval_ms_editingFinished\0"
    "on_pBtnClearSndDisp_clicked\0"
    "on_pBtnLoadSndData_clicked\0"
    "on_StartRcvFile_clicked\0"
    "on_cBoxStartSndFile_clicked\0"
    "on_cBox_SndHexDisp_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mNetAssistWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,  159,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  168,    2, 0x08 /* Private */,
      10,    1,  171,    2, 0x08 /* Private */,
      12,    0,  174,    2, 0x08 /* Private */,
      13,    0,  175,    2, 0x08 /* Private */,
      14,    1,  176,    2, 0x08 /* Private */,
      16,    1,  179,    2, 0x08 /* Private */,
      17,    0,  182,    2, 0x08 /* Private */,
      18,    1,  183,    2, 0x08 /* Private */,
      20,    1,  186,    2, 0x08 /* Private */,
      22,    0,  189,    2, 0x08 /* Private */,
      23,    0,  190,    2, 0x08 /* Private */,
      24,    0,  191,    2, 0x08 /* Private */,
      25,    0,  192,    2, 0x08 /* Private */,
      26,    3,  193,    2, 0x08 /* Private */,
      27,    2,  200,    2, 0x08 /* Private */,
      29,    2,  205,    2, 0x08 /* Private */,
      30,    0,  210,    2, 0x08 /* Private */,
      31,    0,  211,    2, 0x08 /* Private */,
      32,    0,  212,    2, 0x08 /* Private */,
      33,    1,  213,    2, 0x08 /* Private */,
      35,    0,  216,    2, 0x08 /* Private */,
      36,    1,  217,    2, 0x08 /* Private */,
      37,    0,  220,    2, 0x08 /* Private */,
      38,    0,  221,    2, 0x08 /* Private */,
      39,    0,  222,    2, 0x08 /* Private */,
      40,    1,  223,    2, 0x08 /* Private */,
      41,    1,  226,    2, 0x08 /* Private */,
      42,    1,  229,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Char, QMetaType::Char,   19,
    QMetaType::Char, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   28,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   28,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   34,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void mNetAssistWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mNetAssistWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendDataToClient((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->on_pBtnNetCnnt_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_cBoxNetType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_pBtnSendData_clicked(); break;
        case 4: _t->on_pBtnClearRcvDisp_clicked(); break;
        case 5: _t->on_lEditUdpPort_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_lEditUdpIP_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->on_pBtnResetCnt_clicked(); break;
        case 8: { char _r = _t->ConvertHexChar((*reinterpret_cast< char(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< char*>(_a[0]) = std::move(_r); }  break;
        case 9: { char _r = _t->ConvertHexStr((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< char*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->udpDataReceived(); break;
        case 11: _t->tcpClientDataReceived(); break;
        case 12: { bool _r = _t->slotTryCreateTcpServer();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->slotDeleteTcpServer(); break;
        case 14: _t->tcpServerDataReceived((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->addClientLink((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->removeClientLink((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->toSendData(); break;
        case 18: _t->toSendFile(); break;
        case 19: _t->insertDateTimeInRcvDisp(); break;
        case 20: _t->msDelay((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 21: _t->on_pBtnSaveRcvData_clicked(); break;
        case 22: _t->on_cBoxLoopSnd_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->on_lEdit_Interval_ms_editingFinished(); break;
        case 24: _t->on_pBtnClearSndDisp_clicked(); break;
        case 25: _t->on_pBtnLoadSndData_clicked(); break;
        case 26: _t->on_StartRcvFile_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->on_cBoxStartSndFile_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->on_cBox_SndHexDisp_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mNetAssistWidget::*)(char * , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mNetAssistWidget::sendDataToClient)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mNetAssistWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_mNetAssistWidget.data,
    qt_meta_data_mNetAssistWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mNetAssistWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mNetAssistWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mNetAssistWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int mNetAssistWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void mNetAssistWidget::sendDataToClient(char * _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
