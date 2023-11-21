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

	unsigned long long upperRange, currentNumber = 0;

	std::cout << "Podaj liczbe > 1: ";
	std::cin >> upperRange;

	do
	{
		currentNumber++;
		//++currentNumber;
		//currentNumber = currentNumber + 1;
		std::cout << currentNumber << "\n";

	} while (upperRange > currentNumber);
}

//Prog który policzy sume cyfr podanej przez u¿ytkownika
void task4()
{
	int number, rest, sum = 0;

	std::cout << "Podaj liczbe: ";
	std::cin >> number;

	do
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	} while (number != 0);

	std::cout << "Suma " << sum << "\n";
}

//Popros urzytkownika o podawanie liczb , az nie wprowadzi 0.
//Oblicz srednia oraz sume wprowadzonych liczb.
void task5()
{
	/*float number, sum = 0;
	float average;
	int i = 0;

	do
	{
		std::cout << "Podaj liczbe: ";
		std::cin >> number;
		i++;
		sum = sum + number;
		average = (average + number) / i;
		std::cout << "Suma = " << sum << "\n";
		std::cout << "Srednia = " << average << "\n";

	} while (number != 0);
	*/
}

//napisz program który pobierze od uzytkownika dowolna liczbe calkowita.
//nastepnie program powiniem obliczyc i wyswietlic liczbe cyfr
void task6()
{
	long long num, rest;
	long long numberOfNumbers = 0;
	std::cout << "Podaj liczbe: ";
	std::cin >> num;

	while (num != 0)
	{
		numberOfNumbers++;
		rest = num % 10;
		num = num / 10;
	}
	std::cout << "Liczba liczb = " << numberOfNumbers << "\n";
}



int main()
{
	task6();
}
