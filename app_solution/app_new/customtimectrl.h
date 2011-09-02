#ifndef CUSTOMTIMECTRL_H
#define CUSTOMTIMECTRL_H

#include <QtDesigner/QDesignerExportWidget>
#include <QtGui>
#include "ui_datetime.h"

//!  Custom Time Control class. 
/*!
  This class decouples the DateTime Data Type in two separate widgets, for date and time;
  It also has some description properties to tells us if it is an automatic DateTime widget
  and if the time is UTC;
*/

class QDESIGNER_WIDGET_EXPORT CustomTimeCtrl : public QWidget, public Ui::DateTime
{
    Q_OBJECT

public:
    CustomTimeCtrl(QWidget *parent = 0);
    ~CustomTimeCtrl();

    Q_PROPERTY(QDateTime dateTime READ dateTime WRITE setDateTime NOTIFY dateTimeChanged USER true)


    void setDateTime(const QDateTime &datetime);
    QDateTime dateTime();

    void                setModelRow(const int row){m_row=row;}

    void                setIsDateTime(const bool bDate, const bool bTime, const bool bCheck);

    void                setIsUTC(const bool bUTC)
                            {m_bUTC=bUTC;}

    void                setIsAuto(const bool bAuto)
                            {m_bAuto=bAuto; emit isAuto(m_bAuto);}

    bool                getIsAuto()const {return m_bAuto;}
    bool                getIsUTC()const {return m_bUTC;}

    void                getIsDateTime (bool &bDate, bool &bTime) const
                            {bDate=m_bDate; bTime=m_bTime;}

    QCheckBox*          checkBox(){return checkTime;}
    int                 modelRow() const {return m_row;}

public slots:
    void                adjustDateTime(QModelIndex index, QVariant var);

signals:
    void                isAuto(bool bAuto);
    void                isDateTime(bool bDateTime, int row);

protected:
    void                showEvent ( QShowEvent * event );

private slots:
    void                setHasTime(bool bTime);

private:
    void                setFormatInfo();
    void                showHasDateTime();

    bool                m_bCheck;
    bool                m_bDate;
    bool                m_bTime;
    bool                m_bUTC;
    bool                m_bAuto;
    int                 m_row;
};

#endif // CUSTOMTIMECTRL_H
