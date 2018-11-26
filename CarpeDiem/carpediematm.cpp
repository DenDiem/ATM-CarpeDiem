#include "carpediematm.h"
#include "amount.h"
CarpeDiemATM::CarpeDiemATM(const QString& atmID)
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

const Amount& CarpeDiemATM::currentCash() const
{
    return _amount;
}

const QString& CarpeDiemATM::address() const
{
    return _address;
}

void CarpeDiemATM::updateATM()
{

}

void CarpeDiemATM::deleteATM()
{

}
