#include "ATM.h"
#include "MoneyCD.h"
#include "dbCD.h"
#include <stdlib.h>
#include <iostream>




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
/*
bool ATM::checkPassword(const CardCD& card, string password)
{
	return card.pin() == password;
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
*/
/*void ATM::runATM()
{
	string a;
	dbCD db(new CardCD("2","3"));

	string pin;
	cout<<"Enter card num:" << endl;
	cin>>a;
	cout<<"Enter pin: "<<endl;
	cin>>pin;
	if(db.checkValide(a,pin))
	{

		
	}
}

*/


int qstate;
#include <jdbc/cppconn/driver.h>
#include <jdbc/cppconn/exception.h>
#include <jdbc/cppconn/resultset.h>
#include <jdbc/cppconn/statement.h>

using namespace std;

int main(void)
{
	cout << endl;
	cout << "Running 'SELECT 'Hello World!' »AS _message'..." << endl;

		try {
		sql::Driver *driver;
		sql::Connection *con;
		sql::Statement *stmt;
		sql::ResultSet *res;

		/* Create a connection */
		driver = get_driver_instance();
		con = driver->connect("tcp://127.0.0.1:3306", "root", "root");
		/* Connect to the MySQL test database */
		con->setSchema("test");

		stmt = con->createStatement();
		res = stmt->executeQuery("SELECT 'Hello World!' AS _message");
		while (res->next()) {
			cout << "\t... MySQL replies: ";
			/* Access column data by alias or column name */
			cout << res->getString("_message") << endl;
			cout << "\t... MySQL says it again: ";
			/* Access column data by numeric offset, 1 is the first column */
			cout << res->getString(1) << endl;
		}
		delete res;
		delete stmt;
		delete con;

	}
	catch (sql::SQLException &e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line "<< __LINE__ << endl;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << endl;
	}

	cout << endl;

	return EXIT_SUCCESS;
}