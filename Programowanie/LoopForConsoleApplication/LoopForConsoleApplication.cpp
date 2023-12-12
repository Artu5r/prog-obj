#include <iostream>

//Napisz program, który wyswietli "Hello World" tyle razy ile chce uzutkownik.
void task1()
{
	int howManyTimes;
	std::cout << "Ile razy wypisac Hello World: ";
	std::cin >> howManyTimes;

	for (int i = 0; i != howManyTimes; i++)
	{
		std::cout << "Hello World\n";
	}
}

//Napisz program, który wyswietli liczby parzyste od podanej przy urzytkownika liczby
void task2()
{
	int upperRange;
	std::cout << "Podaj gorna granice do wyswietlenia: ";
	std::cin >> upperRange;


	for (int i = 0; i <= upperRange; i += 2)
	{
		std::cout << i << "\n";
	}
}

//Program obliczający sumę liczb od 1 do 100
void task3()
{
	int sum = 0;
	int i;

	for (i = 0; i < 100; i++)
	{
		sum += i;
	}
	std::cout << sum << "\n";
}

//Program sprawdzający czy podana liczba jest liczbą doskonałą (czyli taką,
//  której suma dzielników (z wyłączeniem samej siebie) jest równa danej liczbie,
//  np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
void task4()
{
	int number, i;
	int sum = 0;
	std::cout << "Podaj liczbe: ";
	std::cin >> number;

	for (i = 1; i < number; i++)
	{
		if (number % i == 0)
			sum = sum + i;
	}

	if (sum == number)
		std::cout << "Liczba jest doskonala\n";
	else
		std::cout << "Liczba nie jest doskonala\n";
}

//Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task5()
{
	int number, i;

	for (i = 1; i < 10; i++)
	{
		number = i * i;
		std::cout << number << "\n";
	}
}

//Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
void task6()
{
	int number, i;

	for (i = 0; i <= 9; i++)
	{
		std::cout << "1x" << i << " = ";
		number = 1 * i;
		std::cout << number << "\n";
	}
}

//Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task7()
{
	int number;
	std::cout << "Liczby podzielneprzez 3 z zakresu 1 - 100:\n";

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			std::cout << i << "\n";
	}
}

//Program obliczający sumę kwadratów liczb od 1 do 10
void task8()
{
	int number;
	int sum = 0;

	for (int i = 1; i <= 10; i++)
	{
		number = i * i;
		sum = sum + number;
	}
	std::cout << "Suma kwadratow liczb 1 - 10 = " << sum << "\n";
}

//Program obliczający n!  (4! = 1*2*3*4)
void task9()
{
	int number;
	int x = 0;
	int result = 1;
	std::cout << "Podaje liczbe: ";
	std::cin >> number;

	for (int i = 1; i <= number; i++)
	{
		x++;
		result = result * x;
	}
	std::cout << "n! = " << result;
}

//Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.) 4! = 1*2*3*4
void task10()
{
	long long tmpNumber;
	long long result;
	long long whatNumber = 0;

	for (int i = 1; i <= 10; i++)
	{
		tmpNumber = 1;
		result = 1;
		whatNumber++;

		for (int j = 1; j < whatNumber; j++)
		{
			tmpNumber++;
			result = result * tmpNumber;
		}
		std::cout << whatNumber << "! = " << result << "\n";
	}
}


//Program, kóry wyświetli poniższe cztery zwory:
//	****       54321        121212        122333
//	***        65432        212121        223334444
//	**         76543        121212        333444455555
//	*          87654        212121        444455555666666
void task12()
{
	const int NUM_OF_LINES = 4;

	for (int lineNumebr = 1; lineNumebr <= NUM_OF_LINES - lineNumebr; lineNumebr++)
	{
		for (int i = 0; i < NUM_OF_LINES; i++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}

	std::cout << "\n";
	std::cout << "\n";

	
}

//Rozkład liczby na czynniki pierwsze
void task11()
{
	int numFromUser;
	std::cout << "Podaj liczbe: ";
	std::cin >> numFromUser;
	int tmpNumFromUser = numFromUser;

}

int main()
{
	task12();
	task11();

}


/*
*
*
*
*
*
* Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu
(ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)



* Oblicz sumę szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Jeżeli się nie pomylisz,
to dla odpowiednio dużej wartości n po przemnożeniu jej przez 6 i spierwiastkowaniu
powinieneś otrzymać wartość liczby π (suma szeregu jest równa π2/6). Zwróć uwagę,
że pierwsza wartość indeksu to 1, a nie 0. Dokładność obliczeń można sprawdzić porównując
z wartością odczytaną z własności Math.PI.

* 
*/