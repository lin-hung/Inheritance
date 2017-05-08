#include <iostream>

#pragma once
class Account
{
protected:
	double balance;
public:
	Account() : balance(0) {};
	Account(double b);
	~Account();

	void credit(double amt);
	bool debit(double amt);
	double getBalance();
};

