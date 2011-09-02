#include "customtimectrl.h"

CustomTimeCtrl::CustomTimeCtrl(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);
    //Defaults
    m_row=-1;
    m_bDate=true;
    m_bTime=true;
    m_bCheck=true;
    checkTime->setChecked(true);
    setFormatInfo();
}

CustomTimeCtrl::~CustomTimeCtrl()
{
}

void CustomTimeCtrl::setFormatInfo()
{
    this->lbDateFormat->setText(tr("Format: ")+ this->dateEdit->displayFormat());
    this->lbTimeFormat->setText(tr("Format: ")+ this->timeEdit->displayFormat());
}

void CustomTimeCtrl::showEvent ( QShowEvent * event ){
    //Showing the form with no time option!
    showHasDateTime();
}

void CustomTimeCtrl::setHasTime ( bool bTime ){

    m_bTime=bTime;
    emit isDateTime(bTime, m_row);
    showHasDateTime();
}

void CustomTimeCtrl::showHasDateTime(){

    this->groupDate->setVisible(m_bDate);
    this->groupTime->setVisible(m_bTime);
    this->groupHasTime->setVisible(m_bCheck);
}

void CustomTimeCtrl::adjustDateTime(QModelIndex index, QVariant var)
{
    int dateType=var.toInt();

    switch (dateType) {
    case 1:
        setIsDateTime(true,true,true);
        break;
    case 2:
        setIsDateTime(true,false,false);
        break;
    case 3:
        setIsDateTime(false,true,false);
        break;
    default:
        return;
        break;
    }

}

QDateTime CustomTimeCtrl::dateTime()
{
    return QDateTime(dateEdit->date(),timeEdit->time(),m_bUTC? Qt::UTC: Qt::LocalTime);//TODO: read timespec from variable
}
 
void CustomTimeCtrl::setDateTime(const QDateTime& datetime)
{
    this->dateEdit->setDate(datetime.date());
    this->timeEdit->setTime(datetime.time());
}

void CustomTimeCtrl::setIsDateTime(const bool bDate, const bool bTime, const bool bCheck)
{
    m_bDate=bDate;
    m_bTime=bTime;
    m_bCheck=bCheck;

    checkTime->setChecked(m_bDate && m_bTime);
    groupTime->setVisible(checkTime->isChecked());//this is just to make sure the check event was sent
    groupHasTime->setVisible(m_bCheck);
    if (m_bCheck)
        verticalLayout->addWidget(groupHasTime);
    else
        verticalLayout->removeWidget(groupHasTime);

    this->layout()->update();

}