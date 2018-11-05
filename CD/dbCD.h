#pragma once
#include "CardCD.h"

class dbCD
{
public:
	dbCD(CardCD* cd);
	~dbCD(void);
	bool checkValide(string,string);
private:
	CardCD* _date;
};

