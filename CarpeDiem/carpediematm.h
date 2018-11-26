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


     public:
        CarpeDiemATM(const QString &atmID="test"); //take date from db (SQL query) by _atmID and create class
        const CarpeDiemATM& operator=(const CarpeDiemATM&);
          CarpeDiemATM(const CarpeDiemATM&);//copy
        ~CarpeDiemATM();

        //selector-modifier
        Amount& amount();
        QString& address();
        unsigned& atmID(){return _atmID;}

        //selector
        const Amount& amount() const;
        const QString& address() const;
        const unsigned & atmID() const{return _atmID;}

        //functions
        void updateATM(); //update ATM, use mySql query
        void deleteATM(); //delete ATM, use mySql query



        static CarpeDiemATM currentATM;

};
#endif // CARPEDIEMATM_H
