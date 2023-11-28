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

	int nwd = 1;

	//nwd = (firstNumber < secondNumber) ? firstNumber : secondNumber;

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
	/*int tmpFirstNumber, tmpSecondNumber;
	int dividend = 2;
	tmpFirstNumber = firstNumber;
	tmpSecondNumber = secondNumber;

	while (tmpFirstNumber >= dividend
		&& tmpSecondNumber >= dividend)
	{
		if (tmpFirstNumber % dividend == 0
			&& tmpSecondNumber % dividend == 0)
		{
			tmpFirstNumber /= dividend;
			tmpSecondNumber /= dividend;
			nwd *= dividend;
		}
		else
			dividend++;
	}
	std::cout << "NWD = " << nwd << "\n";*/

	//wersja 3
	//NWD(a, b) = a				jesli b = 0
	//NWD(a, b) = nwd(b,a%b)	jesli b!= 0
	int a = firstNumber, b = secondNumber;
	while (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;
	}
	nwd = a;
	std::cout << "NWD = " << a << "\n";
}

//sprawdzenie czy liczba jest palindromem.
void task3()
{

}

int main()
{
	task3();
}
