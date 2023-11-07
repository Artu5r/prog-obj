#include <iostream>

//Napisz program ktory pobierze od uzytkownika liczbe dodatnia. zabezpiecz program przed podaniem liczazby ujemnej.
void task1()
{
	float number;
	std::cout << "Podaj liczbê doodatni¹:\n";
	std::cin >> number;

	do
	{
		std::cout << "Podaj liczbê doodatni¹:\n";
		std::cin >> number;
	} while (number <= 0);

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << number << "\n";
}

//Napisz program który losuje liczbe i trzeba ja zgadnac.
void task2()
{
	/*
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 5;
	int numberFromUser;

	srand(time(NULL));
	int randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;

	std::cout << "Podaj liczbe: ";
	std::cin >> numberFromUser;

	if (numberFromUser != randomNumber)
	{
		if (numberFromUser != randomNumber)
			...
	}
	else
		std::cout << "Gratulacje@\n";	*/

	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 5;
	int numberFromUser;

	srand(time(NULL));
	int randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;

	do
	{
		std::cout << "Podaj liczbe: ";
		std::cin >> numberFromUser;

		if (numberFromUser > randomNumber)
			std::cout << "Za duzo\n";
		if (numberFromUser < randomNumber)
			std::cout << "Za malo\n";

	} while (numberFromUser != randomNumber);

	std::cout << "Gratulacje!\n";
}

//Napisz program wyswietlaj¹cy liczby ca³kowite z przedzia³u <1,x> , gdzie x podaje urzytkownik.
void task3()
{
	/*
	long long upperRange;

	std::cout << "Podaj liczbe > 1: ";
	std::cin >> upperRange;

	for (long long i = 0; i < upperRange; i++)
	{
		std::cout << i + 1 << "\n";
	}
	*/

	long long upperRange, currentNumber = 0;

	std::cout << "Podaj liczbe > 1: ";
	std::cin >> upperRange;

	do
	{
		currentNumber = currentNumber + 1;
		std::cout << currentNumber << "\n";

	} while (upperRange > currentNumber);
}

int main()
{
	task3();
}
