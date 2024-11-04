#include <iostream>
#include "BankAccount.h"

BankAccount::BankAccount()
{
	balance = 1000;
	owner = "Nieznany";
	currency = "z³";
}

BankAccount::BankAccount(double b, std::string o, std::string c)
{
	SetBalance(b);
	owner = o;
	currency = c;
}

void BankAccount::SetBalance(double b)
{
	if (b >=0
		&& isSetBalance == false)
	{
		balance = b;
		isSetBalance = true;
	}
}

void BankAccount::AccountInfo()
{
	std::cout << "Informacje o koncie bankowym\n";
	std::cout << "W³aœciciel: " << owner << "\n";
	std::cout << "Saldo: " << balance << " " << currency << "\n";
}

void BankAccount::DepositToAccount(double amount)
{
	if (amount >= 0)
		balance = balance + amount;
}

bool BankAccount::WithdrawToAccount(double amount)
{
	if (amount <= 0 && balance >= amount)
	{
		balance = balance - amount;
		return true;
	}
	return false;
}

void BankAccount::transferBetweenAccounts(BankAccount& account,BankAccount& targetAccount, double amount)
{
	if (account.WithdrawToAccount(amount))
	{
		targetAccount.DepositToAccount(amount);
	}
}