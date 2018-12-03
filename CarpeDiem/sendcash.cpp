#include "sendcash.h"
#include "ui_sendcash.h"
#include <QtSql>
#include "carpediematm.h"
#include "resultsend.h"
#include "operationwindow.h"
sendCash::sendCash(QWidget *parent, const UserATM& ua) :
    QDialog(parent),
    ui(new Ui::sendCash),
    _op(0),
    _ua(ua),
    _rs(0)
{
    ui->setupUi(this);
    ui->lError->setText("commission 1 percent");

    ui->lName->setText(ua.clientName()+" "+ua.clientSurName());
}

sendCash::~sendCash()
{
    delete ui;
    delete _op;
    delete _rs;
}


void sendCash::on_pushButton_16_clicked()
{
    unsigned cs = (ui->ePass->text()).toInt();
    if(cs<5){
         ui->lError->setText("Must be >5");

    }else{
    if(UserATM::currentUser.currentCash()>cs){

        UserATM::currentUser.currentCash()-=cs;
        _ua.currentCash()+=cs*0.99;
        QSqlQuery msql;
        QString uID = QString::number(UserATM::currentUser.userID());
        QString aID = QString::number(CarpeDiemATM::currentATM.atmID());
        QString cash = QString::number(cs);
        msql.exec("INSERT INTO `db_a4231e_dendiem`.`journalatm` (`userID`, `atmID`, `jDate`, `change`) VALUES ("+uID+", "+aID+", NOW(), '-"+cash+"')");
        UserATM::currentUser.updateUser();

        QSqlQuery msql2;
        uID = QString::number(_ua.userID());
        cash = QString::number(cs*0.99);
        msql2.exec("INSERT INTO `db_a4231e_dendiem`.`journalatm` (`userID`, `atmID`, `jDate`, `change`) VALUES ("+uID+", "+aID+", NOW(), '+"+cash+"')");
        UserATM::currentUser.updateUser();
        _ua.updateUser();

        hide();
        _rs = new ResultSend(this,cs);
        _rs->show();




    }else{
        ui->lError->setText("not enough money");
    }
    }
}

void sendCash::on_pushButton_28_clicked()
{

    hide();
    _op = new OperationWindow(this,UserATM::currentUser);
    _op->show();
}

void sendCash::on_btn_del_clicked()
{
    QString copy = ui->ePass->text().replace( "-", "" );
    copy.chop(1);
    ui->ePass->setText(copy);

}
void sendCash::on_btn_1_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"1");

}
void sendCash::on_btn_2_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"2");

}
void sendCash::on_btn_3_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"3");

}
void sendCash::on_btn_4_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"4");

}
void sendCash::on_btn_5_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"5");

}
void sendCash::on_btn_6_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"6");

}
void sendCash::on_btn_7_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"7");

}
void sendCash::on_btn_8_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"8");

}
void sendCash::on_btn_9_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"9");

}
void sendCash::on_btn_0_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"0");

}
