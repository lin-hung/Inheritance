#include "Account.h"


Account::Account(double b)
{
	if (b < 0) {
		std::cout << "Balance invalid."<<std::endl;
		balance = 0;
	}
	else {
		balance = b;
	}
}

Account::~Account()
{
}

void Account::credit(double amt)
{
	balance += amt;
}

bool Account::debit(double amt)
{
	if (amt <= balance) {
		balance -= amt;
		return true;
	}
	else {
		std::cout << "Debit amount exceeded account balance." << std::endl;
		return false;
	}
}

double Account::getBalance()
{
	return balance;
}
