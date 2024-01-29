//01100001 01110010 01110100 01110101 01110010 01101011
#include <iostream>

//Napisz program który wczyta np. 5 liczb i wyswietli je w odwrotnej kolejnoœci.
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

//Napisz program obliczaj¹cy œredni¹ arytmetyczn¹ elemêtów w tablicy liczb ca³kowitych
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
	std::cout << "Œrednia wynosi: " << avg << "\n";
}

//Napisz program, który uzupe³ni tablicê liczbami losowymi a nastêpnie znajdzie minimum oraz maksimum.
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

//Napisz program, który wyznaczy wszystkie liczby pierwsze od 2 do zadeklarowanego zakresu. Metoda sito Eratostenesa.
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

//Napisz program, który wczyta numer dnia tygodnia a nastêpnie wyœwietli nazwê tego dnia lub komunikat b³êdu.
void task5()
{
	int numberOfWeek;
	std::cout << "Podaj numer: ";
	std::cin >> numberOfWeek;

	std::string dayName[] = { "POniedzia³ek", "Wtorek", "Œroda", "Czwartek", "Pi¹tek", "Sobota", "Niedziela" };

	//if (numberOfWeek >= 0 && numberOfWeek = 6)
	std::cout << "Dzieñ to " << dayName[numberOfWeek] << std::endl;
	//else
	std::cout << "Nieprawidlowy nr dnia \n";
}

//Napisz program, który porsortuje tablice liczb sposobem przez wybór.
void task6()
{
	const short LOWER_RANGE = 0;
	const short UPPER_RANGE = 70;

	const unsigned short ARRAY_SIZE = 10;
	int numbers[ARRAY_SIZE];

	//losowanie liczb
	srand(time(NULL));
	std::cout << "Wylosowane liczby: \n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}

	//sortowanie
	for (int i = 0; i < ARRAY_SIZE - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < ARRAY_SIZE; j++)
		{
			if (numbers[j] < numbers[minIndex])
				minIndex = j;
		}
		int tmp = numbers[minIndex];
		numbers[minIndex] = numbers[i];
		numbers[i] = tmp;
	}

	std::cout << "\nPostrtowane liczby to:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << std::endl;
}

//Napisz program, który porsortuje tablice liczb sposobem przez wstawianie
void task7()
{
	const short LOWER_RANGE = 0;
	const short UPPER_RANGE = 70;

	const unsigned short ARRAY_SIZE = 10;
	int numbers[ARRAY_SIZE];

	srand(time(NULL));
	std::cout << "Wylosowane liczby: \n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";


	for (int i = 1; i < ARRAY_SIZE; i++)
	{
		int pom = numbers[i];
		int j;
		for (j = i - 1; j >= 0 && numbers[j] > pom; j--)
		{
			numbers[j + 1] = numbers[j];
		}
		numbers[j + 1] = pom;
	}

	std::cout << "Posortowane liczby to: \n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
}

//Napisz program, który porsortuje tablice liczb sposobem b¹belkowym.
void task8()
{
	const short LOWER_RANGE = 0;
	const short UPPER_RANGE = 70;

	const unsigned short ARRAY_SIZE = 10;
	int numbers[ARRAY_SIZE];

	srand(time(NULL));
	std::cout << "Wylosowane liczby: \n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";

	for (int i = 0; i < ARRAY_SIZE -1; i++)
		for (int j = 0; j < ARRAY_SIZE -1; j++)
			if (numbers[j] > numbers[j + 1])
			{
				int tmp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = tmp;
			}

	std::cout << "Posortowane liczby to: \n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task8();
}
