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

int main()
{
	setlocale(LC_CTYPE, "polish");

	/*task1();
	task2("Witaj �wiecie!");
	std::string text = "Uczy� si� programowania!";
	task2(text);*/

	task3("Jan", 11);
	task3("Ala", 19);
}
