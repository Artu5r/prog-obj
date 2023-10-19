//01000001 01110010 01110100 01110101 01110010 01001011
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

//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i sprawdzi, czy s� one r�wne. Wy�wietl odpowiedni komunikat.
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

//Napisz program, kt�ry poprosi u�ytkownika o podanie wieku i sprawdzi, czy osoba jest pe�noletnia. Wy�wietl odpowiedni komunikat.
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
//01000001 01110010 01110100 01110101 01110010 01001011
// Napisz program, kt�ry poprosi u�ytkownika o podanie liczby od 1 do 7 i wy�wietli odpowiadaj�cy mu dzie� tygodnia.
void task7()
{
	int number;
	std::cout << "Podaj liczbe od 1 do 7: ";
	std::cin >> number;

	if (number >= 1 && number <= 7)
	{
		if (number == 1)
			std::cout << "Poniedzialek\n";
		if (number == 2)
			std::cout << "Wtorek\n";
		if (number == 3)
			std::cout << "Sroda\n";
		if (number == 4)
			std::cout << "Czwartek\n";
		if (number == 5)
			std::cout << "Piatek\n";
		if (number == 6)
			std::cout << "Sobota\n";
		if (number == 7)
			std::cout << "Niedziela\n";
	}
	else
		std::cout << "Nie podales liczby od 1 do 7\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i wy�wietli wi�ksz� z nich.
void task8()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj 1 liczbe: ";
	std::cin >> firstNumber;
	std::cout << "Podaj 2 liczbe: ";
	std::cin >> secondNumber;

	if (firstNumber > secondNumber)
		std::cout << "Pierwsza liczba jest wieksza.\n";
	else
		std::cout << "Dr�ga liczba jest wieksza.\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie roku i sprawdzi, czy jest to rok przest�pny. Wy�wietl odpowiedni komunikat.
void task9()
{
	//ostatni 2020
	int year;

	std::cout << "Podaj rok XXXX: ";
	std::cin >> year;

	if ((year % 4) == 0 && (year % 100 != 0) || (year % 100 == 0) && (year % 400 == 0))
	{
		std::cout << "Rok jest przestepny\n";
	}
	else
		std::cout << "Rok jest nie przestepny\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona podzielna zar�wno przez 3, jak i przez 5. Wy�wietl odpowiedni komunikat.
void task10()
{
	int num;

	std::cout << "Podaj liczbe: ";
	std::cin >> num;

	if (num % 3 == 0 && num % 5 == 0)
		std::cout << "Liczba jest podzielna przez 3 i 5\n";
	else
		std::cout << "Liczba nie jest podzielna przez 3 i 5\n";
}

// Napisz program, kt�ry poprosi u�ytkownika o podanie masy cia�a (w kilogramach) i wzrostu (w metrach). Na podstawie tych danych oblicz wska�nik BMI (Body Mass Index)//01000001 01110010 01110100 01110101 01110010 01001011 i wy�wietl odpowiedni komunikat informuj�cy o stanie zdrowia.
void task11()
{
	float weight, height, bmi;

	std::cout << "Podaj wage: ";
	std::cin >> weight;
	std::cout << "Podaj wzrost w m: ";
	std::cin >> height;

	bmi = weight / (height * height);
	std::cout << "BMI = " << bmi << "\n";
	
	if (bmi < 18.5)
		std::cout << "Stan zdrowia = niedowaga\n";
	if (bmi >= 18.5 && bmi < 25)
		std::cout << "Stan zdrowia = norma\n";
	if (bmi >= 25 && bmi < 30)
		std::cout << "Stan zdrowia = nadwaga\n";
	if (bmi >= 30 && bmi < 35)
		std::cout << "Stan zdrowia = otylosc\n";
	if (bmi > 35)
		std::cout << "Stan zdrowia = otylosc kliniczna\n";
}



int main()
{
	setlocale(LC_CTYPE, "polish");

	task11();
}

/*
//01000001 01110010 01110100 01110101 01110010 01001011
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
*.Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i obliczy jej warto�� bezwzgl�dn�. Wy�wietl wynik.
*.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci trzech odcink�w i sprawdzi, czy mo�na zbudowa� z nich tr�jk�t. Wy�wietl odpowiedni komunikat.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, je�li jest to mo�liwe. Wy�wietl wynik lub odpowiedni komunikat, je�li liczba jest ujemna.
*. Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
*.
*/