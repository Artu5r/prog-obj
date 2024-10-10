#include <iostream>
#include "BankAccount.h"

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