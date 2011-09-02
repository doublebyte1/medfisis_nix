#ifndef CATCHINPUTCTRL_H
#define CATCHINPUTCTRL_H
#include "ui_catchinputfrm.h"

#include <QtGui/QWidget>
#include <QtGui/QMessageBox>
#include <QtDesigner/QDesignerExportWidget>


//!  Custom Input Control class. 
/*!
  //This control standardizes the input of catch in a UI composed of column tabs;
  Each tab corresponds to a different method of inputing catch, and totals are updated in the case
  of catch composed by a binomio (for instance unit and weight); In this way, we hope to achieve
  a user friendly UI that allow us to collect as much information as possible and at the same time
  provide some kind of validation for the user;
  n.b.: at this moment, unit conversions are not supported and therefore the units of the total and
  of the other pages have to match, in order to benefit from the calculations!
*/

class QDESIGNER_WIDGET_EXPORT CatchInputCtrl : public QWidget, public Ui::CatchInputCtrl
{
    Q_OBJECT

    public:
        CatchInputCtrl(QWidget *parent = 0);
        ~CatchInputCtrl();

        //here we expose the controls, so that we can use them in a QDataWidgetMapper
        QDoubleSpinBox      *pDoubleSpinTotalE(){return doubleSpinTotalE;}
        QDoubleSpinBox      *pDoubleSpinTotalC(){return doubleSpinTotalC;}
        QComboBox           *pCmbWeightUnits(){return cmbWeightUnits;}
        QDoubleSpinBox      *pDoubleSpinNoBoxesE(){return doubleSpinNoBoxesE;}
        QDoubleSpinBox      *pDoubleSpinNoBoxesC(){return doubleSpinNoBoxesC;};
        QDoubleSpinBox      *pDoubleSpinWeightBox(){return doubleSpinWeightBox;}
        QComboBox           *pCmbBoxUnits(){return cmbBoxUnits;}
        QSpinBox            *pSpinUnitsE(){return spinUnitsE;}
        QSpinBox            *pSpinUnitsC(){return spinUnitsC;}
        QDoubleSpinBox      *pDoubleSpinWeightUnit(){return doubleSpinWeightUnit;}
        QComboBox           *pCmbUnitUnits(){return cmbUnitUnits;}

    signals:
        void                 blockWidgetsSignals(const bool bBlock);

    private slots:
        //! Adjust total weight from Units
        /*! Slot triggered by a unit change, that performs the total weight calculation
         \param val number of units
          \sa adjustTotalWeightFromUnits(double val), adjustTotalWeightFromUnits(double val), adjustTotalWeightFromNoBoxes(double val),adjustTotalWeightFromBoxWeight(double val)
        */
        void            adjustTotalWeightFromUnits(int val);
        //! Adjust total weight from Unit Weight
        /*! Slot triggered by a unit weight change, that performs the total weight calculation
         \param val weight per unit
          \sa adjustTotalWeightFromUnits(int val), adjustTotalWeightFromUnits(double val), adjustTotalWeightFromNoBoxes(double val),adjustTotalWeightFromBoxWeight(double val)
        */
        void            adjustTotalWeightFromUnits(double val);
        //! Adjust total weight from number of boxes
        /*! Slot triggered by a number of boxes change, that performs the total weight calculation
         \param val number of boxes (as a double, so we can consider for instance half box)
          \sa adjustTotalWeightFromUnits(int val), adjustTotalWeightFromUnits(double val), adjustTotalWeightFromUnits(double val),adjustTotalWeightFromBoxWeight(double val)
        */
        void            adjustTotalWeightFromNoBoxes(double val);
        //! Adjust total weight from box weight
        /*! Slot triggered by a box weight change, that performs the total weight calculation
         \param val box weight
          \sa adjustTotalWeightFromUnits(int val), adjustTotalWeightFromUnits(double val), adjustTotalWeightFromUnits(double val),adjustTotalWeightFromNoBoxes(double val)
        */
        void            adjustTotalWeightFromBoxWeight(double val);

        void            onWeightUnitChange(QString strUnits);
        void            onUnitsUnitChange(QString strUnits);
        void            onBoxUnitChange(QString strUnits);
        //! Update weight tab title
        /*! This function generates dynamically a tab title, with a total
        */
        void            updateWeightLabel(QString strNew);
        void            onBlockWidgetsSignals(const bool bBlock);

    private:
        //! Check Units
        /*! Check point to ensure that the units of the current page, and the units of the total weight page match!
        (otherwise we cannot perform the calculation)
        \param cmb weight combobox, so that we can retrieve the current text
        */
        bool            checkUnits(QComboBox* cmb);
};

#endif // CATCHINPUTCTRL_H
