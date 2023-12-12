#include <iostream>

//Napisz program ktory pobierze znak
void task1()
{
	char characterFromUser;
	std::cout << "Podaj znak: ";
	std::cin >> characterFromUser;
	std::cout << characterFromUser;
}

//Napisz program, który wczyta znak z klawiatury 
//i sprawdzi czy to ma³a litera alfabetu.
void task2()
{
	char characterFromUser;
	std::cout << "Podaj znak: ";
	std::cin >> characterFromUser;

	//if(characterFromUser >= 97 && characterFromUser <= 122)
	if (characterFromUser >= 'a' && characterFromUser <= 'z')
		std::cout << "Ma³a litera alfabetu\n.";
	else
		std::cout << "Nie ma³a litera alfabetu\n.";

	/*char x = 'a';
	std::cout << x;
	x = 'g' + 1;
	std::cout << x;

	*/

}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task2();
}

/*
Typy znakow:
* char - 1 bajt ca³owito liczbowa <-128; 127>


*/