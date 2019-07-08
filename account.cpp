#include <iostream>
#include "account.h"
#include <string>
using std::string;
using std::cout;
using std::cerr;


Account::Account()
{
	_accountBalance = 0;
	_credit = 0;
	_debit = 0;
	_accountNum = "";

}

Account::Account(int accountBalance, int credit, int debit,
			string accountNum)
{
	setAccountBalance(accountBalance);
	setCredit(credit);
	setDebit(debit);
	setAccountNum(accountNum);
}

Account::~Account(){}

void Account::setAccountBalance(int accountBalance)
{
	if(accountBalance >= 0)
	{
		_accountBalance = accountBalance;
	}
	else
	{
		cerr << "ERROR! Balance entered is less than 0.\n"
			<< "balance will be set to 0.\n";
		_accountBalance = 0;
	}
}
void Account::setCredit(int credit)
{
	_credit = credit;
}
void Account::setDebit(int debit)
{
	_debit = debit;
}
void Account::setAccountNum(string accountNum)
{
	if(accountNum.size() < 6)
	{
		int sOfString = accountNum.size();
		while(sOfString < 6)
		{
			_accountNum = accountNum.append("0");
			sOfString++;
		}
	}	
	else if(accountNum.size() > 6)
	{
		cerr << "\nERROR! Account should be 6 " << 
		"characters.It will be shortened.\n";
		_accountNum = accountNum.substr(0,6);
	}
	else
	{
		_accountNum = accountNum;
	}
}
void Account::setNewBalance(int credit, int debit, int accountBalance)
{
	if(debit > 0 && ((accountBalance-debit) > 0))
	{
		_accountBalance = accountBalance-debit;
		accountBalance = _accountBalance;
	}
	if(credit > 0)
	{
		_accountBalance = accountBalance+credit;
		accountBalance = _accountBalance;
	}
	if((accountBalance-debit)<0)
	{
		cerr << "ERROR! Your withdraw amount is more than available.\n\n";
		_accountBalance = accountBalance;
		
	}
}
int Account::getAccountBalance() const
{
	return _accountBalance;
}
int Account::getCredit()const
{
	return (_accountBalance + _credit);
}
int Account::getDebit()const
{
	return (_accountBalance - _debit);
}
string Account::getAccountNum()const
{
	return _accountNum;
}
int Account::getNewBalance()const
{
	return _accountBalance;
}
void Account::displayMessage() const
{
	cout << "\nAccount #: "  << getAccountNum() 
		<< "\nThe current balance is: " << 			getAccountBalance() << "\n\n";
}
