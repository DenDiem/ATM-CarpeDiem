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
	friend class CardCD ;
	bool IsCardValid(const CardCD& card, string cardnumber);
	void chooseLanguage();
	bool checkPassword(const CardCD& card, string password);
	void chooseOperation();
	void showBalance();
	void withdrawMoney();
	bool DoYouNeedCheque();
	void chooseQuantityOfMoneyToWithdraw();
	void additionalServices();


private:
	unsigned int _idOfATM;
	string _address;
    MoneyCD* _money;
};
