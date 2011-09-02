/********************************************************************************
** Form generated from reading UI file 'frmcell.ui'
**
** Created: Fri Sep 2 11:14:46 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMCELL_H
#define UI_FRMCELL_H

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
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTableView>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "customtimectrl.h"

QT_BEGIN_NAMESPACE

class Ui_frmCell
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbHeader;
    QLabel *lbSource;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_5;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushNew;
    QToolButton *toolButton;
    QGroupBox *groupDetails;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *cmbLS;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    CustomTimeCtrl *customDtStart;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    CustomTimeCtrl *customDtEnd;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_11;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QSpinBox *spinNE;
    QSpinBox *spinAE;
    QSpinBox *spinIE;
    QSpinBox *spinOE;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QSpinBox *spinNC;
    QSpinBox *spinAC;
    QSpinBox *spinIC;
    QSpinBox *spinOC;
    QPlainTextEdit *textComments;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushPrevious;
    QPushButton *pushNext;

    void setupUi(QWidget *frmCell)
    {
        if (frmCell->objectName().isEmpty())
            frmCell->setObjectName(QString::fromUtf8("frmCell"));
        frmCell->resize(712, 589);
        verticalLayout_5 = new QVBoxLayout(frmCell);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lbHeader = new QLabel(frmCell);
        lbHeader->setObjectName(QString::fromUtf8("lbHeader"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbHeader->sizePolicy().hasHeightForWidth());
        lbHeader->setSizePolicy(sizePolicy);
        lbHeader->setStyleSheet(QString::fromUtf8("background-color:rgb(247, 247, 247)"));

        horizontalLayout_7->addWidget(lbHeader);

        lbSource = new QLabel(frmCell);
        lbSource->setObjectName(QString::fromUtf8("lbSource"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbSource->sizePolicy().hasHeightForWidth());
        lbSource->setSizePolicy(sizePolicy1);
        lbSource->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(220, 220, 220, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"font: 75 10pt \"Fixedsys\";"));
        lbSource->setFrameShape(QFrame::StyledPanel);
        lbSource->setFrameShadow(QFrame::Raised);
        lbSource->setScaledContents(true);

        horizontalLayout_7->addWidget(lbSource);


        verticalLayout_5->addLayout(horizontalLayout_7);

        label_13 = new QLabel(frmCell);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_5->addWidget(label_13);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        tableView = new QTableView(frmCell);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        horizontalLayout_5->addWidget(tableView);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushNew = new QPushButton(frmCell);
        pushNew->setObjectName(QString::fromUtf8("pushNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app_new/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushNew->setIcon(icon);

        verticalLayout_4->addWidget(pushNew);

        toolButton = new QToolButton(frmCell);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(toolButton);


        horizontalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_5);

        groupDetails = new QGroupBox(frmCell);
        groupDetails->setObjectName(QString::fromUtf8("groupDetails"));
        gridLayout = new QGridLayout(groupDetails);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(groupDetails);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        cmbLS = new QComboBox(groupDetails);
        cmbLS->setObjectName(QString::fromUtf8("cmbLS"));

        horizontalLayout_3->addWidget(cmbLS);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupDetails);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        customDtStart = new CustomTimeCtrl(groupDetails);
        customDtStart->setObjectName(QString::fromUtf8("customDtStart"));

        horizontalLayout_2->addWidget(customDtStart);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 2, 1);

        buttonBox = new QDialogButtonBox(groupDetails);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 6, 1, 1, 3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(groupDetails);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        customDtEnd = new CustomTimeCtrl(groupDetails);
        customDtEnd->setObjectName(QString::fromUtf8("customDtEnd"));

        horizontalLayout_4->addWidget(customDtEnd);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 4, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_11 = new QLabel(groupDetails);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout->addWidget(label_11);

        label_7 = new QLabel(groupDetails);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(groupDetails);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(groupDetails);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        label_10 = new QLabel(groupDetails);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout->addWidget(label_10);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(groupDetails);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_4);

        spinNE = new QSpinBox(groupDetails);
        spinNE->setObjectName(QString::fromUtf8("spinNE"));

        verticalLayout_2->addWidget(spinNE);

        spinAE = new QSpinBox(groupDetails);
        spinAE->setObjectName(QString::fromUtf8("spinAE"));

        verticalLayout_2->addWidget(spinAE);

        spinIE = new QSpinBox(groupDetails);
        spinIE->setObjectName(QString::fromUtf8("spinIE"));

        verticalLayout_2->addWidget(spinIE);

        spinOE = new QSpinBox(groupDetails);
        spinOE->setObjectName(QString::fromUtf8("spinOE"));

        verticalLayout_2->addWidget(spinOE);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(groupDetails);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_5);

        spinNC = new QSpinBox(groupDetails);
        spinNC->setObjectName(QString::fromUtf8("spinNC"));
        spinNC->setEnabled(false);

        verticalLayout_3->addWidget(spinNC);

        spinAC = new QSpinBox(groupDetails);
        spinAC->setObjectName(QString::fromUtf8("spinAC"));
        spinAC->setEnabled(false);

        verticalLayout_3->addWidget(spinAC);

        spinIC = new QSpinBox(groupDetails);
        spinIC->setObjectName(QString::fromUtf8("spinIC"));
        spinIC->setEnabled(false);

        verticalLayout_3->addWidget(spinIC);

        spinOC = new QSpinBox(groupDetails);
        spinOC->setObjectName(QString::fromUtf8("spinOC"));
        spinOC->setEnabled(false);

        verticalLayout_3->addWidget(spinOC);


        horizontalLayout->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout, 1, 2, 1, 1);

        textComments = new QPlainTextEdit(groupDetails);
        textComments->setObjectName(QString::fromUtf8("textComments"));

        gridLayout->addWidget(textComments, 4, 2, 1, 1);

        label_12 = new QLabel(groupDetails);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 4, 1, 1, 1);


        verticalLayout_5->addWidget(groupDetails);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        groupBox = new QGroupBox(frmCell);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_6 = new QHBoxLayout(groupBox);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushPrevious = new QPushButton(groupBox);
        pushPrevious->setObjectName(QString::fromUtf8("pushPrevious"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/app_new/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushPrevious->setIcon(icon1);

        horizontalLayout_6->addWidget(pushPrevious);

        pushNext = new QPushButton(groupBox);
        pushNext->setObjectName(QString::fromUtf8("pushNext"));
        pushNext->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/app_new/forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushNext->setIcon(icon2);

        horizontalLayout_6->addWidget(pushNext);


        horizontalLayout_8->addWidget(groupBox);


        verticalLayout_5->addLayout(horizontalLayout_8);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(cmbLS);
        label_12->setBuddy(textComments);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tableView, pushNew);
        QWidget::setTabOrder(pushNew, cmbLS);
        QWidget::setTabOrder(cmbLS, spinNE);
        QWidget::setTabOrder(spinNE, spinNC);
        QWidget::setTabOrder(spinNC, spinAE);
        QWidget::setTabOrder(spinAE, spinAC);
        QWidget::setTabOrder(spinAC, spinIE);
        QWidget::setTabOrder(spinIE, spinIC);
        QWidget::setTabOrder(spinIC, spinOE);
        QWidget::setTabOrder(spinOE, spinOC);
        QWidget::setTabOrder(spinOC, textComments);
        QWidget::setTabOrder(textComments, buttonBox);
        QWidget::setTabOrder(buttonBox, pushPrevious);
        QWidget::setTabOrder(pushPrevious, pushNext);

        retranslateUi(frmCell);
        QObject::connect(pushNew, SIGNAL(clicked()), frmCell, SLOT(createRecord()));
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), frmCell, SLOT(onButtonClick(QAbstractButton*)));
        QObject::connect(tableView, SIGNAL(clicked(QModelIndex)), frmCell, SLOT(previewRow(QModelIndex)));

        QMetaObject::connectSlotsByName(frmCell);
    } // setupUi

    void retranslateUi(QWidget *frmCell)
    {
        frmCell->setWindowTitle(QApplication::translate("frmCell", "Form", 0, QApplication::UnicodeUTF8));
        lbHeader->setText(QApplication::translate("frmCell", "WRITE SOMETHING HERE LATER <---", 0, QApplication::UnicodeUTF8));
        lbSource->setText(QApplication::translate("frmCell", "[SOURCE]", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("frmCell", "Choose cell:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tableView->setToolTip(QApplication::translate("frmCell", "Choose cell (or create a new one)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tableView->setStatusTip(QApplication::translate("frmCell", "Choose cell (or create a new one)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        tableView->setWhatsThis(QApplication::translate("frmCell", "In this widget we can choose cell, or create a new one", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        pushNew->setToolTip(QApplication::translate("frmCell", "Create new record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushNew->setStatusTip(QApplication::translate("frmCell", "Create new record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushNew->setWhatsThis(QApplication::translate("frmCell", "Creates new record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushNew->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton->setToolTip(QApplication::translate("frmCell", "Setup temporary frame changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        toolButton->setStatusTip(QApplication::translate("frmCell", "Setup temporary frame changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        toolButton->setWhatsThis(QApplication::translate("frmCell", "Setups temporary frame changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        toolButton->setText(QApplication::translate("frmCell", "...", 0, QApplication::UnicodeUTF8));
        groupDetails->setTitle(QApplication::translate("frmCell", "Details", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("frmCell", "Landing Site", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("frmCell", "Start Date", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("frmCell", "End Date", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        label_7->setText(QApplication::translate("frmCell", "No of Vessels", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("frmCell", "Active Vessels", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("frmCell", "Inactive Vessels", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("frmCell", "Vessels from Outside", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("frmCell", "Estimated", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("frmCell", "Calculated", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("frmCell", "Comments", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        pushPrevious->setText(QApplication::translate("frmCell", "Previous", 0, QApplication::UnicodeUTF8));
        pushNext->setText(QApplication::translate("frmCell", "Next", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class frmCell: public Ui_frmCell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMCELL_H
