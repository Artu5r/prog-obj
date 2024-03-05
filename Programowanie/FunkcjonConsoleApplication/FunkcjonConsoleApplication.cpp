//01100001 01110010 01110100 01110101 01110010 01101011
#include <iostream>

/*
Funkcja
	- zbi�r instrukcji realizuj�cy zadanie
	- podprogram

Budowa funkcji:
	* nag��wek funkcji
	* cia�o funkcji

Nag��wek:
	typ_zwracanej_danej nazwa_funkcji(parametr)
*/

//Napisz funkcje kt�ra wy�wietli na konsoli "Hello World!"
void task1()
{
	std::cout << "Hello World!\n";
}

//Napisz funkcje uniwersaln� kt�ra pozwala wy�wietli� dowolny tekst.
void task2(std::string textParam)
{
	std::cout << textParam << "\n";
}

//Napisz funkcje uniwersaln�, kt�ra wy�wietli imie oraz informacjie czy kto� jest pe�noletni.
void task3(std::string name, int age)
{
	std::cout << name << "\n";
	if (18 >= age)
		std::cout << "jest niepe�noletni\n";
	else
		std::cout << "jest pe�noletni\n";
}

//Napisz program, kt�ry przetestuje zachowanie si� przekazywanych danych przez parametr.
void task4(int number)
{
	std::cout << "Zmienna number w funkcji task4: " << number << "\n";
	number--;
	std::cout << "Zmienna number w funkcji task4: " << number << "\n";
}

//Napisz program, kt�ry wykorzysta przekazywanie parametru przez referencje.
void task5(int& number)
{
	std::cout << "Zmienna number w funkcji task5: " << number << "\n";
	number--;
	std::cout << "Zmienna number w funkcji task5: " << number << "\n";
}

//Napisz funkcje, kt�ra pobierze od u�ytkownika liczb�.
void task6_GetNumber(int& number)
{
	std::cout << "Podaj liczbe: ";
	std::cin >> number;
}

int sumOfNumbers(int fn, int sn)
{
	int s;
	s = fn + sn;
	return s;
}

//Napisz, funkcje kt�ra obliczy warto�� �ilni i j� zwr�ci.
long long calculateFactorial(long long n)
{
	long long factorial = 1;
	for (int i = 2; i <= n; i++)
	{
		factorial = factorial * i;
	}
	return factorial;
}

long long calculateFactorialV2(long long n)
{
	if (n <= 1)
		return 1;
	else
		return n * calculateFactorialV2(n - 1);
}

void task7()
{
	int number;
	std::cout << "Podaj liczbe: ";
	std::cin >> number;

	long long factorial = calculateFactorialV2(number);
	std::cout << "Silnia jest r�wna " << factorial << std::endl;
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	/*
	task1();

	task2("Witaj �wiecie!");
	std::string text = "Uczy� si� programowania!";
	task2(text);

	task3("Jan", 11);
	task3("Ala", 19);

	int number = 5;
	std::cout << "Zmienna number w funkcji main: " << number << "\n";
	task4(number);
	std::cout << "Zmienna number w funkcji main: " << number << "\n";
	task4(9);
	const int NUMBER = 9;
	task4(NUMBER);

	int number = 5;
	const int NUMBER = 9;
	std::cout << "Zmienna number w funkcji main: " << number << "\n";
	task5(number);
	std::cout << "Zmienna number w funkcji main: " << number << "\n";
	//task5(9); //B��d - przez parametr mo�na przekaza� tylko zmienn�.
	//task5(NUMBER); //B��d - przez parametr mo�na przekaza� tylko zmienn�.

	int numberFromUser = 5;
	task6_GetNumber(numberFromUser);
	std::cout << "U�ytkownik podaj liczbe " << numberFromUser << "\n";

	int firstNumber, secoundNumber, sum;
	firstNumber = 9;
	secoundNumber = 1;
	sum = sumOfNumbers(firstNumber, secoundNumber);
	std::cout << sum << "\n";

	task7();
	*/

}
