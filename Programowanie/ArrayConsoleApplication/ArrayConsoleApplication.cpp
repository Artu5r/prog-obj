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


}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task1();
}
