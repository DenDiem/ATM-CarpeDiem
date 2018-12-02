#include "history.h"
#include "ui_history.h"
#include <Qtsql>

History::History(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::History)
{
    ui->setupUi(this);
    QSqlQuery msql;
    msql.exec("SELECT * FROM journalatm WHERE  userID = '"+QString::number(UserATM::currentUser.userID())+"'");
    msql.first();
    if(msql.size()==0)
    {

    }
    else
    {
        for (int i = 0; i<msql.size(); ++i)
        {
            //_ATM(msql.value("atmID").toUInt());
            ui->listWidget->addItem(_ATM.address());
            ui->listWidget_2->addItem(msql.value("jDate").toString());
            ui->listWidget_3->addItem(msql.value("change").toString());
        }

    }
}

const UserATM& History::user() const
{
    return _user;
}

const QDateTime& History::date() const
{
    return _date;
}

const QString& History::address() const
{
     return _address;
}

UserATM& History::user()
{
    return _user;
}

QDateTime& History::date()
{
    return _date;
}

QString& History::address()
{
    return _address;
}

History::~History()
{
    delete ui;
}
