#include "CardCD.h"

inline CardCD::CardCD(string cardnumber, string pin):
_amount(0),_credit(false),_cardnumber(cardnumber),_pin(pin)
{
}

inline bool CardCD::isCredit() const
{
	return _credit;
}

inline double& CardCD::amount()
{
	return _amount;
}

inline const double& CardCD::amount() const
{
	return _amount;
}

inline const string& CardCD::pin() const
{
	return _pin;
}

inline string& CardCD::pin()
{
	return _pin;
}

inline const string& CardCD::cardnum() const
{
	return _cardnumber;
}

inline string& CardCD::cardnum()
{
	return _cardnumber;
}
