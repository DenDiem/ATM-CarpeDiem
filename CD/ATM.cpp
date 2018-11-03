#include "ATM.h"
//create by Denys Baranov 02/11/18

ATM::ATM(void):
_money(0)
{
}

ATM::ATM(MoneyCD& mn):
_money(&(mn))
{
}


ATM::~ATM(void)
{
	delete _money;
}

bool ATM::checkPassword(const CardCD& card, string password)
{
	return card._password == password;
}

bool ATM::IsCardValid(const CardCD& card, string cardnumber)
{
	return card._cardnumber == cardnumber;
}

double ATM::showBalance(const CardCD& card)
{
	return card._amount;
}

void ATM::withdrawMoney(const CardCD& card, unsigned int amount)
{
	card._amount - amount;
}

void ATM::DoYouNeedCheque(bool check, const CardCD& card, unsigned int amount)
{
	if (check)
		printCheque(card, amount);
}

void ATM::printCheque(const CardCD& card, unsigned int amount)
{
	cout << "You had: " << card._amount << endl;
	cout << "You withdraw: " <<amount<< endl;
	cout << "Now your amount:" << card._amount - amount<< endl;
}
