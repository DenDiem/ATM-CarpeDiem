#pragma once
//create by Denys Baranov 02/11/18
#include <iostream>
using namespace std;
#include <string>
#include "CardCD.h"

class MoneyCD;
class ATM
{
public:
	ATM();
	ATM(MoneyCD&);
	~ATM();
	bool IsCardValid(const CardCD& card, string cardnumber);
	void chooseLanguage();
	bool checkPassword(const CardCD& card, string password);
	void chooseOperation();
	double showBalance(const CardCD& card);
	void withdrawMoney(const CardCD& card, unsigned int);
	void DoYouNeedCheque(bool,const CardCD& card, unsigned int amount);
	void printCheque(const CardCD& card, unsigned int amount);
	void chooseQuantityOfMoneyToWithdraw();
	void additionalServices();


private:
	unsigned int _idOfATM;
	string _address;
        MoneyCD* _money;
};
