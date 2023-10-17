#include <iostream>

//czy liczba jest dodatnia
void task1()
{
	int numberFromUser;

	std::cout << "Podaj liczbe: ";
	std::cin >> numberFromUser;
	
	if (numberFromUser > 0)
	{
		std::cout << "Liczba jest dodatnia\n";
	}
	else
	{
		std::cout << "Liczba jest ujemna\n";
	}
	
	if (numberFromUser == 0)
		std::cout << "0 nie jest ani + ani -\n";
}

//czy liczba jest parzysta
void task2()
{
	int numberFromUser;

	std::cout << "Podaj liczbe: ";
	std::cin >> numberFromUser;
	
	int rest = numberFromUser % 2; // % reszta z dzielenia
	
	if (rest != 0)
		std::cout << "Podana liczba jest nieparzysta!\n";
	else
		std::cout << "Podana liczba jest parzysta!\n";
}

//Napisz program ktory wyswietli informacje czy liczba jest z zakresu <1 , 10)
void task3()
{
	int number;

	std::cout << "Podaj liczbe: ";
	std::cin >> number;

	//wersja 1
	if (number >= 1)
	{
		if (number < 10)
		{
			std::cout << "Liczba znajduje sie w zakresie\n";
		}
		else
		{
			std::cout << "Liczba nie znajduje sie w zakresie\n";
		}
	}
	else
		std::cout << "Liczba nie znajduje sie w zakresie\n";

	//wersja 2
	if (number < 10 && number >= 1)
	{
		std::cout << "Liczba znajduje sie w zakresie\n";
	}
	else
	{
		std::cout << "Liczba nie znajduje sie w zakresie\n";
	}

	//wersja 3
	if (number < 1 || number >= 10)
	{
		std::cout << "Liczba znajduje sie w zakresie\n";
	}
	else
	{
		std::cout << "Liczba nie znajduje sie w zakresie\n";
	}

	//wersja 4
	if (!(number < 10 && number >= 1))
	{
		std::cout << "Liczba nie znajduje sie w zakresie\n";
	}
	else
	{
		std::cout << "Liczba znajduje sie w zakresie\n";
	}
}

//dzielenie 2 liczb
void task4()
{
	int firstNumber, secondNumber, quo;
	std::cout << "Podaj 1 liczbe: ";
	std::cin >> firstNumber;
	std::cout << "Podaj 2 liczbe: ";
	std::cin >> secondNumber;

	if (secondNumber != 0)
	{
		quo = firstNumber / secondNumber;
		std::cout << "Wynuik = " << quo << "\n";
	}
	else
	{
		std::cout << "Nie dzielimy przez 0!\n";
	}
}

//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe. Wyœwietl odpowiedni komunikat.
void task5()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj 1 liczbe: ";
	std::cin >> firstNumber;
	std::cout << "Podaj 2 liczbe: ";
	std::cin >> secondNumber;

	if (firstNumber == secondNumber)
		std::cout << "Liczby sa rowne.\n";
	else
		std::cout << "Liczby sa rozne.\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia. Wyœwietl odpowiedni komunikat.
void task6()
{
	int age;
	std::cout << "Podaj wiek liczbe: ";
	std::cin >> age;
	
	if (age < 18)
		std::cout << "Jestes niepelnoletni.\n";
	else
		std::cout << "Jests pelnoletni.\n";
}

// Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.
void task7()
{
	int number;
	std::cout << "Podaj liczbe od 1 do 7: ";
	std::cin >> number;
	
	if (number >= 1 && number <= 7)
	{
		if (number == 1)
			std::cout << "Poniedzialek\n";
		if(number == 2)
			std::cout << "Wtorek\n";
		if (number == 3)
			std::cout << "Sroda\n";
		if(number == 4)
			std::cout << "Czwartek\n";
		if(number == 5)
			std::cout << "Piatek\n";
		if(number == 6)
			std::cout << "Sobota\n";
		if(number == 7)
			std::cout << "Niedziela\n";
	}
	else
		std::cout << "Nie podales liczby od 1 do 7\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i wyœwietli wiêksz¹ z nich.
void task8()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj 1 liczbe: ";
	std::cin >> firstNumber;
	std::cout << "Podaj 2 liczbe: ";
	std::cin >> secondNumber;

	if (firstNumber > secondNumber)
		std::cout << "1 liczba jest wieksza.\n";
	else
		std::cout << "2 liczba jest wieksza.\n";
}

int main()
{
	task8();
}

/*
Operatory warunkowe:
	< - wiekszy
	> - mniejszy
	<= - wiekszy rowny
	== - rowny
	!= - rozny

	&& - AND
	|| - OR
	! - NOT

	a	b	a&&b	a||b	!a		a XOR b
	F	F	F		 F		 T			F		
	F	T	F		 T		 T			T
	T	F	F		 T		 F			T
	T	T	T		 T		 F			F


*/

/*
*.Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹. Wyœwietl wynik.
*. 
*.
*. 
*. 
*. Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny. Wyœwietl odpowiedni komunikat.
*. Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.
*. Napisz program, który poprosi u¿ytkownika o podanie masy cia³a (w kilogramach) i wzrostu (w metrach). Na podstawie tych danych oblicz wskaŸnik BMI (Body Mass Index) i wyœwietl odpowiedni komunikat informuj¹cy o stanie zdrowia.
*. Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci trzech odcinków i sprawdzi, czy mo¿na zbudowaæ z nich trójk¹t. Wyœwietl odpowiedni komunikat.
*. Napisz program, który poprosi u¿ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, jeœli jest to mo¿liwe. Wyœwietl wynik lub odpowiedni komunikat, jeœli liczba jest ujemna.
*. Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
*. 
*/