/********************************************************************************
** Form generated from reading UI file 'catchinputfrm.ui'
**
** Created: Fri Sep 2 10:01:45 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATCHINPUTFRM_H
#define UI_CATCHINPUTFRM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QToolBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CatchInputCtrl
{
public:
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *pageWeight;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinTotalE;
    QDoubleSpinBox *doubleSpinTotalC;
    QComboBox *cmbWeightUnits;
    QWidget *pageBoxes;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinNoBoxesE;
    QDoubleSpinBox *doubleSpinNoBoxesC;
    QDoubleSpinBox *doubleSpinWeightBox;
    QComboBox *cmbBoxUnits;
    QWidget *pageUnits;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QSpinBox *spinUnitsE;
    QSpinBox *spinUnitsC;
    QDoubleSpinBox *doubleSpinWeightUnit;
    QComboBox *cmbUnitUnits;

    void setupUi(QWidget *CatchInputCtrl)
    {
        if (CatchInputCtrl->objectName().isEmpty())
            CatchInputCtrl->setObjectName(QString::fromUtf8("CatchInputCtrl"));
        CatchInputCtrl->resize(329, 171);
        CatchInputCtrl->setFocusPolicy(Qt::TabFocus);
        verticalLayout = new QVBoxLayout(CatchInputCtrl);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        toolBox = new QToolBox(CatchInputCtrl);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy);
        toolBox->setFocusPolicy(Qt::TabFocus);
        pageWeight = new QWidget();
        pageWeight->setObjectName(QString::fromUtf8("pageWeight"));
        pageWeight->setGeometry(QRect(0, 0, 311, 57));
        gridLayout_3 = new QGridLayout(pageWeight);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(pageWeight);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(pageWeight);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(pageWeight);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_3, 0, 2, 1, 1);

        doubleSpinTotalE = new QDoubleSpinBox(pageWeight);
        doubleSpinTotalE->setObjectName(QString::fromUtf8("doubleSpinTotalE"));
        doubleSpinTotalE->setFocusPolicy(Qt::WheelFocus);

        gridLayout_3->addWidget(doubleSpinTotalE, 1, 0, 1, 1);

        doubleSpinTotalC = new QDoubleSpinBox(pageWeight);
        doubleSpinTotalC->setObjectName(QString::fromUtf8("doubleSpinTotalC"));
        doubleSpinTotalC->setEnabled(false);
        doubleSpinTotalC->setFocusPolicy(Qt::WheelFocus);

        gridLayout_3->addWidget(doubleSpinTotalC, 1, 1, 1, 1);

        cmbWeightUnits = new QComboBox(pageWeight);
        cmbWeightUnits->setObjectName(QString::fromUtf8("cmbWeightUnits"));
        cmbWeightUnits->setFocusPolicy(Qt::WheelFocus);

        gridLayout_3->addWidget(cmbWeightUnits, 1, 2, 1, 1);

        toolBox->addItem(pageWeight, QString::fromUtf8("by Weight"));
        pageBoxes = new QWidget();
        pageBoxes->setObjectName(QString::fromUtf8("pageBoxes"));
        pageBoxes->setGeometry(QRect(0, 0, 311, 57));
        gridLayout_2 = new QGridLayout(pageBoxes);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(pageBoxes);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(pageBoxes);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_5, 0, 1, 1, 1);

        label_6 = new QLabel(pageBoxes);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_6, 0, 2, 1, 1);

        label_7 = new QLabel(pageBoxes);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_7, 0, 3, 1, 1);

        doubleSpinNoBoxesE = new QDoubleSpinBox(pageBoxes);
        doubleSpinNoBoxesE->setObjectName(QString::fromUtf8("doubleSpinNoBoxesE"));
        doubleSpinNoBoxesE->setFocusPolicy(Qt::WheelFocus);

        gridLayout_2->addWidget(doubleSpinNoBoxesE, 1, 0, 1, 1);

        doubleSpinNoBoxesC = new QDoubleSpinBox(pageBoxes);
        doubleSpinNoBoxesC->setObjectName(QString::fromUtf8("doubleSpinNoBoxesC"));
        doubleSpinNoBoxesC->setEnabled(false);
        doubleSpinNoBoxesC->setFocusPolicy(Qt::WheelFocus);

        gridLayout_2->addWidget(doubleSpinNoBoxesC, 1, 1, 1, 1);

        doubleSpinWeightBox = new QDoubleSpinBox(pageBoxes);
        doubleSpinWeightBox->setObjectName(QString::fromUtf8("doubleSpinWeightBox"));
        doubleSpinWeightBox->setFocusPolicy(Qt::WheelFocus);

        gridLayout_2->addWidget(doubleSpinWeightBox, 1, 2, 1, 1);

        cmbBoxUnits = new QComboBox(pageBoxes);
        cmbBoxUnits->setObjectName(QString::fromUtf8("cmbBoxUnits"));
        cmbBoxUnits->setFocusPolicy(Qt::WheelFocus);

        gridLayout_2->addWidget(cmbBoxUnits, 1, 3, 1, 1);

        toolBox->addItem(pageBoxes, QString::fromUtf8("by Boxes"));
        pageUnits = new QWidget();
        pageUnits->setObjectName(QString::fromUtf8("pageUnits"));
        pageUnits->setGeometry(QRect(0, 0, 311, 57));
        gridLayout = new QGridLayout(pageUnits);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_8 = new QLabel(pageUnits);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        label_9 = new QLabel(pageUnits);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_9, 0, 1, 1, 1);

        label_10 = new QLabel(pageUnits);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_10, 0, 2, 1, 1);

        label_11 = new QLabel(pageUnits);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_11, 0, 3, 1, 1);

        spinUnitsE = new QSpinBox(pageUnits);
        spinUnitsE->setObjectName(QString::fromUtf8("spinUnitsE"));
        spinUnitsE->setFocusPolicy(Qt::WheelFocus);

        gridLayout->addWidget(spinUnitsE, 1, 0, 1, 1);

        spinUnitsC = new QSpinBox(pageUnits);
        spinUnitsC->setObjectName(QString::fromUtf8("spinUnitsC"));
        spinUnitsC->setEnabled(false);
        spinUnitsC->setFocusPolicy(Qt::WheelFocus);

        gridLayout->addWidget(spinUnitsC, 1, 1, 1, 1);

        doubleSpinWeightUnit = new QDoubleSpinBox(pageUnits);
        doubleSpinWeightUnit->setObjectName(QString::fromUtf8("doubleSpinWeightUnit"));
        doubleSpinWeightUnit->setEnabled(true);
        doubleSpinWeightUnit->setFocusPolicy(Qt::WheelFocus);

        gridLayout->addWidget(doubleSpinWeightUnit, 1, 2, 1, 1);

        cmbUnitUnits = new QComboBox(pageUnits);
        cmbUnitUnits->setObjectName(QString::fromUtf8("cmbUnitUnits"));
        cmbUnitUnits->setFocusPolicy(Qt::WheelFocus);

        gridLayout->addWidget(cmbUnitUnits, 1, 3, 1, 1);

        toolBox->addItem(pageUnits, QString::fromUtf8("by Units"));

        verticalLayout->addWidget(toolBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(doubleSpinTotalE);
        label_2->setBuddy(doubleSpinTotalC);
        label_3->setBuddy(cmbWeightUnits);
        label_4->setBuddy(doubleSpinNoBoxesE);
        label_5->setBuddy(doubleSpinNoBoxesC);
        label_6->setBuddy(doubleSpinWeightBox);
        label_7->setBuddy(cmbBoxUnits);
        label_8->setBuddy(spinUnitsE);
        label_9->setBuddy(spinUnitsC);
        label_10->setBuddy(doubleSpinWeightUnit);
        label_11->setBuddy(cmbUnitUnits);
#endif // QT_NO_SHORTCUT

        retranslateUi(CatchInputCtrl);
        QObject::connect(spinUnitsE, SIGNAL(valueChanged(int)), CatchInputCtrl, SLOT(adjustTotalWeightFromUnits(int)));
        QObject::connect(doubleSpinWeightUnit, SIGNAL(valueChanged(double)), CatchInputCtrl, SLOT(adjustTotalWeightFromUnits(double)));
        QObject::connect(doubleSpinNoBoxesE, SIGNAL(valueChanged(double)), CatchInputCtrl, SLOT(adjustTotalWeightFromNoBoxes(double)));
        QObject::connect(doubleSpinWeightBox, SIGNAL(valueChanged(double)), CatchInputCtrl, SLOT(adjustTotalWeightFromBoxWeight(double)));
        QObject::connect(cmbWeightUnits, SIGNAL(currentIndexChanged(QString)), CatchInputCtrl, SLOT(onWeightUnitChange(QString)));
        QObject::connect(cmbBoxUnits, SIGNAL(currentIndexChanged(QString)), CatchInputCtrl, SLOT(onBoxUnitChange(QString)));
        QObject::connect(cmbUnitUnits, SIGNAL(currentIndexChanged(QString)), CatchInputCtrl, SLOT(onUnitsUnitChange(QString)));
        QObject::connect(doubleSpinTotalE, SIGNAL(valueChanged(QString)), CatchInputCtrl, SLOT(updateWeightLabel(QString)));
        QObject::connect(doubleSpinTotalC, SIGNAL(valueChanged(QString)), CatchInputCtrl, SLOT(updateWeightLabel(QString)));

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CatchInputCtrl);
    } // setupUi

    void retranslateUi(QWidget *CatchInputCtrl)
    {
        CatchInputCtrl->setWindowTitle(QApplication::translate("CatchInputCtrl", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolBox->setToolTip(QApplication::translate("CatchInputCtrl", "This widget allows us to introduce the catch, \n"
" using several methods that match each other.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        toolBox->setStatusTip(QApplication::translate("CatchInputCtrl", "This widget allows us to introduce the catch, \\n using several methods that match each other.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        toolBox->setWhatsThis(QApplication::translate("CatchInputCtrl", "This widget allows us to introduce the catch, \n"
" using several methods that match each other.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("CatchInputCtrl", "Estimated", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CatchInputCtrl", "Calculated", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CatchInputCtrl", "Units", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        doubleSpinTotalE->setToolTip(QApplication::translate("CatchInputCtrl", "Estimated total catch weight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        doubleSpinTotalE->setStatusTip(QApplication::translate("CatchInputCtrl", "Estimated total catch weight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinTotalE->setWhatsThis(QApplication::translate("CatchInputCtrl", "Estimated total catch weight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        doubleSpinTotalC->setToolTip(QApplication::translate("CatchInputCtrl", "Calculated total catch weight \n"
" (comes from the aggregation of totals introduced in next forms)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        doubleSpinTotalC->setStatusTip(QApplication::translate("CatchInputCtrl", "Calculated total catch weight \\n (comes from the aggregation of totals introduced in next forms)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinTotalC->setWhatsThis(QApplication::translate("CatchInputCtrl", "Calculated total catch weight \n"
" (comes from the aggregation of totals introduced in next forms)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        cmbWeightUnits->setToolTip(QApplication::translate("CatchInputCtrl", "Weight units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbWeightUnits->setStatusTip(QApplication::translate("CatchInputCtrl", "Weight units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cmbWeightUnits->setWhatsThis(QApplication::translate("CatchInputCtrl", "Weight units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        toolBox->setItemText(toolBox->indexOf(pageWeight), QApplication::translate("CatchInputCtrl", "by Weight", 0, QApplication::UnicodeUTF8));
        toolBox->setItemToolTip(toolBox->indexOf(pageWeight), QApplication::translate("CatchInputCtrl", "Insert aggregated weight (total weight)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CatchInputCtrl", "Estimated", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CatchInputCtrl", "Calculated", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CatchInputCtrl", "Weight/box", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CatchInputCtrl", "Units", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        doubleSpinNoBoxesE->setToolTip(QApplication::translate("CatchInputCtrl", "Estimated number of boxes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        doubleSpinNoBoxesE->setStatusTip(QApplication::translate("CatchInputCtrl", "Estimated number of boxes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinNoBoxesE->setWhatsThis(QApplication::translate("CatchInputCtrl", "Estimated number of boxes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        doubleSpinNoBoxesC->setToolTip(QApplication::translate("CatchInputCtrl", "Calculated number of boxes \n"
" (comes from the aggregation of totals introduced in next forms)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        doubleSpinNoBoxesC->setStatusTip(QApplication::translate("CatchInputCtrl", "Calculated number of boxes \\n (comes from the aggregation of totals introduced in next forms)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinNoBoxesC->setWhatsThis(QApplication::translate("CatchInputCtrl", "Calculated number of boxes \n"
" (comes from the aggregation of totals introduced in next forms)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        doubleSpinWeightBox->setToolTip(QApplication::translate("CatchInputCtrl", "Box weight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        doubleSpinWeightBox->setStatusTip(QApplication::translate("CatchInputCtrl", "Box weight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinWeightBox->setWhatsThis(QApplication::translate("CatchInputCtrl", "Box weight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        cmbBoxUnits->setToolTip(QApplication::translate("CatchInputCtrl", "Box weight units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbBoxUnits->setStatusTip(QApplication::translate("CatchInputCtrl", "Box weight units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cmbBoxUnits->setWhatsThis(QApplication::translate("CatchInputCtrl", "Box weight units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        toolBox->setItemText(toolBox->indexOf(pageBoxes), QApplication::translate("CatchInputCtrl", "by Boxes", 0, QApplication::UnicodeUTF8));
        toolBox->setItemToolTip(toolBox->indexOf(pageBoxes), QApplication::translate("CatchInputCtrl", "Insert weight by boxes (number of boxes x box weight)", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CatchInputCtrl", "Estimated", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CatchInputCtrl", "Calculated", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CatchInputCtrl", "Weight/unit", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CatchInputCtrl", "Units", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinUnitsE->setToolTip(QApplication::translate("CatchInputCtrl", "Estimated units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        spinUnitsE->setStatusTip(QApplication::translate("CatchInputCtrl", "Estimated units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        spinUnitsE->setWhatsThis(QApplication::translate("CatchInputCtrl", "Estimated units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        spinUnitsC->setToolTip(QApplication::translate("CatchInputCtrl", "Calculated units \n"
" (comes from the aggregation of totals introduced in next forms)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        spinUnitsC->setStatusTip(QApplication::translate("CatchInputCtrl", "Calculated units \\n (comes from the aggregation of totals introduced in next forms)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        spinUnitsC->setWhatsThis(QApplication::translate("CatchInputCtrl", "Calculated units \n"
" (comes from the aggregation of totals introduced in next forms)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        doubleSpinWeightUnit->setToolTip(QApplication::translate("CatchInputCtrl", "Unit weight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        doubleSpinWeightUnit->setStatusTip(QApplication::translate("CatchInputCtrl", "Unit weight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinWeightUnit->setWhatsThis(QApplication::translate("CatchInputCtrl", "Unit weight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        cmbUnitUnits->setToolTip(QApplication::translate("CatchInputCtrl", "Unit weight units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbUnitUnits->setStatusTip(QApplication::translate("CatchInputCtrl", "Unit weight units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cmbUnitUnits->setWhatsThis(QApplication::translate("CatchInputCtrl", "Unit weight units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        toolBox->setItemText(toolBox->indexOf(pageUnits), QApplication::translate("CatchInputCtrl", "by Units", 0, QApplication::UnicodeUTF8));
        toolBox->setItemToolTip(toolBox->indexOf(pageUnits), QApplication::translate("CatchInputCtrl", "Insert weight by units (number of units x unit weight)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CatchInputCtrl: public Ui_CatchInputCtrl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATCHINPUTFRM_H
