#include "CheckingAccount.h"


CheckingAccount::CheckingAccount(double b, double tf)
{
	if (b < 0) {
		std::cout << "Balance invalid." << std::endl;
		balance = 0;
	}
	else {
		balance = b;
	}
	transactionFee = tf;
}

CheckingAccount::~CheckingAccount()
{
}

void CheckingAccount::credit(double amt)
{
	Account::credit(amt);
	balance -= transactionFee;
}

bool CheckingAccount::debit(double amt)
{
	if (Account::debit(amt+transactionFee)) {
		return true;
	}
	else {
		return false;
	}
}

