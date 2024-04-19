#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

/*
Zadanie: Tworzenie prostego kalkulatora

Napisz program, który będzie działał jako prosty kalkulator
i będzie umożliwiał użytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dwóch liczbach.

Instrukcje:

Poproś użytkownika o podanie dwóch liczb oraz wybór operacji (dodawanie, odejmowanie, mnożenie lub dzielenie).
W zależności od wyboru użytkownika, wykonaj odpowiednią operację arytmetyczną.
Wyświetl wynik operacji.
Przykładowe działanie programu:

Prosty Kalkulator
-----------------
1. Dodawanie
2. Odejmowanie
3. Mnożenie
4. Dzielenie
0. Koniec programu

Wybierz operację: 3
Podaj pierwszą liczbę: 5
Podaj drugą liczbę: 3

Wynik mnożenia: 15
*/

/*
ZADANIE
Konwersja temperatury

Napisz program, który będzie konwertować temperaturę pomiędzy skalami: Celsiusza, Fahrenheita i Kelvina.

Instrukcje:

Poproś użytkownika o wybór jednostki, z której chce dokonać konwersji (C - Celsiusz, F - Fahrenheit, K - Kelvin).
Poproś użytkownika o podanie temperatury w wybranej jednostce.
Przelicz temperaturę na pozostałe jednostki (z wykorzystaniem odpowiednich wzorów konwersji).
Wyświetl przeliczone temperatury.
Przykładowe działanie programu:

Konwerter Temperatur
---------------------
Wybierz jednostkę temperatury:
1. Celsiusz (C)
2. Fahrenheit (F)
3. Kelvin (K)
Wybór: C

Podaj temperaturę w stopniach Celsiusza: 25

Przeliczona temperatura:
Fahrenheit: 77.0 °F
Kelvin: 298.15 K
*/

/*
ZADANIE
Symulator rzutu kostką

Napisz program, który będzie symulował rzut kostką. Program powinien umożliwiać użytkownikowi wybór rodzaju kostki (np. 6-ścienna, 10-ścienna, 20-ścienna) oraz ilość rzutów. Po wykonaniu rzutów, program powinien wyświetlić wyniki oraz sumę otrzymanych wartości.

Instrukcje:

Poproś użytkownika o wybór rodzaju kostki (np. 6-ścienna, 10-ścienna, 20-ścienna).
Poproś użytkownika o podanie ilości rzutów.
Wykonaj podaną liczbę rzutów wybranej kostką, zapisując wyniki.
Wyświetl otrzymane wyniki oraz sumę otrzymanych wartości.
Przykładowe działanie programu:

Symulator rzutu kostką
-----------------------

Wybierz rodzaj kostki (6/10/20): 10
Ile rzutów chcesz wykonać?: 5

Wyniki rzutów kostką 10-ścienną:
1. Rzut 1: 7
2. Rzut 2: 3
3. Rzut 3: 10
4. Rzut 4: 5
5. Rzut 5: 8

Suma wyników: 33

*/

/*
ZADANIE
Konwerter jednostek

Napisz program konwertujący jednostki miar. Program powinien umożliwiać konwersję między różnymi jednostkami (np. metry na centymetry, kilogramy na funty) oraz obsługiwać różne typy jednostek.

Instrukcje:

Zdefiniuj zestaw jednostek, które chcesz obsługiwać (np. długość: metry, centymetry, cale; masa: kilogramy, funty).
Poproś użytkownika o wybór jednostki wejściowej i jednostki wyjściowej oraz podanie wartości do konwersji.
Przekonwertuj wartość z jednostki wejściowej na jednostkę wyjściową na podstawie ustalonego współczynnika konwersji.
Wyświetl wynik konwersji.
Przykładowe działanie programu:

Konwerter jednostek
-------------------

Wybierz jednostkę wejściową:
1. Metry
2. Centymetry
3. Cale
Wybór: 1

Wybierz jednostkę wyjściową:
1. Metry
2. Centymetry
3. Cale
Wybór: 2

Podaj wartość do konwersji: 5

Wynik konwersji: 500 centymetrów

*/

/* ZAD5 Pojawianie * w losowym miejscu w konsoli*/

//Zad 1
void showMenu()
{
	system("cls");
	std::cout << "Prosty Kalkulator\n";
	std::cout << "-----------------\n";
	std::cout << "1. Dodawanie\n";
	std::cout << "2. Odejmowanie\n";
	std::cout << "3. Mnożenie\n";
	std::cout << "4. Dzielenie\n";
	std::cout << "0. Koniec programu\n";
}

int convertStringToInt(std::string value)
{
	int result = 0;

	for (int i = 0; i < value.length(); i++)
	{
		if (value[i] >= '0' && value[i] <= '9')
			result = result * 10 + (value[i] - '0');
		else
			return -1;
	}

	return result;
}

int getNumber(std::string message)
{
	std::string strChoise;

	std::cout << message;

	std::getline(std::cin, strChoise);

	return convertStringToInt(strChoise);
}

void calculate(int choice, int firstNumber, int secondNumber)
{
	switch (choice)
	{
	case 1:
		std::cout << "Wynik operacji: " << firstNumber + secondNumber << "\n";
		break;
	case 2:
		std::cout << "Wynik operacji: " << firstNumber - secondNumber << "\n";
		break;
	case 3:
		std::cout << "Wynik operacji: " << firstNumber * secondNumber << "\n";
		break;
	case 4:
		if (secondNumber != 0)
			std::cout << "Wynik operacji: " << firstNumber / secondNumber << "\n";
		else
			std::cout << "Nie można dzielić przez zero\n";
		break;
	default:
		break;
	}
}

void task1()
{
	while (true)
	{
		showMenu();

		int choice = getNumber("Wybierz operację:\n");

		if (choice == 0)
			break;

		int firstNumber = getNumber("Podaj pierwszą liczbę:\n");
		int secondNumber = getNumber("Podaj drugą liczbę:\n");

		calculate(choice, firstNumber, secondNumber);
		system("pause");
	}
}

//Zad2
void showMenuTemperature()
{
	system("cls");
	std::cout << "Konwerter Temperatur\n";
	std::cout << "-----------------\n";
	std::cout << "1. Celsiusz (C)\n";
	std::cout << "2. Fahrenheit (F)\n";
	std::cout << "3. Kelvin (K)\n";
	std::cout << "0. Koniec programu\n";
}

int getWhatUnit()
{
	int whatUnit;

	while (true)
	{
		std::cin >> whatUnit;
		if (whatUnit == 1 ||
			whatUnit == 2 ||
			whatUnit == 3)
		{
			break;
		}
		else
		{
			std::cout << "Nie ma takiej opcji\n";
			std::cout << "Podaj ponownie: \n";
		}
	}
	return whatUnit;
}

float getValueTemp(int whatUnit)
{
	float valueBeforeConversion;

	if (whatUnit == 1)
	{
		std::cout << "Podaj temperaturę w stopniach Celsiusza: ";
		std::cin >> valueBeforeConversion;
	}
	else if (whatUnit == 2)
	{
		std::cout << "Podaj temperaturę w stopniach Fahrenheit: ";
		std::cin >> valueBeforeConversion;
	}
	else if (whatUnit == 3)
	{
		std::cout << "Podaj temperaturę w stopniach Kelvin: ";
		std::cin >> valueBeforeConversion;
	}
	else
	{
		std::cout << "Nie ma takiej opcji\n";
		system("pause");
	}

	std::cout << std::endl;
	return valueBeforeConversion;
}

void conversion(float value, int whatUnit)
{
	float valueInCelsiusz;
	float valueInFahrenheit;
	float valueInKelvin;
	if (whatUnit == 1)
	{
		valueInFahrenheit = (value * 1.8) + 32;
		valueInKelvin = value + 273.15;

		std::cout << "Przeliczona temperatura: \n";
		std::cout << "Fahrenheit: " << valueInFahrenheit << "°F\n";
		std::cout << "Kelvin: " << valueInKelvin << "K\n";
	}
	else if (whatUnit == 2)
	{
		valueInCelsiusz = (value - 32) / 1.8;
		valueInKelvin = (value + 459.67) * 5 / 9;

		std::cout << "Przeliczona temperatura: \n";
		std::cout << "Celsiusz: " << valueInCelsiusz << "°C\n";
		std::cout << "Kelvin: " << valueInKelvin << "K\n";
	}
	else if (whatUnit == 3)
	{
		valueInCelsiusz = value - 273.15;
		valueInFahrenheit = (value - 273.15) * 1.8 + 32;

		std::cout << "Przeliczona temperatura: \n";
		std::cout << "Celsiusz: " << valueInCelsiusz << "°C\n";
		std::cout << "Fahrenheit: " << valueInFahrenheit << "°F\n";
	}
	std::cout << std::endl;
}

void task2()
{
	while (true)
	{
		showMenuTemperature();

		int whatUnit = getWhatUnit();

		if (whatUnit == 0)
			break;

		float valueBeforeConversion = getValueTemp(whatUnit);

		conversion(valueBeforeConversion, whatUnit);

		system("pause");
		break;
	}
}

//Zad3
void showMenuCube()
{
	system("cls");
	std::cout << "Symulator rzutu kostką\n";
	std::cout << "-----------------\n";
	std::cout << "\n";
	std::cout << "Wybierz rodzaj kostki (6/10/20): \n";
}

void throwsCube(short typeOfCube, short howManyThrows)
{
	srand(time(NULL));

	std::cout << "Wyniki rzutów kostką 10-ścienną:\n";

	short drawnNumber;
	for (int i = 1; i < howManyThrows + 1; i++)
	{
		drawnNumber = rand() % (typeOfCube - 1 + 1) + 1;
		std::cout << i << ". Rzut " << i << ": " << drawnNumber << "\n";
	}
	std::cout << "\n";
	system("pause");
}

void task3()
{
	while (true)
	{
		showMenuCube();

		short typeOfCube;
		std::cin >> typeOfCube;

		std::cout << "Ile rzutów chcesz wykonać?: \n";

		short howManyThrows;
		std::cin >> howManyThrows;

		if (typeOfCube == 6 ||
			typeOfCube == 10 ||
			typeOfCube == 20)
		{
			throwsCube(typeOfCube, howManyThrows);
		}
		else
		{
			std::cout << "Zły wybór!";
			system("pause");
			continue;
		}
		break;
	}
}

//Zad4
void showMenuConverter()
{
	system("cls");
	std::cout << "Konwerter jednostek\n";
	std::cout << "-----------------\n";
	std::cout << "\n";
	std::cout << "Wybierz jednostkę wejściową:\n";
	std::cout << "1. Metry\n";
	std::cout << "2. Centymetry\n";
	std::cout << "3. Cale\n";
	std::cout << "\n";
}

void showMenuConverterOut()
{
	std::cout << "Wybierz jednostkę wyjściową:\n";
	std::cout << "1. Metry\n";
	std::cout << "2. Centymetry\n";
	std::cout << "3. Cale\n";
}

short getWhichUnit()
{
	int whichUnit;
	std::cout << "Wybór: ";

	while (true)
	{
		std::cin >> whichUnit;

		if (whichUnit == 1 ||
			whichUnit == 2 ||
			whichUnit == 3)
		{
			break;
		}
		else
		{
			std::cout << "Podałeś złą opcje!\n";
			std::cout << "Wybierz ponownie: ";
			continue;
		}
	}
	std::cout << "\n";
	return whichUnit;
}

float getValue()
{
	float value;
	std::cout << "Podaj wartość: ";
	std::cin >> value;
	return value;
}

double convertUnit(short fromWhichUnit, short toWhichUnit, double value)
{
	double valueAfterConv;
	if (fromWhichUnit == 1)
	{
		if (toWhichUnit == 1)
			return valueAfterConv = value;
		if (toWhichUnit == 2)
			return valueAfterConv = value * 100;
		if (toWhichUnit == 3)
			return valueAfterConv = value * 39.37;
	}
	else if (fromWhichUnit == 2)
	{
		if (toWhichUnit == 1)
			return valueAfterConv = value * 0.01;
		if (toWhichUnit == 2)
			return valueAfterConv = value;
		if (toWhichUnit == 3)
			return valueAfterConv = value * 0.39;
	}
	else if (fromWhichUnit == 3)
	{
		if (toWhichUnit == 1)
			return valueAfterConv = value * 0.01;
		if (toWhichUnit == 2)
			return valueAfterConv = value * 2.54;
		if (toWhichUnit == 3)
			return valueAfterConv = value;
	}
}

void task4()
{
	while (true)
	{
		showMenuConverter();

		short fromWhichUnit = getWhichUnit();

		showMenuConverterOut();

		short toWhichUnit = getWhichUnit();

		float value = getValue();

		std::cout << "Wynik konwersji: " << convertUnit(fromWhichUnit, toWhichUnit, value) << "\n";
		system("pause");
		break;
	}
}

//zad5
void getConsolResolution(int& consoleWidth, int& consoleHeight)
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

	consoleWidth = csbi.srWindow.Right - csbi.srWindow.Left;
	consoleHeight = csbi.srWindow.Bottom - csbi.srWindow.Top;
}

void setCursor(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void drowSky(int consoleWidth, int consoleHeight)
{
	for (int i = 0; i < 20; i++)
	{
		int x = rand() % (consoleWidth - 1 + 1) + 1;
		int y = rand() % (consoleHeight - 1 + 1) + 1;
		setCursor(x, y);
		std::cout << "*";
		Sleep(100);
		x = rand() % (consoleWidth - 1 + 1) + 1;
		y = rand() % (consoleHeight - 1 + 1) + 1;
		setCursor(x, y);
		std::cout << "*";
	}
}

void clearSky(int consoleWidth, int consoleHeight)
{
	for (int i = 0; i < 10; i++)
	{
		int x = rand() % (consoleWidth - 1 + 1) + 1;
		int y = rand() % (consoleHeight - 1 + 1) + 1;
		setCursor(x, y);
		std::cout << " ";
		Sleep(100);
		x = rand() % (consoleWidth - 1 + 1) + 1;
		y = rand() % (consoleHeight - 1 + 1) + 1;
		setCursor(x, y);
		std::cout << " ";
	}
}

void task5()
{
	srand(time(NULL));
	int consoleWidth = 0;
	int consoleHeight = 0;
	getConsolResolution(consoleWidth, consoleHeight);

	while (true)
	{
		drowSky(consoleWidth, consoleWidth);
		Sleep(500);
		clearSky(consoleWidth, consoleWidth);
	}

}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task5();
}
