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

    QSqlDatabase db = QSqlDatabase::addDatabase(type);
        db.setHostName(host);
        db.setDatabaseName(name);
        db.setUserName(user);
        db.setPassword(pass);
        if(!db.open()){
            qDebug("db.lastError().text()");
        }else{
            qDebug("Succesfull");
        }

}

DateBase::~DateBase()
{

}

\
void DateBase::close()
{
    if(!db.open()){
        qDebug("allready");
    }else{
        db.close();
        qDebug("close");
    }
}
