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

		if (isPrime /*== true*/)
			std::cout << numberToCheck << ", ";
	}
	std::cout << "Gotowe\n";

	//wersja 2
	long long sieveToErastosthenes[UPPER_RANGE + 1];

	for (long long  i = 0; i < length; i++)
	{

	}

	for (int number = 2; number <= UPPER_RANGE; number++)
	{
		if (number  nie wykreslony)
		{
			for(int numberToCrossOut = number + number; numberToCrossOut <= UPPER_RANGE; numberToCrossOut++)

		}
	}
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task4();
}
