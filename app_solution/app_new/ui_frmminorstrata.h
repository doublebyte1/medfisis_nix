/********************************************************************************
** Form generated from reading UI file 'frmminorstrata.ui'
**
** Created: Fri Sep 2 11:14:46 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMINORSTRATA_H
#define UI_FRMMINORSTRATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "customtimectrl.h"

QT_BEGIN_NAMESPACE

class Ui_frmminorstrata
{
public:
    QGridLayout *gridLayout_2;
    QLabel *lbHeader;
    QLabel *lbSource;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_4;
    QToolButton *toolButton;
    QPushButton *pushNew;
    QLabel *label_5;
    QLineEdit *lineNew;
    QGroupBox *groupDetails;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *cmbGLS;
    QGroupBox *groupActivity;
    QGridLayout *gridLayout_3;
    QRadioButton *radioActive;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioInactive;
    QComboBox *cmbReasons;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QPlainTextEdit *textComments;
    QLabel *label;
    QLabel *label_2;
    CustomTimeCtrl *customDtEnd;
    QDialogButtonBox *buttonBox;
    CustomTimeCtrl *customDtStart;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBackNext;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushPrevious;
    QPushButton *pushNext;
    QLabel *label_6;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *frmminorstrata)
    {
        if (frmminorstrata->objectName().isEmpty())
            frmminorstrata->setObjectName(QString::fromUtf8("frmminorstrata"));
        frmminorstrata->resize(711, 645);
        gridLayout_2 = new QGridLayout(frmminorstrata);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lbHeader = new QLabel(frmminorstrata);
        lbHeader->setObjectName(QString::fromUtf8("lbHeader"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbHeader->sizePolicy().hasHeightForWidth());
        lbHeader->setSizePolicy(sizePolicy);
        lbHeader->setStyleSheet(QString::fromUtf8("background-color:rgb(247, 247, 247)"));

        gridLayout_2->addWidget(lbHeader, 0, 0, 1, 2);

        lbSource = new QLabel(frmminorstrata);
        lbSource->setObjectName(QString::fromUtf8("lbSource"));
        lbSource->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(220, 220, 220, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"font: 75 10pt \"Fixedsys\";"));
        lbSource->setFrameShape(QFrame::StyledPanel);
        lbSource->setFrameShadow(QFrame::Raised);
        lbSource->setScaledContents(true);

        gridLayout_2->addWidget(lbSource, 0, 2, 1, 1);

        tableView = new QTableView(frmminorstrata);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setShowGrid(false);

        gridLayout_2->addWidget(tableView, 2, 0, 2, 2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        toolButton = new QToolButton(frmminorstrata);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(toolButton);

        pushNew = new QPushButton(frmminorstrata);
        pushNew->setObjectName(QString::fromUtf8("pushNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app_new/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushNew->setIcon(icon);

        verticalLayout_4->addWidget(pushNew);


        gridLayout_2->addLayout(verticalLayout_4, 3, 2, 2, 1);

        label_5 = new QLabel(frmminorstrata);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        lineNew = new QLineEdit(frmminorstrata);
        lineNew->setObjectName(QString::fromUtf8("lineNew"));

        gridLayout_2->addWidget(lineNew, 4, 1, 1, 1);

        groupDetails = new QGroupBox(frmminorstrata);
        groupDetails->setObjectName(QString::fromUtf8("groupDetails"));
        gridLayout = new QGridLayout(groupDetails);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(groupDetails);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        cmbGLS = new QComboBox(groupDetails);
        cmbGLS->setObjectName(QString::fromUtf8("cmbGLS"));

        horizontalLayout_2->addWidget(cmbGLS);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        groupActivity = new QGroupBox(groupDetails);
        groupActivity->setObjectName(QString::fromUtf8("groupActivity"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupActivity->sizePolicy().hasHeightForWidth());
        groupActivity->setSizePolicy(sizePolicy2);
        gridLayout_3 = new QGridLayout(groupActivity);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        radioActive = new QRadioButton(groupActivity);
        buttonGroup = new QButtonGroup(frmminorstrata);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioActive);
        radioActive->setObjectName(QString::fromUtf8("radioActive"));

        gridLayout_3->addWidget(radioActive, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioInactive = new QRadioButton(groupActivity);
        buttonGroup->addButton(radioInactive);
        radioInactive->setObjectName(QString::fromUtf8("radioInactive"));

        horizontalLayout->addWidget(radioInactive);

        cmbReasons = new QComboBox(groupActivity);
        cmbReasons->setObjectName(QString::fromUtf8("cmbReasons"));

        horizontalLayout->addWidget(cmbReasons);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);


        gridLayout->addWidget(groupActivity, 0, 2, 2, 2);

        label_4 = new QLabel(groupDetails);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        textComments = new QPlainTextEdit(groupDetails);
        textComments->setObjectName(QString::fromUtf8("textComments"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textComments->sizePolicy().hasHeightForWidth());
        textComments->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(textComments, 1, 1, 1, 1);

        label = new QLabel(groupDetails);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 2);

        label_2 = new QLabel(groupDetails);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 2, 2, 1);

        customDtEnd = new CustomTimeCtrl(groupDetails);
        customDtEnd->setObjectName(QString::fromUtf8("customDtEnd"));

        gridLayout->addWidget(customDtEnd, 4, 2, 1, 2);

        buttonBox = new QDialogButtonBox(groupDetails);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 5, 3, 1, 1);

        customDtStart = new CustomTimeCtrl(groupDetails);
        customDtStart->setObjectName(QString::fromUtf8("customDtStart"));

        gridLayout->addWidget(customDtStart, 3, 0, 3, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 5, 2, 1, 1);


        gridLayout_2->addWidget(groupDetails, 5, 0, 1, 3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        groupBackNext = new QGroupBox(frmminorstrata);
        groupBackNext->setObjectName(QString::fromUtf8("groupBackNext"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBackNext->sizePolicy().hasHeightForWidth());
        groupBackNext->setSizePolicy(sizePolicy4);
        horizontalLayout_3 = new QHBoxLayout(groupBackNext);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushPrevious = new QPushButton(groupBackNext);
        pushPrevious->setObjectName(QString::fromUtf8("pushPrevious"));
        pushPrevious->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/app_new/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushPrevious->setIcon(icon1);

        horizontalLayout_3->addWidget(pushPrevious);

        pushNext = new QPushButton(groupBackNext);
        pushNext->setObjectName(QString::fromUtf8("pushNext"));
        pushNext->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/app_new/forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushNext->setIcon(icon2);

        horizontalLayout_3->addWidget(pushNext);


        horizontalLayout_4->addWidget(groupBackNext);


        gridLayout_2->addLayout(horizontalLayout_4, 6, 0, 1, 3);

        label_6 = new QLabel(frmminorstrata);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_5->setBuddy(lineNew);
        label_3->setBuddy(cmbGLS);
        label_6->setBuddy(tableView);
#endif // QT_NO_SHORTCUT

        retranslateUi(frmminorstrata);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), frmminorstrata, SLOT(onButtonClick(QAbstractButton*)));
        QObject::connect(radioActive, SIGNAL(clicked(bool)), frmminorstrata, SLOT(setActiveReason(bool)));
        QObject::connect(tableView, SIGNAL(clicked(QModelIndex)), frmminorstrata, SLOT(previewRow(QModelIndex)));
        QObject::connect(radioActive, SIGNAL(clicked(bool)), frmminorstrata, SLOT(disableReasonCombo()));
        QObject::connect(radioInactive, SIGNAL(clicked()), frmminorstrata, SLOT(disableReasonCombo()));
        QObject::connect(pushNew, SIGNAL(clicked()), frmminorstrata, SLOT(createRecord()));

        QMetaObject::connectSlotsByName(frmminorstrata);
    } // setupUi

    void retranslateUi(QWidget *frmminorstrata)
    {
        frmminorstrata->setWindowTitle(QApplication::translate("frmminorstrata", "Form", 0, QApplication::UnicodeUTF8));
        lbHeader->setText(QApplication::translate("frmminorstrata", "WRITE SOMETHING HERE LATER <---", 0, QApplication::UnicodeUTF8));
        lbSource->setText(QApplication::translate("frmminorstrata", "[SOURCE]", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tableView->setToolTip(QApplication::translate("frmminorstrata", "Choose minor strata (or create new one)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tableView->setStatusTip(QApplication::translate("frmminorstrata", "Choose minor strata (or create new one)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        tableView->setWhatsThis(QApplication::translate("frmminorstrata", "In this widget we can choose a minor strata, or create a new one", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        toolButton->setToolTip(QApplication::translate("frmminorstrata", "Setup temporary frame changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        toolButton->setStatusTip(QApplication::translate("frmminorstrata", "Setup temporary frame changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        toolButton->setWhatsThis(QApplication::translate("frmminorstrata", "Setups temporary frame changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        toolButton->setText(QApplication::translate("frmminorstrata", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushNew->setToolTip(QApplication::translate("frmminorstrata", "Create new record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushNew->setStatusTip(QApplication::translate("frmminorstrata", "Create new record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushNew->setWhatsThis(QApplication::translate("frmminorstrata", "Creates new record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushNew->setText(QString());
        label_5->setText(QApplication::translate("frmminorstrata", "Create New", 0, QApplication::UnicodeUTF8));
        groupDetails->setTitle(QApplication::translate("frmminorstrata", "Details", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("frmminorstrata", "Group of Landing Sites", 0, QApplication::UnicodeUTF8));
        groupActivity->setTitle(QApplication::translate("frmminorstrata", "Activity Status", 0, QApplication::UnicodeUTF8));
        radioActive->setText(QApplication::translate("frmminorstrata", "Active", 0, QApplication::UnicodeUTF8));
        radioInactive->setText(QApplication::translate("frmminorstrata", "Inactive", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("frmminorstrata", "Comments", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("frmminorstrata", "Start Date", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("frmminorstrata", "End Date", 0, QApplication::UnicodeUTF8));
        groupBackNext->setTitle(QString());
        pushPrevious->setText(QApplication::translate("frmminorstrata", "Previous", 0, QApplication::UnicodeUTF8));
        pushNext->setText(QApplication::translate("frmminorstrata", "Next", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("frmminorstrata", "Choose Minor Strata", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class frmminorstrata: public Ui_frmminorstrata {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMINORSTRATA_H
