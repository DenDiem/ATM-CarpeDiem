#include "useratm.h"

#include <Qtsql>

UserATM UserATM::currentUser(UserATM("1"));

UserATM::UserATM(const QString& cardnum)
{
   QSqlQuery msql;
   msql.exec("SELECT * FROM useratm WHERE  cardNum = '"+cardnum+"'");
   msql.first();
   if(msql.size()==0)
   {
       clientName() = "error";
       creditLim() = 0;
       cardNum() = "";
       clientSurName() = "";
       userID() = 0;
       currentCash() = 0;
       attempts() = 0;
       avalible() = 1;
       pass() = "";
       qDebug("eror");

   }else
   {

       clientName() =  msql.value("name").toString();
       creditLim() =  msql.value("creditLim").toInt();;
       cardNum() =  msql.value("cardNum").toString();
       clientSurName() = msql.value("sName").toString();
       userID() = msql.value("userID").toInt();

       currentCash() =  msql.value("cash").toInt();
       attempts() = msql.value("attempts").toInt();
       avalible() = msql.value("avalible").toBool();

       pass() = msql.value("pinCode").toString();


   }

}

const UserATM &UserATM::operator=(const UserATM & u)
{
    clientName() =(u.clientName());
    creditLim()= (u.creditLim());
    cardNum()= (u.cardNum());
    clientSurName()= (u.clientSurName());
    userID() =(u.userID());
    currentCash() =(u.currentCash());
    attempts()= (u.attempts());
    avalible() =(u.avalible());
    pass()= (u.pass());
    return *this;
}

UserATM::~UserATM()
{

}

UserATM::UserATM(const UserATM & u):
    _clientName (u.clientName()),
    _creditLim (u.creditLim()),
    _cardnum (u.cardNum()),
    _clientSurName (u.clientSurName()),
    _userID (u.userID()),
    _currentCash (u.currentCash()),
    _attempts (u.attempts()),
    _avalible (u.avalible()),
    _pass (u.pass())
{


}

double &UserATM::currentCash()
{
    return _currentCash;
}

unsigned &UserATM::creditLim()
{
    return _creditLim;
}

QString &UserATM::clientName()
{
    return _clientName;
}

QString &UserATM::pass()
{
    return _pass;
}

QString &UserATM::clientSurName()
{
    return _clientSurName;
}

const double &UserATM::currentCash() const
{
    return _currentCash;
}
QString &UserATM::cardNum()
{
    return _cardnum;
}

const QString &UserATM::cardNum() const
{
    return _cardnum;
}
unsigned &UserATM::userID()
{
    return _userID;
}

bool &UserATM::avalible()
{
    return _avalible;
}

unsigned &UserATM::attempts()
{
    return _attempts;

}

const QString &UserATM::pass() const
{
    return _pass;

}

const unsigned &UserATM::userID() const
{
    return _userID;
}
const unsigned &UserATM::creditLim() const
{
    return _creditLim;
}

const bool &UserATM::avalible() const
{
    return _avalible;

}

const unsigned &UserATM::attempts() const
{
    return _attempts;
}

const QString &UserATM::clientName() const
{
    return _clientName;
}

const QString &UserATM::clientSurName() const
{
    return _clientSurName;
}

void UserATM::updateUser()
{

    QSqlQuery query;
        query.exec("UPDATE useratm SET attempts = "+QString::number(attempts())+", avalible = "+QString::number(avalible())+", cash = "+QString::number(currentCash())+" WHERE userID = "+QString::number(userID())+"");



}

void UserATM::deleteUser()
{

}
