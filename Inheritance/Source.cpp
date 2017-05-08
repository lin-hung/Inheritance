#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
	string in;
	do {
		cout << "1. Create standard account\n2. Create saving account\n3. Create checking account\n4. Exit" << endl;
		getline(cin, in);

		if (in == "1") {
			Account a=a(2);
			double bal;

			
		}
	} while (in != "4");
	system("pause");

}

/*
while (true) {
	cout << "Enter your balance." << endl;
	if (cin >> bal) {
		a = new Account(bal);
		break;
	}
	else {
		cin.clear();
		while (cin.get() != '\n');
	}
}*/z