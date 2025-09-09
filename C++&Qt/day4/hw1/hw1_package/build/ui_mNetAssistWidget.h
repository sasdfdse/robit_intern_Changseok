/********************************************************************************
** Form generated from reading UI file 'mNetAssistWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNETASSISTWIDGET_H
#define UI_MNETASSISTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mNetAssistWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label;
    QComboBox *cBoxNetType;
    QLabel *label_IP;
    QLineEdit *lEditIpAddr;
    QLabel *label_Port;
    QLineEdit *lEditIpPort;
    QPushButton *pBtnNetCnnt;
    QSpacerItem *verticalSpacer_2;
    QTabWidget *Tabs_SndRcv;
    QWidget *tab;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *StartRcvFile;
    QCheckBox *cBox_ShowRcvTime;
    QCheckBox *cBox_RcvHexDisp;
    QCheckBox *cBox_PauseShowRcv;
    QCheckBox *cBox_chatMode;
    QCheckBox *cBox_echoMode;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pBtnSaveRcvData;
    QPushButton *pBtnClearRcvDisp;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *cBoxStartSndFile;
    QCheckBox *cBox_AntoClearSnd;
    QCheckBox *cBox_SndHexDisp;
    QCheckBox *cBoxLoopSnd;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QLineEdit *lEdit_Interval_ms;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pBtnLoadSndData;
    QPushButton *pBtnClearSndDisp;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QPlainTextEdit *ReceiveTextEdit;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelClients;
    QComboBox *cBoxClients;
    QLabel *labelSpaceClients;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelUdp;
    QLineEdit *lEditUdpIP;
    QLabel *labelUdp1;
    QLineEdit *lEditUdpPort;
    QLabel *labelSpaceUdp;
    QHBoxLayout *horizontalLayout_4;
    QPlainTextEdit *tEditSendText;
    QPushButton *pBtnSendData;
    QProgressBar *SndProgressBar;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *CurState;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QLineEdit *lEdit_SndCnt;
    QLabel *label_7;
    QLineEdit *lEdit_RcvCnt;
    QPushButton *pBtnResetCnt;

    void setupUi(QWidget *mNetAssistWidget)
    {
        if (mNetAssistWidget->objectName().isEmpty())
            mNetAssistWidget->setObjectName(QString::fromUtf8("mNetAssistWidget"));
        mNetAssistWidget->resize(480, 397);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mNetAssistWidget->sizePolicy().hasHeightForWidth());
        mNetAssistWidget->setSizePolicy(sizePolicy);
        mNetAssistWidget->setMinimumSize(QSize(480, 370));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        mNetAssistWidget->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(mNetAssistWidget);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 2, 5, 2);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(mNetAssistWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMinimumSize(QSize(160, 180));
        groupBox_2->setMaximumSize(QSize(350, 500));
        groupBox_2->setAutoFillBackground(true);
        groupBox_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        verticalLayout_7 = new QVBoxLayout(groupBox_2);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(4, 2, 4, 3);
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLineWidth(0);
        label->setMargin(0);

        verticalLayout_7->addWidget(label);

        cBoxNetType = new QComboBox(groupBox_2);
        cBoxNetType->addItem(QString());
        cBoxNetType->addItem(QString());
        cBoxNetType->addItem(QString());
        cBoxNetType->setObjectName(QString::fromUtf8("cBoxNetType"));
        sizePolicy.setHeightForWidth(cBoxNetType->sizePolicy().hasHeightForWidth());
        cBoxNetType->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(cBoxNetType);

        label_IP = new QLabel(groupBox_2);
        label_IP->setObjectName(QString::fromUtf8("label_IP"));

        verticalLayout_7->addWidget(label_IP);

        lEditIpAddr = new QLineEdit(groupBox_2);
        lEditIpAddr->setObjectName(QString::fromUtf8("lEditIpAddr"));
        sizePolicy.setHeightForWidth(lEditIpAddr->sizePolicy().hasHeightForWidth());
        lEditIpAddr->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(lEditIpAddr);

        label_Port = new QLabel(groupBox_2);
        label_Port->setObjectName(QString::fromUtf8("label_Port"));

        verticalLayout_7->addWidget(label_Port);

        lEditIpPort = new QLineEdit(groupBox_2);
        lEditIpPort->setObjectName(QString::fromUtf8("lEditIpPort"));
        sizePolicy.setHeightForWidth(lEditIpPort->sizePolicy().hasHeightForWidth());
        lEditIpPort->setSizePolicy(sizePolicy);
        lEditIpPort->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        verticalLayout_7->addWidget(lEditIpPort);

        pBtnNetCnnt = new QPushButton(groupBox_2);
        pBtnNetCnnt->setObjectName(QString::fromUtf8("pBtnNetCnnt"));
        sizePolicy.setHeightForWidth(pBtnNetCnnt->sizePolicy().hasHeightForWidth());
        pBtnNetCnnt->setSizePolicy(sizePolicy);
        pBtnNetCnnt->setMinimumSize(QSize(0, 30));
        pBtnNetCnnt->setMaximumSize(QSize(350, 60));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        pBtnNetCnnt->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("NetOff.png"), QSize(), QIcon::Active, QIcon::Off);
        icon1.addFile(QString::fromUtf8("NetOn.png"), QSize(), QIcon::Active, QIcon::On);
        icon1.addFile(QString::fromUtf8(":/mqrc/mqrc/NetOff.png"), QSize(), QIcon::Selected, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/mqrc/mqrc/NetOn.png"), QSize(), QIcon::Selected, QIcon::On);
        pBtnNetCnnt->setIcon(icon1);
        pBtnNetCnnt->setIconSize(QSize(20, 20));
        pBtnNetCnnt->setCheckable(true);

        verticalLayout_7->addWidget(pBtnNetCnnt);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer_2 = new QSpacerItem(152, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        Tabs_SndRcv = new QTabWidget(mNetAssistWidget);
        Tabs_SndRcv->setObjectName(QString::fromUtf8("Tabs_SndRcv"));
        sizePolicy1.setHeightForWidth(Tabs_SndRcv->sizePolicy().hasHeightForWidth());
        Tabs_SndRcv->setSizePolicy(sizePolicy1);
        Tabs_SndRcv->setMinimumSize(QSize(165, 150));
        Tabs_SndRcv->setMaximumSize(QSize(350, 500));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_8 = new QVBoxLayout(tab);
        verticalLayout_8->setSpacing(2);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, 3, -1, 3);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, -1, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        StartRcvFile = new QCheckBox(tab);
        StartRcvFile->setObjectName(QString::fromUtf8("StartRcvFile"));

        verticalLayout_4->addWidget(StartRcvFile);

        cBox_ShowRcvTime = new QCheckBox(tab);
        cBox_ShowRcvTime->setObjectName(QString::fromUtf8("cBox_ShowRcvTime"));

        verticalLayout_4->addWidget(cBox_ShowRcvTime);

        cBox_RcvHexDisp = new QCheckBox(tab);
        cBox_RcvHexDisp->setObjectName(QString::fromUtf8("cBox_RcvHexDisp"));

        verticalLayout_4->addWidget(cBox_RcvHexDisp);

        cBox_PauseShowRcv = new QCheckBox(tab);
        cBox_PauseShowRcv->setObjectName(QString::fromUtf8("cBox_PauseShowRcv"));

        verticalLayout_4->addWidget(cBox_PauseShowRcv);

        cBox_chatMode = new QCheckBox(tab);
        cBox_chatMode->setObjectName(QString::fromUtf8("cBox_chatMode"));

        verticalLayout_4->addWidget(cBox_chatMode);

        cBox_echoMode = new QCheckBox(tab);
        cBox_echoMode->setObjectName(QString::fromUtf8("cBox_echoMode"));

        verticalLayout_4->addWidget(cBox_echoMode);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_5->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pBtnSaveRcvData = new QPushButton(tab);
        pBtnSaveRcvData->setObjectName(QString::fromUtf8("pBtnSaveRcvData"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pBtnSaveRcvData->sizePolicy().hasHeightForWidth());
        pBtnSaveRcvData->setSizePolicy(sizePolicy2);
        pBtnSaveRcvData->setMinimumSize(QSize(0, 24));

        horizontalLayout_6->addWidget(pBtnSaveRcvData);

        pBtnClearRcvDisp = new QPushButton(tab);
        pBtnClearRcvDisp->setObjectName(QString::fromUtf8("pBtnClearRcvDisp"));
        sizePolicy2.setHeightForWidth(pBtnClearRcvDisp->sizePolicy().hasHeightForWidth());
        pBtnClearRcvDisp->setSizePolicy(sizePolicy2);
        pBtnClearRcvDisp->setMinimumSize(QSize(0, 24));

        horizontalLayout_6->addWidget(pBtnClearRcvDisp);


        verticalLayout_5->addLayout(horizontalLayout_6);


        verticalLayout_8->addLayout(verticalLayout_5);

        Tabs_SndRcv->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_9 = new QVBoxLayout(tab_2);
        verticalLayout_9->setSpacing(2);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(-1, 3, -1, 3);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        cBoxStartSndFile = new QCheckBox(tab_2);
        cBoxStartSndFile->setObjectName(QString::fromUtf8("cBoxStartSndFile"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cBoxStartSndFile->sizePolicy().hasHeightForWidth());
        cBoxStartSndFile->setSizePolicy(sizePolicy3);

        verticalLayout_6->addWidget(cBoxStartSndFile);

        cBox_AntoClearSnd = new QCheckBox(tab_2);
        cBox_AntoClearSnd->setObjectName(QString::fromUtf8("cBox_AntoClearSnd"));
        sizePolicy3.setHeightForWidth(cBox_AntoClearSnd->sizePolicy().hasHeightForWidth());
        cBox_AntoClearSnd->setSizePolicy(sizePolicy3);

        verticalLayout_6->addWidget(cBox_AntoClearSnd);

        cBox_SndHexDisp = new QCheckBox(tab_2);
        cBox_SndHexDisp->setObjectName(QString::fromUtf8("cBox_SndHexDisp"));
        sizePolicy3.setHeightForWidth(cBox_SndHexDisp->sizePolicy().hasHeightForWidth());
        cBox_SndHexDisp->setSizePolicy(sizePolicy3);

        verticalLayout_6->addWidget(cBox_SndHexDisp);

        cBoxLoopSnd = new QCheckBox(tab_2);
        cBoxLoopSnd->setObjectName(QString::fromUtf8("cBoxLoopSnd"));
        sizePolicy3.setHeightForWidth(cBoxLoopSnd->sizePolicy().hasHeightForWidth());
        cBoxLoopSnd->setSizePolicy(sizePolicy3);

        verticalLayout_6->addWidget(cBoxLoopSnd);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(1);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(true);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setBaseSize(QSize(0, 0));
        label_4->setTextFormat(Qt::TextFormat::PlainText);
        label_4->setScaledContents(false);
        label_4->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_7->addWidget(label_4);

        lEdit_Interval_ms = new QLineEdit(tab_2);
        lEdit_Interval_ms->setObjectName(QString::fromUtf8("lEdit_Interval_ms"));
        lEdit_Interval_ms->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_7->addWidget(lEdit_Interval_ms);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_7->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_7);

        verticalSpacer_4 = new QSpacerItem(135, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_6->addItem(verticalSpacer_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(1);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pBtnLoadSndData = new QPushButton(tab_2);
        pBtnLoadSndData->setObjectName(QString::fromUtf8("pBtnLoadSndData"));
        sizePolicy2.setHeightForWidth(pBtnLoadSndData->sizePolicy().hasHeightForWidth());
        pBtnLoadSndData->setSizePolicy(sizePolicy2);
        pBtnLoadSndData->setMinimumSize(QSize(0, 24));

        horizontalLayout_8->addWidget(pBtnLoadSndData);

        pBtnClearSndDisp = new QPushButton(tab_2);
        pBtnClearSndDisp->setObjectName(QString::fromUtf8("pBtnClearSndDisp"));
        sizePolicy2.setHeightForWidth(pBtnClearSndDisp->sizePolicy().hasHeightForWidth());
        pBtnClearSndDisp->setSizePolicy(sizePolicy2);
        pBtnClearSndDisp->setMinimumSize(QSize(0, 24));

        horizontalLayout_8->addWidget(pBtnClearSndDisp);


        verticalLayout_6->addLayout(horizontalLayout_8);


        verticalLayout_9->addLayout(verticalLayout_6);

        Tabs_SndRcv->addTab(tab_2, QString());

        verticalLayout->addWidget(Tabs_SndRcv);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ReceiveTextEdit = new QPlainTextEdit(mNetAssistWidget);
        ReceiveTextEdit->setObjectName(QString::fromUtf8("ReceiveTextEdit"));
        ReceiveTextEdit->setReadOnly(true);

        gridLayout->addWidget(ReceiveTextEdit, 1, 0, 1, 1);

        label_9 = new QLabel(mNetAssistWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelClients = new QLabel(mNetAssistWidget);
        labelClients->setObjectName(QString::fromUtf8("labelClients"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelClients->sizePolicy().hasHeightForWidth());
        labelClients->setSizePolicy(sizePolicy4);

        horizontalLayout_3->addWidget(labelClients);

        cBoxClients = new QComboBox(mNetAssistWidget);
        cBoxClients->setObjectName(QString::fromUtf8("cBoxClients"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(cBoxClients->sizePolicy().hasHeightForWidth());
        cBoxClients->setSizePolicy(sizePolicy5);
        cBoxClients->setMinimumSize(QSize(220, 0));
        cBoxClients->setMaximumSize(QSize(400, 60));

        horizontalLayout_3->addWidget(cBoxClients);

        labelSpaceClients = new QLabel(mNetAssistWidget);
        labelSpaceClients->setObjectName(QString::fromUtf8("labelSpaceClients"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(labelSpaceClients->sizePolicy().hasHeightForWidth());
        labelSpaceClients->setSizePolicy(sizePolicy6);
        labelSpaceClients->setMinimumSize(QSize(0, 0));

        horizontalLayout_3->addWidget(labelSpaceClients);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelUdp = new QLabel(mNetAssistWidget);
        labelUdp->setObjectName(QString::fromUtf8("labelUdp"));
        sizePolicy4.setHeightForWidth(labelUdp->sizePolicy().hasHeightForWidth());
        labelUdp->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(labelUdp);

        lEditUdpIP = new QLineEdit(mNetAssistWidget);
        lEditUdpIP->setObjectName(QString::fromUtf8("lEditUdpIP"));
        sizePolicy.setHeightForWidth(lEditUdpIP->sizePolicy().hasHeightForWidth());
        lEditUdpIP->setSizePolicy(sizePolicy);
        lEditUdpIP->setMinimumSize(QSize(80, 0));
        lEditUdpIP->setMaximumSize(QSize(160, 16777215));

        horizontalLayout_2->addWidget(lEditUdpIP);

        labelUdp1 = new QLabel(mNetAssistWidget);
        labelUdp1->setObjectName(QString::fromUtf8("labelUdp1"));
        sizePolicy.setHeightForWidth(labelUdp1->sizePolicy().hasHeightForWidth());
        labelUdp1->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(labelUdp1);

        lEditUdpPort = new QLineEdit(mNetAssistWidget);
        lEditUdpPort->setObjectName(QString::fromUtf8("lEditUdpPort"));
        sizePolicy.setHeightForWidth(lEditUdpPort->sizePolicy().hasHeightForWidth());
        lEditUdpPort->setSizePolicy(sizePolicy);
        lEditUdpPort->setMinimumSize(QSize(40, 0));
        lEditUdpPort->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_2->addWidget(lEditUdpPort);

        labelSpaceUdp = new QLabel(mNetAssistWidget);
        labelSpaceUdp->setObjectName(QString::fromUtf8("labelSpaceUdp"));
        sizePolicy6.setHeightForWidth(labelSpaceUdp->sizePolicy().hasHeightForWidth());
        labelSpaceUdp->setSizePolicy(sizePolicy6);
        labelSpaceUdp->setMinimumSize(QSize(0, 0));
        labelSpaceUdp->setLineWidth(0);

        horizontalLayout_2->addWidget(labelSpaceUdp);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        tEditSendText = new QPlainTextEdit(mNetAssistWidget);
        tEditSendText->setObjectName(QString::fromUtf8("tEditSendText"));
        sizePolicy6.setHeightForWidth(tEditSendText->sizePolicy().hasHeightForWidth());
        tEditSendText->setSizePolicy(sizePolicy6);
        tEditSendText->setMaximumSize(QSize(16777215, 120));

        horizontalLayout_4->addWidget(tEditSendText);

        pBtnSendData = new QPushButton(mNetAssistWidget);
        pBtnSendData->setObjectName(QString::fromUtf8("pBtnSendData"));
        pBtnSendData->setEnabled(false);
        sizePolicy2.setHeightForWidth(pBtnSendData->sizePolicy().hasHeightForWidth());
        pBtnSendData->setSizePolicy(sizePolicy2);
        pBtnSendData->setMinimumSize(QSize(75, 61));
        pBtnSendData->setMaximumSize(QSize(75, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("SimSun-ExtB"));
        font1.setPointSize(11);
        font1.setBold(true);
        pBtnSendData->setFont(font1);

        horizontalLayout_4->addWidget(pBtnSendData);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        SndProgressBar = new QProgressBar(mNetAssistWidget);
        SndProgressBar->setObjectName(QString::fromUtf8("SndProgressBar"));
        SndProgressBar->setMaximumSize(QSize(16777215, 20));
        SndProgressBar->setValue(24);
        SndProgressBar->setTextVisible(true);

        verticalLayout_3->addWidget(SndProgressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(mNetAssistWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        CurState = new QLabel(mNetAssistWidget);
        CurState->setObjectName(QString::fromUtf8("CurState"));
        CurState->setMinimumSize(QSize(120, 16));
        CurState->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(CurState);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_6 = new QLabel(mNetAssistWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(0, 16));
        label_6->setMaximumSize(QSize(16777215, 36));

        horizontalLayout->addWidget(label_6);

        lEdit_SndCnt = new QLineEdit(mNetAssistWidget);
        lEdit_SndCnt->setObjectName(QString::fromUtf8("lEdit_SndCnt"));
        lEdit_SndCnt->setMinimumSize(QSize(50, 16));
        lEdit_SndCnt->setMaximumSize(QSize(80, 36));
        lEdit_SndCnt->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 255, 255);"));
        lEdit_SndCnt->setFrame(false);
        lEdit_SndCnt->setReadOnly(true);

        horizontalLayout->addWidget(lEdit_SndCnt);

        label_7 = new QLabel(mNetAssistWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy7);
        label_7->setMinimumSize(QSize(0, 20));
        label_7->setMaximumSize(QSize(16777215, 36));

        horizontalLayout->addWidget(label_7);

        lEdit_RcvCnt = new QLineEdit(mNetAssistWidget);
        lEdit_RcvCnt->setObjectName(QString::fromUtf8("lEdit_RcvCnt"));
        sizePolicy2.setHeightForWidth(lEdit_RcvCnt->sizePolicy().hasHeightForWidth());
        lEdit_RcvCnt->setSizePolicy(sizePolicy2);
        lEdit_RcvCnt->setMinimumSize(QSize(50, 16));
        lEdit_RcvCnt->setMaximumSize(QSize(80, 36));
        lEdit_RcvCnt->setAutoFillBackground(false);
        lEdit_RcvCnt->setFrame(false);
        lEdit_RcvCnt->setReadOnly(true);

        horizontalLayout->addWidget(lEdit_RcvCnt);

        pBtnResetCnt = new QPushButton(mNetAssistWidget);
        pBtnResetCnt->setObjectName(QString::fromUtf8("pBtnResetCnt"));
        pBtnResetCnt->setMinimumSize(QSize(70, 16));
        pBtnResetCnt->setMaximumSize(QSize(160, 40));
        QFont font2;
        font2.setBold(true);
        font2.setUnderline(true);
        pBtnResetCnt->setFont(font2);
        pBtnResetCnt->setCursor(QCursor(Qt::PointingHandCursor));
        pBtnResetCnt->setStyleSheet(QString::fromUtf8(""));
        pBtnResetCnt->setAutoDefault(true);
        pBtnResetCnt->setFlat(true);

        horizontalLayout->addWidget(pBtnResetCnt);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(mNetAssistWidget);

        Tabs_SndRcv->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(mNetAssistWidget);
    } // setupUi

    void retranslateUi(QWidget *mNetAssistWidget)
    {
        mNetAssistWidget->setWindowTitle(QCoreApplication::translate("mNetAssistWidget", "\347\275\221\347\273\234\350\260\203\350\257\225\345\212\251\346\211\213", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("mNetAssistWidget", "\353\204\244\355\212\270\354\233\214\355\201\254 \354\204\244\354\240\225", nullptr));
        label->setText(QCoreApplication::translate("mNetAssistWidget", "\355\224\204\353\241\234\355\206\240\354\275\234 \354\242\205\353\245\230", nullptr));
        cBoxNetType->setItemText(0, QCoreApplication::translate("mNetAssistWidget", "UDP", nullptr));
        cBoxNetType->setItemText(1, QCoreApplication::translate("mNetAssistWidget", "TCP\346\234\215\345\212\241\345\231\250", nullptr));
        cBoxNetType->setItemText(2, QCoreApplication::translate("mNetAssistWidget", "TCP\345\256\242\346\210\267\347\253\257", nullptr));

        label_IP->setText(QCoreApplication::translate("mNetAssistWidget", "\353\241\234\354\273\254 IP \354\243\274\354\206\214", nullptr));
        lEditIpAddr->setInputMask(QCoreApplication::translate("mNetAssistWidget", "000.000.000.000", nullptr));
        label_Port->setText(QCoreApplication::translate("mNetAssistWidget", "\353\241\234\354\273\254 \355\217\254\355\212\270", nullptr));
        lEditIpPort->setInputMask(QString());
        lEditIpPort->setText(QCoreApplication::translate("mNetAssistWidget", "56050", nullptr));
        pBtnNetCnnt->setText(QCoreApplication::translate("mNetAssistWidget", "\353\204\244\355\212\270\354\233\214\355\201\254 \354\227\260\352\262\260", nullptr));
        StartRcvFile->setText(QCoreApplication::translate("mNetAssistWidget", "\354\210\230\354\213\240 \353\202\264\354\232\251\354\235\204 \355\214\214\354\235\274\353\241\234 \354\240\200\354\236\245", nullptr));
        cBox_ShowRcvTime->setText(QCoreApplication::translate("mNetAssistWidget", "\354\210\230\354\213\240 \353\202\240\354\247\234 \355\221\234\354\213\234", nullptr));
        cBox_RcvHexDisp->setText(QCoreApplication::translate("mNetAssistWidget", "16\354\247\204\354\210\230 \355\221\234\354\213\234", nullptr));
        cBox_PauseShowRcv->setText(QCoreApplication::translate("mNetAssistWidget", "\354\210\230\354\213\240 \355\221\234\354\213\234 \354\235\274\354\213\234\354\240\225\354\247\200", nullptr));
        cBox_chatMode->setText(QCoreApplication::translate("mNetAssistWidget", "\352\267\270\353\243\271 \354\261\204\355\214\205 \353\252\250\353\223\234 \354\204\234\353\271\204\354\212\244", nullptr));
        cBox_echoMode->setText(QCoreApplication::translate("mNetAssistWidget", "\352\267\270\353\243\271 \354\261\204\355\214\205 \355\232\214\354\213\240 \355\221\234\354\213\234 \354\212\244\354\234\204\354\271\230", nullptr));
        pBtnSaveRcvData->setText(QCoreApplication::translate("mNetAssistWidget", "\353\215\260\354\235\264\355\204\260 \354\240\200\354\236\245", nullptr));
        pBtnClearRcvDisp->setText(QCoreApplication::translate("mNetAssistWidget", "\355\221\234\354\213\234 \354\247\200\354\232\260\352\270\260", nullptr));
        Tabs_SndRcv->setTabText(Tabs_SndRcv->indexOf(tab), QCoreApplication::translate("mNetAssistWidget", "\354\210\230\354\213\240 \354\204\244\354\240\225", nullptr));
        cBoxStartSndFile->setText(QCoreApplication::translate("mNetAssistWidget", "\355\214\214\354\235\274 \353\215\260\354\235\264\355\204\260 \354\206\214\354\212\244 \354\202\254\354\232\251.", nullptr));
        cBox_AntoClearSnd->setText(QCoreApplication::translate("mNetAssistWidget", "\354\240\204\354\206\241 \355\233\204 \354\236\220\353\217\231 \354\247\200\354\232\260\352\270\260", nullptr));
        cBox_SndHexDisp->setText(QCoreApplication::translate("mNetAssistWidget", "16\354\247\204\354\210\230\353\241\234 \354\240\204\354\206\241", nullptr));
        cBoxLoopSnd->setText(QCoreApplication::translate("mNetAssistWidget", "\353\215\260\354\235\264\355\204\260 \354\206\214\354\212\244\353\245\274 \353\260\230\353\263\265 \354\240\204\354\206\241", nullptr));
        label_4->setText(QCoreApplication::translate("mNetAssistWidget", "\352\260\204\352\262\251", nullptr));
        lEdit_Interval_ms->setInputMask(QCoreApplication::translate("mNetAssistWidget", "D9999", nullptr));
        lEdit_Interval_ms->setText(QCoreApplication::translate("mNetAssistWidget", "1000", nullptr));
        label_5->setText(QCoreApplication::translate("mNetAssistWidget", "\353\260\200\353\246\254\354\264\210", nullptr));
        pBtnLoadSndData->setText(QCoreApplication::translate("mNetAssistWidget", "\353\215\260\354\235\264\355\204\260 \353\266\210\353\237\254\354\230\244\352\270\260", nullptr));
        pBtnClearSndDisp->setText(QCoreApplication::translate("mNetAssistWidget", "\355\231\224\353\251\264 \354\247\200\354\232\260\352\270\260", nullptr));
        Tabs_SndRcv->setTabText(Tabs_SndRcv->indexOf(tab_2), QCoreApplication::translate("mNetAssistWidget", "\354\240\204\354\206\241 \354\204\244\354\240\225", nullptr));
        label_9->setText(QCoreApplication::translate("mNetAssistWidget", "\353\215\260\354\235\264\355\204\260 \354\210\230\354\213\240 \352\265\254\354\227\255", nullptr));
        labelClients->setText(QCoreApplication::translate("mNetAssistWidget", "\354\227\260\352\262\260 \353\214\200\354\203\201", nullptr));
        labelSpaceClients->setText(QString());
        labelUdp->setText(QCoreApplication::translate("mNetAssistWidget", "\353\214\200\354\203\201 IP \354\243\274\354\206\214", nullptr));
        lEditUdpIP->setInputMask(QCoreApplication::translate("mNetAssistWidget", "000.000.000.000", nullptr));
        lEditUdpIP->setText(QCoreApplication::translate("mNetAssistWidget", "...", nullptr));
        labelUdp1->setText(QCoreApplication::translate("mNetAssistWidget", "\353\214\200\354\203\201 \355\217\254\355\212\270", nullptr));
        lEditUdpPort->setInputMask(QString());
        lEditUdpPort->setText(QCoreApplication::translate("mNetAssistWidget", "8081", nullptr));
        labelSpaceUdp->setText(QString());
        pBtnSendData->setText(QCoreApplication::translate("mNetAssistWidget", "\354\240\204\354\206\241", nullptr));
        label_2->setText(QCoreApplication::translate("mNetAssistWidget", "\354\203\201\355\203\234", nullptr));
        CurState->setText(QString());
        label_6->setText(QCoreApplication::translate("mNetAssistWidget", "\354\206\241\354\213\240 \355\232\237\354\210\230", nullptr));
        lEdit_SndCnt->setText(QCoreApplication::translate("mNetAssistWidget", "0", nullptr));
        label_7->setText(QCoreApplication::translate("mNetAssistWidget", "\354\210\230\354\213\240 \355\232\237\354\210\230", nullptr));
        lEdit_RcvCnt->setText(QCoreApplication::translate("mNetAssistWidget", "0", nullptr));
        pBtnResetCnt->setText(QCoreApplication::translate("mNetAssistWidget", "\354\271\264\354\232\264\355\204\260 \354\264\210\352\270\260\355\231\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mNetAssistWidget: public Ui_mNetAssistWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNETASSISTWIDGET_H
