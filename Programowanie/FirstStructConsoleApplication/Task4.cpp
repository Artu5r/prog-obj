#include <iostream>

struct BankAccount
{
	double balance;
	std::string owner;
	std::string currency;
};

void accountInfo(BankAccount &account)
{
	std::cout << "Informacje o koncie bankowym\n";
	std::cout << "W³aœciciel: " << account.owner << "\n";
	std::cout << "Saldo: " << account.balance << " " << account.currency << "\n";
}

void depositToAccount(BankAccount &account, double amount)
{
	if (amount >= 0)
		account.balance = account.balance + amount;
}

void withdrawToAccount(BankAccount& account, double amount)
{
	if (amount <= 0 && account.balance >= amount)
		account.balance = account.balance - amount;
}

void task4()
{
	BankAccount firstAccount;
	firstAccount.balance = 7200;
	firstAccount.owner = "Jan KOwalski";
	firstAccount.currency = "z³";

	accountInfo(firstAccount);

	BankAccount secoundAccount;
	secoundAccount.balance = 3200;
	secoundAccount.owner = "Ewa Nowak";
	secoundAccount.currency = "z³";

	accountInfo(secoundAccount);

	depositToAccount(firstAccount, 100);
	accountInfo(firstAccount);
}