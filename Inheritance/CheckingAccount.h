#pragma once
#include "Account.h"
class CheckingAccount:public Account
{
private:
	double transactionFee;
public:
	CheckingAccount(double b, double tr);
	~CheckingAccount();

	void credit(double amt);
	bool debit(double amt);
};

