#include "SavingsAccount.h"


SavingsAccount::SavingsAccount(double b, double ir)
{
	if (b < 0) {
		std::cout << "Balance invalid." << std::endl;
		balance = 0;
	}
	else {
		balance = b;
	}
	interestRate = ir;
}

SavingsAccount::~SavingsAccount()
{
}


double SavingsAccount::calculateInterest()
{
	return interestRate*balance;
}
