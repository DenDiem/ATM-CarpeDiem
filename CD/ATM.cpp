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
	return card->_password == password;
}

bool ATM::IsCardValid(const CardCD& card, string cardnumber)
{
	return card.cardnumber = cardnumber;
}
