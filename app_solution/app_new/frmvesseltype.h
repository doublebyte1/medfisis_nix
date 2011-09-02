#include <QtGui>
#include <QtSql>
#include "ui_frmvesseltype.h"
#include "previewtab.h"

  #if defined(WIN32) && defined(_DEBUG)
     #define DEBUG_NEW new( _NORMAL_BLOCK, __FILE__, __LINE__ )
     #define new DEBUG_NEW
  #endif

//////////////////////////////////////////////////////////////////////
#ifndef FRMVESSELTYPE_H
#define FRMVESSELTYPE_H

//! Frm Vessel Type
/*!
This class implements the widget that corresponds to the Sampled Vessel Type definition tab; This tab is only
applicable to sampling type frames;
*/

class FrmVesselType : public PreviewTab, public Ui::FrmVesselType
{
    Q_OBJECT

    public:
        FrmVesselType(Sample* inSample, DateModel* inTDateTime, QWidget *parent = 0, Qt::WFlags flags = 0);
        ~FrmVesselType();

    private slots:
        //! Create Record
        /*! Reimplemented from the PreviewTab base class
        */
        void                                   createRecord();
        //! Preview Row
        /*! Reimplemented from the PreviewTab base class
        */
        void                                   previewRow(QModelIndex index);
        //! On Button Click
        /*! Reimplemented from the PreviewTab base class
        */
        bool                                   onButtonClick(QAbstractButton * button);
        void                                   onItemSelection();

    private:
        //! Set Header widget
        /*! Reimplemented from the genericTab base class
        */
        void                                   setHeader(){setLbHead(this->lbHeader);}
        //! Init Models
        /*! Reimplemented from the genericTab base class
        */
        void                                   initModels();
        //! Init Mappers
        /*! Reimplemented from the genericTab base class
        */
        void                                   initMappers();
        //! Init UI
        /*! Reimplemented from the genericTab base class
        */
        void                                   initUI();

        //! Filter combo box
        /*! Reimplemented from the PreviewTab base class
        */
        void                                   filterModel4Combo();
        //! Set main model query
        /*! Reimplemented from the PreviewTab base class
        */
        void                                   setPreviewQuery();
        //! Initialize UI for new record
        /*! Reimplemented from the PreviewTab base class
        */
        void                                   uI4NewRecord();
        //! Initializations before calling the onShow PreviewTab function
        /*! Reimplemented from the PreviewTab base class
        */
        void                                   beforeShow();
        void                                   initMapper1();
        void                                   initVesselTypeModel();

        //! Get the title label of the next form
        /*! Reimplemented from the PreviewTab base class
        */
        bool                                   getNextLabel(QString& strLabel);
        //! Update the sample structure
        /*! Reimplemented from the PreviewTab base class
        */
        bool                                   updateSample();

        QSqlQueryModel*                        viewVesselTypes;
        QSqlRelationalTableModel*              tSVesselTypes;
        NullRelationalDelegate*                nullDellegate;
        QDataWidgetMapper*                     mapper1;
};
#endif //FRMVESSELTYPE_H