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
	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	//wersja 1

	/* //obliczam iloœæ cyfr
	int tmpNumber = number;
	int numberOfDigit = 1;
	while (tmpNumber >= 10)
	{
		numberOfDigit++;
		tmpNumber = tmpNumber / 10;
	}

	//liczê 10 do potêgi (numberOfDigit - 1)
	int leftDivided = 1;
	while (numberOfDigit != 1)
	{
		leftDivided *= 10;
		numberOfDigit--;
	}

	int rightDivided = 10;
	int leftNumber = number;
	int rightNumber = number;

	bool isPalindrome = true;
	while (leftNumber > 10)
	{
		int leftDigit = leftNumber / leftDivided;
		int rightDigit = rightNumber % rightDivided;
		if (leftDigit != rightDigit)
		{
			isPalindrome = false;
			break;
		}

		leftNumber = leftNumber % leftDivided;
		rightNumber = rightNumber / rightDivided;

		leftDivided = leftDivided / 10;
	}

	if (isPalindrome /*== true*//*)
		std::cout << "Liczba jest palindromem\n";
	else
		std::cout << "Liczba nie jest palindromem\n";*/

		//wersja 2

	int reverseNumber = 0;
	int tmpNumber = number;
	do
	{
		int rest = tmpNumber % 10;
		reverseNumber == reverseNumber * 10 + rest;
		tmpNumber = tmpNumber / 10;
	} while (tmpNumber > 0);

	if (number == reverseNumber)
		std::cout << "Liczba jest palindromem\n";
	else
		std::cout << "Liczba nie jest palindromem\n";
}

//Napisz program, który wyswietli "Hello World" tyle razy ile chce uzutkownik.
void task4()
{
	int howManyTimes;
	std::cout << "Ile razy wypisac Hello World: ";
	std::cin >> howManyTimes;

	int i = 0;
	while (i != howManyTimes)
	{
		std::cout << "Hello World\n";
		i++;
	}
}

//Napisz program, który wyswietli liczby parzyste od podanej przy urzytkownika liczby
void task5()
{
	int upperRange;
	std::cout << "Podaj gorna granice do wyswietlenia: ";
	std::cin >> upperRange;

	int i = 0;
	while (i <= upperRange)
	{
		std::cout << i << "\n";
		i += 2;
	}
}

int main()
{
	task5();
}
