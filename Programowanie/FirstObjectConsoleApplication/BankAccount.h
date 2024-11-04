#pragma once
#include <iostream>

class BankAccount
{
private:
	double balance;
	std::string owner;
	std::string currency;

	bool isSetBalance = false;

public:
	BankAccount();
	BankAccount(double b, std::string o, std::string c);


	void SetBalance(double b);

	void AccountInfo();

	void DepositToAccount(double amount);

	bool WithdrawToAccount(double amount);

	void transferBetweenAccounts(BankAccount& account, BankAccount& targetAccount, double amount);
};