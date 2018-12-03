#include "datebase.h"
#include <QtSql>
DateBase DateBase::myDate = DateBase();
DateBase::DateBase(const QString &type, const QString &host, const QString &name, const QString &user, const QString &pass):
    _type(type),
    _host(host),
    _name(name),
    _user(user),
    _pass(pass)
{
    QSqlDatabase db = QSqlDatabase::addDatabase(_type);
        db.setHostName(_host);
        db.setDatabaseName(_name);
        db.setUserName(_user);
        db.setPassword(_pass);
        if(!db.open()){
            qDebug("db.lastError().text()");
        }else{
            qDebug("Succesfull");
        }


}

DateBase::~DateBase()
{

}


void DateBase::close()
{
    if(!db.open()){
        qDebug("allready");
    }else{
        db.close();
        qDebug("close");
    }
}
void DateBase::open(){
    QSqlDatabase db = QSqlDatabase::addDatabase(_type);
        db.setHostName(_host);
        db.setDatabaseName(_name);
        db.setUserName(_user);
        db.setPassword(_pass);
        if(!db.open()){
            qDebug("db.lastError().text()");
        }else{
            qDebug("Succesfull");
        }
}
