#include "getcash.h"
#include "ui_getcash.h"
#include "carpediematm.h"
GetCash::GetCash(QWidget *parent, unsigned gc) :
    QDialog(parent),
    ui(new Ui::GetCash),
    getCash(gc),
    m50(0),
    m100(0),
    m200(0),
    m500(0)
{
    ui->setupUi(this);
    getCashWork(gc);

}

void GetCash::getCashWork(unsigned cs)
{
    if(CarpeDiemATM::currentATM.amount().m500()>0 && cs>500){
        ++m500;
        getCashWork(cs-500);
        --CarpeDiemATM::currentATM.amount().m500();
    }else if(CarpeDiemATM::currentATM.amount().m200()>0 && cs>200){
        ++m200;
        getCashWork(cs-200);
        --CarpeDiemATM::currentATM.amount().m200();

    }else if(CarpeDiemATM::currentATM.amount().m100()>0 && cs>100){
        ++m100;
        getCashWork(cs-100);
        --CarpeDiemATM::currentATM.amount().m100();

    }else if(CarpeDiemATM::currentATM.amount().m50()>0 && cs>50){
        ++m50;
        getCashWork(cs-50);
        --CarpeDiemATM::currentATM.amount().m50();

    }


}

GetCash::~GetCash()
{
    delete ui;
}
