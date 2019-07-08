#include <iostream>
#include "account.h"
#include <string>
using std::cout;
using std::cin;


int main()
{

	int credit, debit, accountBalance;
	std::string accountNum;

	//Welcome Message
	cout << "This program stores/displays/calculates users"
		<< " balance for separate accounts.\n";
	cout << "The first account will display predefined values for "
		<< " Account #, debit, and credit.\n";
	cout << "The second account will allow the user to enter all their account info.\n\n";
	cout << "Please enter the account info: \n";
	cout << "Enter the account number: ";
	cin >> accountNum;
	cout << "Enter the account balance: ";
	cin >> accountBalance;
	cout << "Enter the debit amount: ";
	cin >> debit;
	cout << "Enter the credit amount: ";
	cin >> credit;
	
	
	Account acc1;
	Account acc2(100,1,5,"123456");
	acc1.setAccountNum(accountNum);
	acc1.setNewBalance(credit,debit,accountBalance);
	acc2.setNewBalance(1,5,100);
	acc2.displayMessage();
	acc1.displayMessage();

	return 0;
}
