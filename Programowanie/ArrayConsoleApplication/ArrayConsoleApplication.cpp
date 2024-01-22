//01100001 01110010 01110100 01110101 01110010 01101011
#include <iostream>

//Napisz program kt�ry wczyta np. 5 liczb i wyswietli je w odwrotnej kolejno�ci.
void task1()
{
	const unsigned short ARRAY_SIZE = 5;
	int numbers[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << "Podaj dana: ";
		std::cin >> numbers[i];
	}

	for (int i = ARRAY_SIZE - 1; i >= 0; i--)
	{
		std::cout << numbers[i] << " , ";
	}
	std::cout << "\n";
}

//Napisz program obliczaj�cy �redni� arytmetyczn� elem�t�w w tablicy liczb ca�kowitych
void task2()
{
	const unsigned short ARRAY_SIZE = 5;
	int numbers[ARRAY_SIZE];

	const unsigned short LOWER_RANGE = 5;
	const unsigned short UPPER_RANGE = 7;

	srand(time(NULL));

	std::cout << "wylosowane liczby: \n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";

	int sum = 0;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		sum = sum + numbers[i];
	}
	double avg = sum * 1.0 / ARRAY_SIZE;
	std::cout << "�rednia wynosi: " << avg << "\n";
}

//Napisz program, kt�ry uzupe�ni tablic� liczbami losowymi a nast�pnie znajdzie minimum oraz maksimum.
void task3()
{
	const short LOWER_RANGE = 0;
	const short UPPER_RANGE = 70;

	const unsigned short ARRAY_SIZE = 100;
	int numbers[ARRAY_SIZE];

	srand(time(0));

	std::cout << "wylosowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";

	int max = numbers[0];
	for (int i = 1; i < ARRAY_SIZE; i++)
	{
		if (numbers[i] > max)
			max = numbers[i];
	}

	std::cout << "Max to: " << max << "\n";

	int min = numbers[0];
	for (int i = 1; i < ARRAY_SIZE; i++)
	{
		if (numbers[i] < min)
			min = numbers[i];
	}

	std::cout << "Min to: " << min << "\n";
}

//Napisz program, kt�ry wyznaczy wszystkie liczby pierwsze od 2 do zadeklarowanego zakresu. Metoda sito Eratostenesa.
void task4()
{
	const long long UPPER_RANGE = 70;

	//wersja 1
	/*
	for (long long numberToCheck = 2; numberToCheck <= UPPER_RANGE; numberToCheck++)
	{
		bool isPrime = true;
		for (long long i = 2; i <= numberToCheck / 2; i++)
		{
			if (numberToCheck % i == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
			std::cout << numberToCheck << ", ";
	}
	std::cout << "Gotowe\n";
	*/

	//wersja 2
	bool sieveOfEratosthenes[UPPER_RANGE + 1];

	for (unsigned long long i = 2; i <= UPPER_RANGE; i++)
	{
		sieveOfEratosthenes[i] = true;
	}

	for (unsigned long long number = 2; number <= UPPER_RANGE; number++)
	{
		if (sieveOfEratosthenes[number] /*== true*/)
		{
			for (long long numberToCrossOut = number + number; numberToCrossOut <= UPPER_RANGE; numberToCrossOut = numberToCrossOut + number)
				sieveOfEratosthenes[numberToCrossOut] = false;
		}
	}

	for (unsigned long long i = 2; i <= UPPER_RANGE; i++)
	{
		if (sieveOfEratosthenes[i] /*== true*/)
			std::cout << i << ", ";
	}
	std::cout << "\n";
}

//Napisz program, kt�ry wczyta numer dnia tygodnia a nast�pnie wy�wietli nazw� tego dnia lub komunikat b��du.
void task5()
{
	int numberOfWeek;
	std::cout << "Podaj numer: ";
	std::cin >> numberOfWeek;

	std::string dayName[] = { "POniedzia�ek", "Wtorek", "�roda", "Czwartek", "Pi�tek", "Sobota", "Niedziela" };

	if (numberOfWeek >= 0 && numberOfWeek = 6)
		std::cout << "Dzie� to " << dayName[numberOfWeek] << std::endl;
	else
		std::cout << "Nieprawidlowy nr dnia \n";
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task5();
}
