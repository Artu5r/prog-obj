#include <iostream>
#include "BankAccount.h"


int main()
{
	BankAccount firstAccount;
	firstAccount.balance = 7200;
	firstAccount.owner = "Jan KOwalski";
	firstAccount.currency = "z�";

	firstAccount.AccountInfo();

	BankAccount secoundAccount;
	secoundAccount.balance = 3200;
	secoundAccount.owner = "Ewa Nowak";
	secoundAccount.currency = "z�";

	secoundAccount.AccountInfo();
	secoundAccount.DepositToAccount(100);
	secoundAccount.AccountInfo();
	secoundAccount.transferBetweenAccounts(secoundAccount, firstAccount, 10);
}
