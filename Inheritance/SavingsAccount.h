#pragma once
#include "Account.h"
class SavingsAccount:public Account
{
private:
	double interestRate;
public:
	SavingsAccount(double b, double ir);
	~SavingsAccount();

	double calculateInterest();
};

