#include <iostream>

class BankAccount
{
public:
	double balance;
	std::string owner;
	std::string currency;

	void AccountInfo()
	{
		std::cout << "Informacje o koncie bankowym\n";
		std::cout << "W³aœciciel: " << owner << "\n";
		std::cout << "Saldo: " << balance << " " << currency << "\n";
	}

	void DepositToAccount(double amount)
	{
		if (amount >= 0)
			balance = balance + amount;
	}

	bool WithdrawToAccount(double amount)
	{
		if (amount <= 0 && balance >= amount)
		{
			balance = balance - amount;
			return true;
		}
		return false;
	}
};


void transferBetweenAccounts(BankAccount& sourceAccount, BankAccount& targetAccount, double amount)
{
	if (sourceAccount.WithdrawToAccount(amount)
	{
		targetAccount.DepositToAccount(amount)
	}
}


int main()
{
	BankAccount firstAccount;
	firstAccount.balance = 7200;
	firstAccount.owner = "Jan KOwalski";
	firstAccount.currency = "z³";

	firstAccount.AccountInfo();

	BankAccount secoundAccount;
	secoundAccount.balance = 3200;
	secoundAccount.owner = "Ewa Nowak";
	secoundAccount.currency = "z³";

	secoundAccount.AccountInfo();
	secoundAccount.DepositToAccount(100);
	secoundAccount.AccountInfo();
}
