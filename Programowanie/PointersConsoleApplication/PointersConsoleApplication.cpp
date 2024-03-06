#include <iostream>

void task1()
{
	int firstNumber = 20;
	int secondNumber = 43;
	int tab[2] = { 15, 52 };

	std::cout << "Wartosc pierwszej zmiennej " << firstNumber << "\n";
	std::cout << "Adres pierwszej zmiennej " << &firstNumber << "\n";
	std::cout << "Wartosc drugiej zmiennej " << secondNumber << "\n";
	std::cout << "Adres drugiej zmiennej " << &secondNumber << "\n";
	*(&secondNumber) = 47;
	std::cout << "Wartosc drugiej zmiennej " << secondNumber << "\n";

	std::cout << "Zawartosc zerowej komorki " << tab[0] << "\n";
	std::cout << "Zawartosc pierwszej komorki " << tab[1] << "\n";
	std::cout << "Adres zerowej komorki " << &tab[0] << "\n";
	std::cout << "Adres pierwszej komorki " << &tab[1] << "\n";
	std::cout << "Adres tablicy  " << tab << "\n";
	std::cout << "Adres tablicy  " << &tab << "\n";
}

void task2()
{

}

int main()
{

}
