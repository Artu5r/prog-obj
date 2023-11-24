#include <iostream>

void task1()
{
	long long num, rest;
	long long numberOfNumbers = 0;
	std::cout << "Podaj liczbe: ";
	std::cin >> num;

	do
	{
		numberOfNumbers++;
		rest = num % 10;
		num = num / 10;
	} while (num != 0);
	std::cout << "Liczba liczb = " << numberOfNumbers << "\n";
}

//Napisz program ktory policzy NWD dwoch liczb.
void task2()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj 1 liczbe: ";
	std::cin >> firstNumber;
	std::cout << "Podaj 2 liczbe: ";
	std::cin >> secondNumber;

	int nwd;

	nwd = (firstNumber < secondNumber) ? firstNumber : secondNumber;

	//wersja 1
	/*if (firstNumber < secondNumber)
		nwd = firstNumber;
	else
		nwd = secondNumber;


	while (secondNumber % nwd != 0
		|| firstNumber % nwd != 0)
		nwd--;

	std::cout << "NWD = " << nwd;*/

	//wersja 2


}

int main()
{
	task2();
}
