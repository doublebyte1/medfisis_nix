#include <QtGui>
#include <QtSql>
 #include <QXmlDefaultHandler>
#include "ui_mainfrm.h"
#include "custommsgbox.h"
#include "frmframedetails.h"
#include "frmframe.h"
#include "frmminorstrata.h"
#include "frmcell.h"
#include "frmvesseltype.h"
#include "frmvessel.h"
#include "frmtrip.h"
#include "frmoperation.h"
#include "frmcatch.h"
#include "frmprjpage.h"

  #if defined(WIN32) && defined(_DEBUG)
     #define DEBUG_NEW new( _NORMAL_BLOCK, __FILE__, __LINE__ )
     #define new DEBUG_NEW
  #endif

using namespace boost;

//////////////////////////////////////////////////////////////////////
#ifndef SESSIONFILEPARSER_H
#define SESSIONFILEPARSER_H

//! Session File Handler
/*!
//This is an XML handler, to use with the SAX Qt classes;
In this handler we parse the elements frame id and frametime id from an XML configuration file,
and put them inside a sample structure, ready to be integrated into the app.
This class is very simple and we only provide implementation for a few virtual functions;
Usage: just give a sample and parse: have fun!":-);
*/

class SessionFileParser : public QXmlDefaultHandler
{
    public:
        /*! A constructor
          \sa ~SessionFileParser()
        */
        SessionFileParser(Sample* sample);
        /*! A destructor
          \sa SessionFileParser()
        */
        ~SessionFileParser();

        /*! StartElement
          \\Reimplementation of the virtual function on the base class
          \sa characters ( const QString & ch );
        */
        bool              startElement( const QString&, const QString&, const QString &name, const QXmlAttributes &);
        /*! Characters
          \\Reimplementation of the virtual function on the base class
          \sa startElement( const QString& ns, const QString& localName, const QString &name, const QXmlAttributes &attrs );
        */
        bool              characters ( const QString & ch );
        bool              fatalError (const QXmlParseException & exception);
        bool              endDocument();

        /*! sample()
          \\returns an initialized sample structure, with frameID and frameTimeId (parsed from the XML configuration file)
        */
        //Sample*           sample(){return m_sample;}

    private:
        Sample*           m_sample;
        bool              m_bReadingFrameTimeId;
        bool              m_bReadingFrameId;
        int               m_ct;
};

#endif //SESSIONFILEPARSER_H

//////////////////////////////////////////////////////////////////////
#ifndef MAINFRM_H
#define MAINFRM_H

typedef shared_ptr<CustomMsgBox>                    MsgBoxPtr;

//! Main Frm Class
/*!
This class contains an instantiation of the UI mainFrm class.
It stores pointers for the other UI classes, such as Logbook and for a RuleChecker;
N.b.: all the UI classes instantiated here, should ihnerit ReportWidget, if we want to make use of the print/export functionality!
*/

class MainFrm : public QMainWindow, public Ui::MainWindow
{
    Q_OBJECT

    public:
        MainFrm(QWidget *parent = 0, Qt::WFlags flags = 0);
        ~MainFrm();

    private:
        void                    resetTabs();
        void                    initPreviewTab(PreviewTab* tab);
        void                    initUi();
        void                    updateIndexes(const int from);

        bool                    CreateXMLFile(const QString strFileName);
        bool                    readXMLFile(const QString strFileName);

        DateModel               *tDateTime;
        FrmFrame                *pFrmFrame;
        FrmMinorStrata          *pFrmMinorStrata;
        FrmFrameDetails         *pFrmFrameDetails;
        FrmCell                 *pFrmCell;
        FrmVesselType           *pFrmVesselType;
        FrmVessel               *pFrmVessel;
        FrmTrip                 *pFrmTrip;
        FrmOperation            *pFrmOperation;
        FrmCatch                *pFrmCatch;
        FrmPrjPage              *pFrmPrjPage;
        QVector<GenericTab*>    vTabs;
        QList<MsgBoxPtr>        m_listMsgBoxes;//!< container for storing pointers to the messageboxes;
        Sample*                 sSample;
        QToolBar*               toolbar;

    private slots:
        void                    addTab(int idx, bool bOk);
        void                    initTabs();
        void                    navigateThroughTabs(const bool bNext, const int idx);
        void                    showFrameDetails(const FrmFrameDetails::Mode mode, 
                                        const FrmFrameDetails::Persistence persistence,Sample* sample, 
                                        QList<int>& blackList, const FrmFrameDetails::Options options);
        void                    hideFrameDetails();
        void                    statusShow(QString str);
        void                    statusClean(QString str);
        void                    displayError(QString strError, const bool bShowMsgBox);
        void                    cleanupMsgBoxes();
        void                    rearrangeTabs(bool bLogBook);
        void                    aboutThisProject();

        void                    loadFile();
        void                    writeFile();
};
#endif //MAINFRM_H
