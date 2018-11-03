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
