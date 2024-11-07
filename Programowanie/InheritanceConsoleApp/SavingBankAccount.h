#include "BankAccount.h"

class SavingBankAccount : public BankAccount
{
public:
	double interestRate;

public:
	SavingBankAccount()
	{

	}

	void CalculateInterestRate()
	{
		balance = balance + balance * interestRate;
	}

};