//create by Denys Baranov 26/10/18
#ifndef _CardCD_H_
#define _CardCD_H_

#include <iostream>
using namespace std;
#include <string>

class CardCD
{
	CardCD(string cardnumber,string pin);
	bool isCredit() const;
	double& amount();
	const double& amount() const;

	const string& pin() const;
	string& pin();
	const string& cardnum() const;
	string& cardnum();


private:
	double _amount;
	bool _credit;
	string _cardnumber;
	string _pin;
};


#endif
