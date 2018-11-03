#pragma once
//create by Denys Baranov 02/11/18
#include <iostream>
using namespace std;
#include <string>
class MoneyCD;
class ATM
{
public:
	ATM();
	ATM(MoneyCD&);
	~ATM();
	bool IsCardValid();
	void chooseLanguage();
	bool checkPassword();
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
