#pragma once
//create by Denys Baranov 02/11/18
class MoneyCD;
class ATM
{
public:
	ATM();
	ATM(Money&);
	~ATM(void);

private:
	Money* _money;
};

void a()
{
	int a = 1;
	int& b = a;
	int* c = &b;

}