#ifndef CARPEDIEMATM_H
#define CARPEDIEMATM_H
#include <QApplication>
#include <amount.h>
class CarpeDiemATM
{
    private:
    unsigned _atmID;
    QString _address;
    Amount _amount;
    const CarpeDiemATM& operator=(const CarpeDiemATM&);
      CarpeDiemATM(const CarpeDiemATM&);//copy

     public:
        CarpeDiemATM(const QString &atmID="test"); //take date from db (SQL query) by _atmID and create class

        ~CarpeDiemATM();

        //selector-modifier
        Amount& amount();
        QString& address();

        //selector
        const Amount& currentCash() const;
        const QString& address() const;


        //functions
        void updateATM(); //update ATM, use mySql query
        void deleteATM(); //delete ATM, use mySql query




};
#endif // CARPEDIEMATM_H
