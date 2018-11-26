#include "carpediematm.h"
#include "amount.h"
#include <QtSql>
CarpeDiemATM CarpeDiemATM::currentATM = CarpeDiemATM("1");
CarpeDiemATM::CarpeDiemATM(const QString& atmID)
{

    QSqlQuery msql;
    msql.exec("SELECT * FROM useratm WHERE  cardNum = '"+cardnum+"'");
    msql.first();
    if(msql.size()==0)
    {
        address() = "error";
        atmID() = 0;
        amount() = Amount();

        qDebug("eror");

    }else
    {

        address() =  msql.value("address").toBool();
        atmID() = msql.value("atmID").toInt();
        amount() = Amount(msql.value("m50").toInt(),msql.value("m100").toInt(),msql.value("m200").toInt(),msql.value("m500").toInt());





    }
}

const CarpeDiemATM &CarpeDiemATM::operator=(const CarpeDiemATM & cd)
{
    atmID() = (cd.atmID());
    address()=cd.address();
    amount()=cd.amount();
    return *this;

}

CarpeDiemATM::CarpeDiemATM(const CarpeDiemATM & cd):
    _atmID(cd.atmID()),
    _address(cd.address()),
    _amount(cd.amount())
{

}


CarpeDiemATM::~CarpeDiemATM()
{

}

Amount& CarpeDiemATM::amount()
{
    return _amount;
}

QString& CarpeDiemATM::address()
{
    return _address;
}

const Amount& CarpeDiemATM::amount() const
{
    return _amount;
}

const QString& CarpeDiemATM::address() const
{
    return _address;
}

void CarpeDiemATM::updateATM()
{
    QSqlQuery query;
        query.exec("UPDATE carpediematm SET m50 = "+QString::number(amount().m50())+", m100 = "+QString::number(amount().m100())+", m200 = "+QString::number(amount().())+", m500 = "+QString::number(amount().m500())+" WHERE userID = "+QString::number(userID())+"");



}

void CarpeDiemATM::deleteATM()
{

}
