#ifndef MODELINTERFACE_H
#define MODELINTERFACE_H

#include <QVector>
#include <QSqlRelationalTableModel>
#include "treeitem.h"
#include "treemodel.h"
#include "frmframedetails.h"

#if defined(WIN32) && defined(_DEBUG)
 #define DEBUG_NEW new( _NORMAL_BLOCK, __FILE__, __LINE__ )
 #define new DEBUG_NEW
#endif

struct Sample;

//! Model Interface Class
/*!
This class provides an interface between the set of tables that compose the frame
and the tree-based model underneath the UI; the tables with a Ref Prefix refer
to reference tables and the tables with a Link Prefix refer to connection tables,
that link two reference tables, trough their indexes;
*/

class ModelInterface : public QObject
{
    Q_OBJECT

public:
    ModelInterface(TreeModel* aTreeModel, QObject *parent=0);
    ModelInterface(QObject *parent=0);

    ~ModelInterface();

    void                                   setTree(TreeModel* aTreeModel){treeModel=aTreeModel;}
    bool                                   createModel();
    bool                                   readModel(const Sample* sample,const FrmFrameDetails::Options options);
    QSqlRelationalTableModel*              tRefFrame;
    QSqlTableModel*                        tSubFrame;
    QSqlTableModel*                        tRefGLS;
    QSqlTableModel*                        tRefLS;
    QSqlTableModel*                        tRefVessels;
    QSqlTableModel*                        tLinkFr2GLS;
    QSqlTableModel*                        tLinkGLS2LS;
    QSqlTableModel*                        tLinkLS2Vessels;
    QSqlTableModel*                        tChangesPermVessel;
    QSqlTableModel*                        tChangesTempVessel;
    QSqlTableModel*                        tChangesPermLS;
    QSqlTableModel*                        tChangesPermGLS;
    TreeModel*                             treeModel;

    bool                                   writeModel();
    bool                                   writeTempChanges(Sample* sample, int& ct);
    bool                                   rollback(const bool bSubmitted, const FrmFrameDetails::Persistence persistence);
    bool                                   insertNewRecord(QSqlTableModel* model);
    bool                                   getErrors(QString& strError);

public slots:
    void                                   removeFilters();

private:
    bool                                   mapData(const int inRow, const int outRow, const int cIn, const int cOut, const QModelIndex& parent, QSqlTableModel* tModel, QVariant& result);
    bool                                   createRootElements(QModelIndex& bin, QModelIndex& root);
    bool                                   readOneGLS(const int inRow, const int outRow, const QModelIndex& parent, const bool bBin, QModelIndex& cIndex);
    bool                                   readRefGLS(const QModelIndex& index, const bool bBin=true);
    bool                                   readOneLS(const int inRow, const int outRow, const QModelIndex& parent,const bool bBin, QModelIndex& cIndex);
    bool                                   readRefLS(const QModelIndex& parent, const bool bBin=true);
    bool                                   readOneVS(const int inRow, const int outRow, const bool bBin, const QModelIndex& parent,const QVector<int>& vVesselsBlackList);
    bool                                   readRefVS(const QModelIndex& parent, const QVector<int>& vVesselsBlackList, const bool bBin=true);
    bool                                   readRoot(const int subFrameId, QModelIndex& root, const bool bBin, const QVector<int>& vVesselsBlackList);
    bool                                   readBin(const int subFrameId, QModelIndex& bin, const bool bBin, const QVector<int>& vVesselsBlackList);
    bool                                   readGenericStructure(const int subFrameId, QModelIndex& root, const bool bBin, const QVector<int>& vVesselsBlackList);
    void                                   initModels();
    bool                                   initModel
                                                (QSqlTableModel* model, const QString strTable);
    bool                                   writeTables();

    bool                                   writeManyVessels(TreeItem* item, const int lsId, const int frameId);
    bool                                   writeVessel(TreeItem* item, const int frameId, QVector<int>& vId);
    bool                                   writeManyLS(TreeItem* item, const int glsId, const int frameId);
    bool                                   writeLS(TreeItem* item, const int frameId, QVector<int>& vId);
    bool                                   writeManyGLS(TreeItem* item, const int id);
    bool                                   writeGLS(TreeItem* item, const int id, QVector<int>& vId);
    bool                                   writeBin(TreeItem* item, const int id);
    bool                                   writeFr2GLS(const int FrameId, const QVector<int>& vId);
    bool                                   writeGLS2LS(const int FrameId, const int GLSId, const QVector<int>& vId);
    bool                                   writeLS2Vessel(const int FrameId, const int lsId, const QVector<int>& vId);

    bool                                   getIdofGLS(const TreeItem* item, int& id);
    bool                                   getIdofLS(const TreeItem* item, int& id);
    bool                                   getIdofVessel(const TreeItem* item, int& id);
    bool                                   getIdofReason(const QString strReason, int& id);
    bool                                   getIdofSubFrameType(const QString strType, int& id);
    bool                                   getIdofBin(const QString strTable, int& id);

    bool                                   insertSubFrame(const QString str, const int frameId, int& id);
    bool                                   genericInsertChanges(const TreeItem* item, const int itemId, const int frameId, QSqlTableModel * model);
    bool                                   revertAll();
    bool                                   submitAll();
    bool                                   filterTables();

    bool                                   readTempChangesVessel(const Sample* sample);
    bool                                   search4VesselParent(const int vesselId, const int from, const int to);
    bool                                   search4Vessel(TreeItem* item,const int vesselId, const int to);
    bool                                   moveVessel(const int to, TreeItem* item);
    bool                                   writeTempChangesVessel(TreeItem* vs, Sample* sample);
    bool                                   findOrigin(TreeItem* vs, int& lsId);
    bool                                   getOutsideALS(int& id);
    bool                                   getVesselsBlackList(const Sample* sample, QVector<int>& vVesselsBlackList);

    bool                                   buildSourceFilter(QString& strFilter);
    bool                                   getNonAbstractProperties(Sample* sample, int& id_source, int& id_cell, int &id_minor_strata);

    QVector<QSqlTableModel*>               vTables;

};
#endif //MODELINTERFACE_H