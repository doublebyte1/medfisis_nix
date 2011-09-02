/********************************************************************************
** Form generated from reading UI file 'datetime.ui'
**
** Created: Fri Sep 2 10:58:15 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATETIME_H
#define UI_DATETIME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTimeEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DateTime
{
public:
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupDate;
    QGridLayout *gridLayout;
    QLabel *lbDate;
    QDateEdit *dateEdit;
    QLabel *lbDateFormat;
    QGroupBox *groupTime;
    QGridLayout *gridLayout_2;
    QLabel *lbTime;
    QTimeEdit *timeEdit;
    QLabel *lbTimeFormat;
    QGroupBox *groupHasTime;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkTime;

    void setupUi(QWidget *DateTime)
    {
        if (DateTime->objectName().isEmpty())
            DateTime->setObjectName(QString::fromUtf8("DateTime"));
        DateTime->resize(320, 147);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/agenda.png"), QSize(), QIcon::Normal, QIcon::Off);
        DateTime->setWindowIcon(icon);
        gridLayout_4 = new QGridLayout(DateTime);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        frame = new QFrame(DateTime);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupDate = new QGroupBox(frame);
        groupDate->setObjectName(QString::fromUtf8("groupDate"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupDate->sizePolicy().hasHeightForWidth());
        groupDate->setSizePolicy(sizePolicy1);
        groupDate->setFlat(true);
        gridLayout = new QGridLayout(groupDate);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lbDate = new QLabel(groupDate);
        lbDate->setObjectName(QString::fromUtf8("lbDate"));

        gridLayout->addWidget(lbDate, 0, 0, 1, 1);

        dateEdit = new QDateEdit(groupDate);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy2);
        dateEdit->setCalendarPopup(true);

        gridLayout->addWidget(dateEdit, 0, 1, 1, 1);

        lbDateFormat = new QLabel(groupDate);
        lbDateFormat->setObjectName(QString::fromUtf8("lbDateFormat"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lbDateFormat->sizePolicy().hasHeightForWidth());
        lbDateFormat->setSizePolicy(sizePolicy3);
        lbDateFormat->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbDateFormat, 1, 0, 1, 2);


        horizontalLayout_2->addWidget(groupDate);

        groupTime = new QGroupBox(frame);
        groupTime->setObjectName(QString::fromUtf8("groupTime"));
        sizePolicy1.setHeightForWidth(groupTime->sizePolicy().hasHeightForWidth());
        groupTime->setSizePolicy(sizePolicy1);
        groupTime->setFlat(true);
        gridLayout_2 = new QGridLayout(groupTime);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lbTime = new QLabel(groupTime);
        lbTime->setObjectName(QString::fromUtf8("lbTime"));

        gridLayout_2->addWidget(lbTime, 0, 0, 1, 1);

        timeEdit = new QTimeEdit(groupTime);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        sizePolicy2.setHeightForWidth(timeEdit->sizePolicy().hasHeightForWidth());
        timeEdit->setSizePolicy(sizePolicy2);
        timeEdit->setCalendarPopup(false);

        gridLayout_2->addWidget(timeEdit, 0, 1, 1, 1);

        lbTimeFormat = new QLabel(groupTime);
        lbTimeFormat->setObjectName(QString::fromUtf8("lbTimeFormat"));
        sizePolicy3.setHeightForWidth(lbTimeFormat->sizePolicy().hasHeightForWidth());
        lbTimeFormat->setSizePolicy(sizePolicy3);
        lbTimeFormat->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lbTimeFormat, 1, 0, 1, 2);


        horizontalLayout_2->addWidget(groupTime);


        verticalLayout->addLayout(horizontalLayout_2);

        groupHasTime = new QGroupBox(frame);
        groupHasTime->setObjectName(QString::fromUtf8("groupHasTime"));
        sizePolicy3.setHeightForWidth(groupHasTime->sizePolicy().hasHeightForWidth());
        groupHasTime->setSizePolicy(sizePolicy3);
        groupHasTime->setFlat(true);
        horizontalLayout = new QHBoxLayout(groupHasTime);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkTime = new QCheckBox(groupHasTime);
        checkTime->setObjectName(QString::fromUtf8("checkTime"));
        sizePolicy2.setHeightForWidth(checkTime->sizePolicy().hasHeightForWidth());
        checkTime->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(checkTime);


        verticalLayout->addWidget(groupHasTime);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        lbDate->setBuddy(dateEdit);
        lbTime->setBuddy(timeEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(DateTime);
        QObject::connect(checkTime, SIGNAL(clicked(bool)), DateTime, SLOT(setHasTime(bool)));
        QObject::connect(DateTime, SIGNAL(isAuto(bool)), dateEdit, SLOT(setDisabled(bool)));
        QObject::connect(DateTime, SIGNAL(isAuto(bool)), timeEdit, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(DateTime);
    } // setupUi

    void retranslateUi(QWidget *DateTime)
    {
        DateTime->setWindowTitle(QString());
#ifndef QT_NO_STATUSTIP
        DateTime->setStatusTip(QApplication::translate("DateTime", "Date Time Input", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        DateTime->setWhatsThis(QApplication::translate("DateTime", "Widget to Input DateTime", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        groupDate->setToolTip(QApplication::translate("DateTime", "Input the date here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        groupDate->setStatusTip(QApplication::translate("DateTime", "Input date", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        groupDate->setWhatsThis(QApplication::translate("DateTime", "Widget to input date", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        groupDate->setTitle(QString());
        lbDate->setText(QApplication::translate("DateTime", "Date", 0, QApplication::UnicodeUTF8));
        lbDateFormat->setText(QApplication::translate("DateTime", "-> DATE FORMAT", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        groupTime->setToolTip(QApplication::translate("DateTime", "Input the time here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        groupTime->setStatusTip(QApplication::translate("DateTime", "Input time", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        groupTime->setWhatsThis(QApplication::translate("DateTime", "Widget to input time", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        groupTime->setTitle(QString());
        lbTime->setText(QApplication::translate("DateTime", "Time", 0, QApplication::UnicodeUTF8));
        lbTimeFormat->setText(QApplication::translate("DateTime", "-> TIME FORMAT", 0, QApplication::UnicodeUTF8));
        groupHasTime->setTitle(QString());
        checkTime->setText(QApplication::translate("DateTime", "Has time", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DateTime: public Ui_DateTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATETIME_H
