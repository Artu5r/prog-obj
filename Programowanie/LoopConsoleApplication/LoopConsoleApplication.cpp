#include <iostream>

//Napisz program ktory pobierze od uzytkownika liczbe dodatnia. zabezpiecz program przed podaniem liczazby ujemnej.
void task1()
{
	float number;
	std::cout << "Podaj liczbê doodatni¹:\n";
	std::cin >> number;

	do
	{
		std::cout << "Podaj liczbê doodatni¹:\n";
		std::cin >> number;
	} while (number <= 0);

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << number << "\n";
}

//Napisz program który losuje liczbe i trzeba ja zgadnac.
void task2()
{
	int numberFromUser, 
}

int main()
{
	task2();
}
