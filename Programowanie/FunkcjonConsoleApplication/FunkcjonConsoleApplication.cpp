//01100001 01110010 01110100 01110101 01110010 01101011
#include <iostream>

/*
Funkcja
	- zbiór instrukcji realizuj¹cy zadanie
	- podprogram

Budowa funkcji:
	* nag³ówek funkcji
	* cia³o funkcji

Nag³ówek:
	typ_zwracanej_danej nazwa_funkcji(parametr)
*/

//Napisz funkcje która wyœwietli na konsoli "Hello World!"
void task1()
{
	std::cout << "Hello World!\n";
}

//Napisz funkcje uniwersaln¹ która pozwala wyœwietliæ dowolny tekst.
void task2(std::string textParam)
{
	std::cout << textParam << "\n";
}

//Napisz funkcje uniwersaln¹, która wyœwietli imie oraz informacjie czy ktoœ jest pe³noletni.
void task3(std::string name, int age)
{
	std::cout << name << "\n";
	if (18 >= age)
		std::cout << "jest niepe³noletni\n";
	else
		std::cout << "jest pe³noletni\n";
}

//Napisz program, który przetestuje zachowanie siê przekazywanych danych przez parametr.
void task4(int number)
{
	std::cout << "Zmienna number w funkcji task4: " << number << "\n";
	number--;
	std::cout << "Zmienna number w funkcji task4: " << number << "\n";
}

//Napisz program, który wykorzysta przekazywanie parametru przez referencje.
void task5(int& number)
{
	std::cout << "Zmienna number w funkcji task5: " << number << "\n";
	number--;
	std::cout << "Zmienna number w funkcji task5: " << number << "\n";
}

//Napisz funkcje, która pobierze od u¿ytkownika liczbê.
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

//Napisz, funkcje która obliczy wartoœæ œilni i j¹ zwróci.
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
	std::cout << "Silnia jest równa " << factorial << std::endl;
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	/*
	task1();

	task2("Witaj œwiecie!");
	std::string text = "Uczyæ siê programowania!";
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
	//task5(9); //B³¹d - przez parametr mo¿na przekazaæ tylko zmienn¹.
	//task5(NUMBER); //B³¹d - przez parametr mo¿na przekazaæ tylko zmienn¹.

	int numberFromUser = 5;
	task6_GetNumber(numberFromUser);
	std::cout << "U¿ytkownik podaj liczbe " << numberFromUser << "\n";

	int firstNumber, secoundNumber, sum;
	firstNumber = 9;
	secoundNumber = 1;
	sum = sumOfNumbers(firstNumber, secoundNumber);
	std::cout << sum << "\n";

	task7();
	*/

}
