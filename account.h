#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

class Account
{
	private: 
		int _accountBalance;
		int _credit;
		int _debit;
		std::string _accountNum;
	public:
		Account();
		Account(int accountBalance, int credit, int debit,
			std::string accountNum);
		~Account();
		void setAccountBalance(int accountBalance);
		void setCredit(int credit);
		void setDebit(int debit);
		void setAccountNum(std::string accountNum);
		void setNewBalance(int credit, int debit, int 				accountBalance);
		int getAccountBalance()const;
		int getCredit()const;
		int getDebit()const;
		int getNewBalance()const;
		std::string getAccountNum()const;
		void displayMessage() const;
};

#endif
