#ifndef USERATM_H
#define USERATM_H
#include <QApplication>

class UserATM{ //Create by DenysBaranov 10/11/2018
    private:
    QString _cardnum;
    unsigned _userID;
    double _currentCash;
    unsigned _creditLim;
    QString _clientName;
    QString _clientSurName;
    QString _pass;

    bool _avalible;
    unsigned _attempts;





    public:
        UserATM(const QString& cardnum="error"); //take date from db (SQL query) by _cardnum and create class

        const UserATM& operator=(const UserATM&);

        ~UserATM();

        UserATM(const UserATM&);//copy
        //selector-modifier
        double& currentCash();
        unsigned& creditLim();
        QString& clientName();
        QString& pass();
        QString& clientSurName();
        QString &cardNum();
        unsigned &userID();
        bool& avalible();
        unsigned& attempts();

        //selector
        const QString& pass() const;
        const double &currentCash() const;
        const unsigned& creditLim() const;
        const bool& avalible() const;
        const unsigned& attempts() const;
        const QString& clientName() const;
        const QString& clientSurName() const;
        const QString& cardNum() const;
        const unsigned &userID() const;

        //functions
        void updateUser(); //update user, use mySql query
        void deleteUser(); //delete user, use mySql query

        static UserATM currentUser;

};
#endif // USERATM_H
