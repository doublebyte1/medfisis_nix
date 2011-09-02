#include <QTest>
#include "globaldefs.h"
#include "frmframedetails.h"
#include "modelinterface.h"
#include "generictab.h"

FrmFrameDetails::FrmFrameDetails(QWidget *parent, Qt::WFlags flags):
QWidget(parent, flags){

    qRegisterMetaType<FrmFrameDetails::Mode>("Mode");
    qRegisterMetaType<FrmFrameDetails::Persistence>("Persistence");

    m_sample=0;
    m_submitted=false;
    m_verified=false;
    model=0;
    treeView=0;
    modelInterface=0;
    mapper=0;
    groupBox=0;
    nullDellegate=0;
    //pFrmLegend=0;

    setupUi(this);

    initTree();
    pFrmLegend=new FrmLegend();
}

FrmFrameDetails::~FrmFrameDetails()
{
    emit hideFrameDetails(true);

    if (treeView!=0) delete treeView;
    if (model!=0) delete model;
    if (modelInterface!=0) delete modelInterface;
    if (mapper!=0) delete mapper;
    if (nullDellegate!=0) delete nullDellegate;
    if (pFrmLegend!=0) delete pFrmLegend;
}

void FrmFrameDetails::showLegend()
{
    if (!pFrmLegend->isVisible())
        pFrmLegend->show();
}

void FrmFrameDetails::cancel()
{
    emit hideFrameDetails(true);
    emit showStatus(tr("Cancelled frame creation!"));
}

void FrmFrameDetails::enableVerify()
{
    m_verified=false;
    pushVerify->setEnabled(!m_verified);
    pushApply->setEnabled(m_verified);
}

void FrmFrameDetails::verify()
{
    treeView->verifyChanges();

    QMessageBox::warning(this, tr("MedFisis"),
                                tr("Please verify reasons!"),
                                QMessageBox::Ok);

    //3- perhaps illuminating reasons and then validate

    //For now: no validation!!!
    m_verified=true;
    pushVerify->setEnabled(!m_verified);
    pushApply->setEnabled(m_verified);

    //TODO: changes on the tree (other than editing), reset the verify state again
}

void FrmFrameDetails::apply()
{
    if (!m_verified) return;

    bool bError=false;

    if (m_persistence==FrmFrameDetails::PERMANENT)
    {

       if (!mapper->submit()){
            QString strErrors;
            if (modelInterface->getErrors(strErrors))
                emit showError(strErrors);
            else
                emit showError(tr("Could not submit mapper!"));

            bError=true;
        }else{
            if (!modelInterface->writeModel()){
                QString strErrors;
                if (modelInterface->getErrors(strErrors))
                    emit showError(strErrors);
                else
                    emit showError(tr("Could not write frame in the database!"));

                bError=true;
            }
        }
        mapper->toLast();

    }else{
            int ct;
            if (!modelInterface->writeTempChanges(m_sample,ct)){
                QString strErrors;
                if (modelInterface->getErrors(strErrors))
                    emit showError(strErrors);
                else
                    emit showError(tr("Could not write frame in the database!"));

                bError=true;
            }

            if (ct<1){
                pushVerify->setEnabled(true);
                pushApply->setEnabled(false);
                pushUndo->setEnabled(false);
                m_submitted=false;

                QMessageBox msgBox;
                msgBox.setIcon(QMessageBox::Information);
                msgBox.setText(tr("The frame has not been modified."));
                msgBox.exec();
                return;
            }

    }

    pushApply->setEnabled(bError);
    pushUndo->setEnabled(!bError);
    m_submitted=!bError;
}

void FrmFrameDetails::undo()
{
    bool bError=false;

    if (!modelInterface->rollback(m_submitted,m_persistence)){
        QString strErrors;
        if (modelInterface->getErrors(strErrors))
            emit showError(strErrors);
        else
            emit showError(tr("Could not rollback!"));
        bError=true;
    }else{
        emit showStatus(tr("Successfully rollback!"));
        bError=true;
        emit hideFrameDetails(bError);
    }

    pushApply->setEnabled(bError);
    pushUndo->setEnabled(!bError);
    m_submitted=!bError;
}

void FrmFrameDetails::back()
{
    emit hideFrameDetails(!m_submitted);
}

bool FrmFrameDetails::setTreeReadOnly(const bool bRO)
{
    treeView->setDragEnabled(!bRO);

    if (bRO){
        frame->setToolTip(tr(""));
        treeView->setSelectionMode(
            QAbstractItemView::NoSelection);
        //treeView->setContextMenuPolicy(Qt::NoContextMenu);

    }else{
        frame->setToolTip(tr("Press edit key F2 to edit items"));
        treeView->setSelectionMode(
        QAbstractItemView::ExtendedSelection);
        //treeView->setContextMenuPolicy(Qt::DefaultContextMenu);
    }

    return true;
}

void FrmFrameDetails::setFrameDetails(const Mode mode, const Persistence persistence, Sample* sample, 
                                      QList<int>& blackList, const Options options)
{
    qApp->setOverrideCursor( QCursor(Qt::BusyCursor ) );

    if (treeView==0) return;

    if (blackList.size()>0)
        treeView->setBlackList(blackList);

    treeView->setSupportNewItems(options & FrmFrameDetails::ALLOW_NEW);

    m_sample=sample;
    m_mode=mode;
    m_persistence=persistence;
    m_verified=false;
    m_submitted=false;

    //Now fix the UI
    lbPersistence->setText
        (persistence==FrmFrameDetails::PERMANENT?tr("Permanent"):tr("Temporary"));

    pushVerify->setEnabled(true);
    pushApply->setEnabled(!pushVerify->isEnabled());
    pushUndo->setEnabled(!pushVerify->isEnabled());

    pushVerify->setVisible(mode!=FrmFrameDetails::VIEW || persistence==FrmFrameDetails::TEMPORARY);
    pushApply->setVisible(mode!=FrmFrameDetails::VIEW || persistence==FrmFrameDetails::TEMPORARY);
    pushUndo->setVisible(mode!=FrmFrameDetails::VIEW || persistence==FrmFrameDetails::TEMPORARY);
    pushBack->setVisible(true);

    lineName->clear();
    textComments->clear();
    textDesc->clear();

    if (!initModel(mode,sample,options)){
        qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
        emit showError(tr("Could not create frame view!"));
        return;
    }

    if (mode==FrmFrameDetails::VIEW){// read-only on Permanent mode
        groupBox->setEnabled(false);
        setTreeReadOnly(true);
        horizontalLayout->addWidget(pushBack);
        persistence==FrmFrameDetails::PERMANENT? horizontalLayout->removeWidget(pushVerify):horizontalLayout->addWidget(pushVerify);
        persistence==FrmFrameDetails::PERMANENT? horizontalLayout->removeWidget(pushApply): horizontalLayout->addWidget(pushApply);
        persistence==FrmFrameDetails::PERMANENT? horizontalLayout->removeWidget(pushUndo): horizontalLayout->addWidget(pushUndo);

        persistence==FrmFrameDetails::PERMANENT?setTreeReadOnly(true):setTreeReadOnly(false);

        initMapper();//TODO: maybe throw an error here later?
        modelInterface->tRefFrame->setFilter(tr("Fr_Frame.ID=") + QVariant(sample->frameId).toString());
        mapper->toLast();

    }else{
        if (!modelInterface->insertNewRecord(modelInterface->tRefFrame)){
            qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
            QString strErrors;
            if (modelInterface->getErrors(strErrors))
                emit showError(strErrors);
            else
                emit showError(tr("Could not insert new record!"));
        }else{
            initMapper();//TODO: maybe throw an error here later?
            mapper->toLast();

            if (mode==FrmFrameDetails::EDIT){
                //set Frame Name
                QSqlQuery query;
                query.prepare(tr("SELECT dbo.FR_Frame.Name FROM dbo.FR_Frame ") + 
                              tr("WHERE     (dbo.FR_Frame.ID = ?)"));
                query.addBindValue(sample->frameId);
                if (!query.exec() || query.numRowsAffected()<1){
                    qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
                    if (query.lastError().type()!=QSqlError::NoError)
                        emit showError(query.lastError().text());
                    else
                        emit showError(tr("Could not retrieve the type of the cloned frame!"));
                    return;
                }
                query.first();
                this->cmbCloned->setCurrentIndex(this->cmbCloned->findText(
                    query.value(0).toString()));

                //Set src ID
                query.prepare(tr("SELECT dbo.Ref_Source.Name FROM dbo.FR_Frame INNER JOIN ") + 
                              tr("dbo.Ref_Source ON dbo.FR_Frame.id_source = dbo.Ref_Source.ID ") +
                              tr("WHERE     (dbo.FR_Frame.ID = ?)"));
                query.addBindValue(sample->frameId);
                if (!query.exec() || query.numRowsAffected()<1){
                    qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
                    if (query.lastError().type()!=QSqlError::NoError)
                        emit showError(query.lastError().text());
                    else
                        emit showError(tr("Could not retrieve the type of the cloned frame!"));
                    return;
                }
                query.first();

                this->cmbType->setCurrentIndex(this->cmbType->findText(query.value(0).toString()));

            }else if (mode==FrmFrameDetails::CREATE)

                this->cmbCloned->setCurrentIndex(this->cmbCloned->findText(
                    qApp->translate("null_replacements", strNa)));

            emit showStatus(tr("Record successfully initialized!"));
        }

        groupBox->setEnabled(true);
        setTreeReadOnly(false);

        horizontalLayout->addWidget(pushVerify);
        horizontalLayout->addWidget(pushApply);
        horizontalLayout->addWidget(pushUndo);
        horizontalLayout->addWidget(pushBack);

    }

    qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
}

void FrmFrameDetails::initTree()
{
    //if (treeView!=0) delete treeView;

    treeView = new FrameView(frame);
    gridLayout_2->addWidget(treeView, 0, 0, 1, 1);

    QObject::connect(treeView, SIGNAL(DragStarted()),
                     this, SLOT(enableVerify()));

    QObject::connect(pushExpand, SIGNAL(clicked()),
                     treeView, SLOT(expandAll ()));

    QObject::connect(pushCollapse, SIGNAL(clicked()),
                     treeView, SLOT(collapseAll ()));

    treeView->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    treeView->setAnimated(true);
    treeView->setAcceptDrops(true);
    treeView->setDropIndicatorShown(true);
    treeView->setAlternatingRowColors(true);
    treeView->setRootIsDecorated(true);
    treeView->setDropIndicatorShown(true);
    treeView->setSortingEnabled(true);
}

bool FrmFrameDetails::initModel(const Mode mode, /*const int frameId*/const Sample* sample, const Options options)
{
    if (model!=0) delete model;
    model = new DragDropModel(this);

    QObject::connect(model, SIGNAL(ExpandThis(const QModelIndex &)),
                     treeView, SLOT(expand(const QModelIndex &)));

    //new interface
    if (modelInterface!=0) delete modelInterface;
    modelInterface=new ModelInterface(model);

    QObject::connect(this, SIGNAL(hideFrameDetails(bool)),
                     modelInterface, SLOT(removeFilters()));

    //fills the actual model
    if (!setupItems(mode,sample,/*frameId,*/options)) return false;

    //Using a proxy model for filtering purposes!
    QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(model);

    treeView->setModel(proxyModel);
    treeView->setItemDelegate(new QSqlRelationalDelegate(treeView));

    for (int col=0; col < treeView->model()->columnCount(); ++col) {
        if (col!=3)
            treeView->header()->setResizeMode(col,QHeaderView::ResizeToContents);
    }

    treeView->setExpandsOnDoubleClick(true);
    treeView->expandAll();

//TODO: hide columns: problem - selected indexes in drag and drop
    //treeView->hideColumn(2);
    //treeView->hideColumn(4);
    //treeView->hideColumn(6);
    //treeView->hideColumn(7);

    return true;
}

bool FrmFrameDetails::setupItems(const Mode mode, /*const int frameId*/const Sample* sample, const Options options)
{
    switch (mode) {
    case FrmFrameDetails::VIEW:
        return modelInterface->readModel(/*frameId,*/sample,options);
    case FrmFrameDetails::EDIT:
        return modelInterface->readModel(/*frameId,*/sample,options);
    case FrmFrameDetails::CREATE:
        return modelInterface->createModel();
    default:
        return false;
    }

}

bool FrmFrameDetails::readModel()
{
    //TODO: read model from db
    setupModel();
    return true;
}

void FrmFrameDetails::setupModel()
{
    int vId=40;
    int lsId=25;
    int glsId=56;
    int n=3;
    int c=0;

    QModelIndex _root = model->index(0, 0, QModelIndex());

    model->insertRows(0,2,_root);
    QModelIndex root = model->index(0, 0, _root);
    model->setData(root, QVariant(tr("Root")).toString());
    QModelIndex tId = model->index(0, 1, _root);
    model->setData(tId, QVariant(tr("Frame Root")));
    tId = model->index(0, 2, _root);
    model->setData(tId, QVariant(TreeModel::ROOT));
    tId = model->index(0, 7, _root);
    model->setData(tId, tr(":/app_new/exec.png"));

    QModelIndex bin = model->index(1, 0, _root);
    model->setData(bin, QVariant(tr("Bin")).toString());
    tId = model->index(1, 1, _root);
    model->setData(tId, QVariant(tr("Root Recycle Bin")));
    tId = model->index(1, 2, _root);
    model->setData(tId, QVariant(TreeModel::ROOT));
    tId = model->index(1, 7, _root);
    model->setData(tId, tr(":/app_new/trashcan.png"));

    for (int i=0; i < n; ++i){
        model->insertRow(i,root);
        QModelIndex gls = model->index(i, 0, root);
        model->setData(gls, QVariant(tr("GLS")+QVariant(i).toString()));
        gls = model->index(i, 1, root);
        model->setData(gls, QVariant(tr("Group of Landing Sites")));
        gls = model->index(i, 2, root);
        model->setData(gls, QVariant(TreeModel::GLS));
        gls = model->index(i, 3, root);
        model->setData(gls, QVariant("This is a very very very very very very very very long description"));

        //int randNumber = rand() / static_cast<double>( RAND_MAX )*1000;
        gls = model->index(i, 4, root);
        model->setData(gls, glsId);
        glsId++;

        gls = model->index(i, 6, root);
        model->setData(gls, -1);

        gls = model->index(i, 7, root);
        model->setData(gls, tr(":/app_new/gls.png"));//symb

        for (int j=0; j < n; ++j){
            model->insertRow(j,gls);
            QModelIndex ls = model->index(j, 0, gls);
            model->setData(ls, QVariant(tr("LS")+QVariant((i*n)+j).toString()));
            ls = model->index(j, 1, gls);
            model->setData(ls, QVariant(tr("Abstract Landing Site")));
            ls = model->index(j, 2, gls);
            model->setData(ls, QVariant(TreeModel::LS));
            ls = model->index(j, 3, gls);
            model->setData(ls, QVariant("This is a very very very very very very very very long description"));

            ls = model->index(j, 6, gls);
            model->setData(ls, -1);

            ls = model->index(j, 7, gls);//symb
            model->setData(ls, tr(":/app_new/ls.png"));

            //int randNumber = rand() / static_cast<double>( RAND_MAX )*1000;
            ls = model->index(j, 4, gls);
            model->setData(ls, lsId);
            lsId++;
            for (int k=0; k < n; ++k){
                c++;
                model->insertRow(k,ls);
                QModelIndex vs = model->index(k, 0, ls);

                model->setData(vs, QVariant(tr("Vessel")+QVariant(c).toString()));
                vs = model->index(k, 1, ls);
                model->setData(vs, QVariant(tr("Vessel")));
                vs = model->index(k, 2, ls);
                model->setData(vs, QVariant(TreeModel::VS));
                vs = model->index(k, 3, ls);
                model->setData(vs, QVariant("This is a very very very very very very very very long description"));

                vs = model->index(k, 4, ls);
                model->setData(vs, vId);
                vId++;

                vs = model->index(k, 6, ls);
                model->setData(vs, -1);

                vs = model->index(k, 7, ls);
                model->setData(vs, tr(":/app_new/vessel.png"));//symb
            }

        }
    }
}

void FrmFrameDetails::initMapper()
{
    if (mapper!=0) delete mapper;
    if (!modelInterface) return;
    mapper= new QDataWidgetMapper(this);
    mapper->setModel(modelInterface->tRefFrame);
    mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

    if (nullDellegate!=0) delete nullDellegate;
    QList<int> lCmb;
    lCmb << 5 << 4;
    QList<int> lText;
    lText << 3 << 6;

    nullDellegate=new NullRelationalDelegate(lCmb,lText,this);
    mapper->setItemDelegate(nullDellegate);

    mapper->addMapping(lineName, 1);
    mapper->addMapping(textDesc, 3);
    mapper->addMapping(textComments, 6);

    cmbType->setModel(modelInterface->tRefFrame->relationModel(5));
    cmbType->setModelColumn(
        modelInterface->tRefFrame->relationModel(5)->fieldIndex(tr("Name")));

    mapper->addMapping(cmbType, 5);

    cmbCloned->setModel(modelInterface->tRefFrame->relationModel(4));
    cmbCloned->setModelColumn(
        modelInterface->tRefFrame->relationModel(4)->fieldIndex(tr("Name")));

    mapper->addMapping(cmbCloned, 4);
}

void FrmFrameDetails::isClonedFromPreviousFrame(QString str)
{
        checkClone->setChecked(str.compare(
            qApp->translate("null_replacements", strNa)
            , Qt::CaseInsensitive)!=0);
}
