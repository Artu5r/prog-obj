#include <iostream>

//czy liczba jest dodatnia
void task1()
{
	int numberFromUser;

	std::cout << "Podaj liczbe: ";
	std::cin >> numberFromUser;
	
	if (numberFromUser > 0)
	{
		std::cout << "Liczba jest dodatnia\n";
	}
	else
	{
		std::cout << "Liczba jest ujemna\n";
	}
	
	if (numberFromUser == 0)
		std::cout << "0 nie jest ani + ani -\n";
}


int main()
{
	task1();
}

/*
Operatory warunkowe:
	< - wiekszy
	> - mniejszy
	<= - wiekszy rowny
	== - rowny
	!= - rozny

*/