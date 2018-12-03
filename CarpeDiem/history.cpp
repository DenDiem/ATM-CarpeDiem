#include "history.h"
#include "ui_history.h"
#include <Qtsql>
#include "operationwindow.h"
History::History(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::History),
    _op(0)
{
    ui->setupUi(this);
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery msql;
    msql.exec("SELECT * FROM journalatm WHERE  userID = '"+QString::number(UserATM::currentUser.userID())+"'");

    modal->setQuery(msql);
    ui->tableHistory->setColumnWidth(2,500);
    ui->tableHistory->setModel(modal);

}


History::~History()
{
    delete ui;
    delete _op;
}

void History::on_pushButton_27_clicked()
{
    hide();
    _op = new OperationWindow(this,UserATM::currentUser);
    _op->show();
}
