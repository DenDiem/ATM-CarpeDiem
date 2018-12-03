#include "getresult.h"
#include "ui_getresult.h"
#include "carpediematm.h"
#include "useratm.h"
#include <QtSql>
#include "operationwindow.h"
GetResult::GetResult(QWidget *parent,unsigned cs) :
    QDialog(parent),
    ui(new Ui::GetResult),
    _nm(0),
    _cash(cs),
    _am(Amount()),
    _op(0)

{
    ui->setupUi(this);

    getCashWork(cs);

    ui->lCash->setText(QString::number(_am.allMoney()));
    ui->lM50->setText(QString::number(_am.m50()));
    ui->lM100->setText(QString::number(_am.m100()));
    ui->lM200->setText(QString::number(_am.m200()));
    ui->lM500->setText(QString::number(_am.m500()));


    QSqlQuery msql;
    QString uID = QString::number(UserATM::currentUser.userID());
    QString aID = QString::number(CarpeDiemATM::currentATM.atmID());
    QString cash = QString::number(cs);
    msql.exec("INSERT INTO `db_a4231e_dendiem`.`journalatm` (`userID`, `atmID`, `jDate`, `change`) VALUES ("+uID+", "+aID+", NOW(), '-"+cash+"')");
    UserATM::currentUser.currentCash() -= cs;
    UserATM::currentUser.updateUser();
    CarpeDiemATM::currentATM.updateATM();

}

GetResult::~GetResult()
{
    delete ui;
    delete _op;
    delete _nm;
}
void GetResult::getCashWork(unsigned cs)
{




        while(cs!=0){
            if(CarpeDiemATM::currentATM.amount().m500()>0 && cs>=500){
                ++_am.m500();
                cs-=500;
                --CarpeDiemATM::currentATM.amount().m500();
            }else if(CarpeDiemATM::currentATM.amount().m200()>0 && cs>=200){
                ++_am.m200();
                --CarpeDiemATM::currentATM.amount().m200();
                cs-=200;
            }else if(CarpeDiemATM::currentATM.amount().m100()>0 && cs>=100){
                ++_am.m100();
                --CarpeDiemATM::currentATM.amount().m100();
                cs-=100;

            }else if(CarpeDiemATM::currentATM.amount().m50()>0 && cs>=50){
                ++_am.m50();
                --CarpeDiemATM::currentATM.amount().m50();
                cs-=50;

            }
        }

}

void GetResult::on_pushButton_2_clicked()
{
    hide();
    _op = new OperationWindow(this,UserATM::currentUser);
    _op->show();

}
