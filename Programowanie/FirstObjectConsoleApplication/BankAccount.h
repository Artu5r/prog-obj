#pragma once
#include <iostream>

class BankAccount
{
public:
	double balance;
	std::string owner;
	std::string currency;

	void AccountInfo();

	void DepositToAccount(double amount);

	bool WithdrawToAccount(double amount);

	void transferBetweenAccounts(BankAccount& account, BankAccount& targetAccount, double amount);
};