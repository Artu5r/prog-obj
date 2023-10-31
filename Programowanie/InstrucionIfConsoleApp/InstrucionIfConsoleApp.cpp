//01000001 01110010 01110100 01110101 01110010 01001011
#include <iostream>
#include <cmath>


//czy liczba jest dodatnia
void task1()
{
	int numberFromUser;

	std::cout << "Podaj liczbe: ";
	std::cin >> numberFromUser;

	if (numberFromUser != 0)
	{
		if (numberFromUser > 0)
		{
			std::cout << "Liczba jest dodatnia\n";
		}
		else
		{
			std::cout << "Liczba jest ujemna\n";
		}
	}
	else
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
	int day;
	std::cout << "Podaj liczbe od 1 do 7: ";
	std::cin >> day;

	if (day >= 1 && day <= 7)
	{
		if (day == 1)
			std::cout << "Poniedzialek\n";
		if (day == 2)
			std::cout << "Wtorek\n";
		if (day == 3)
			std::cout << "Sroda\n";
		if (day == 4)
			std::cout << "Czwartek\n";
		if (day == 5)
			std::cout << "Piatek\n";
		if (day == 6)
			std::cout << "Sobota\n";
		if (day == 7)
			std::cout << "Niedziela\n";
	}
	else
		std::cout << "Nie podales liczby od 1 do 7\n";

	switch (day)
	{
	case 1:
		std::cout << "Podniedzia�ek\n";
		break;
	case 2:
		std::cout << "Wtorek\n";
		break;
	case 3:
		std::cout << "�roda\n";
		break;
	case 4:
		std::cout << "Czwartek\n";
		break;
	case 5:
		std::cout << "Pi�tek\n";
		break;
	case 6:
		std::cout << "Sobota\n";
		break;
	case 0:
	case 7:
		std::cout << "Niedziela\n";
		break;
	default:
		std::cout << "Dzie� niepoprawny\n";
	}
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

	if (year > 0 && year != 0)
	{
		if ((year % 4) == 0 && (year % 100 != 0) || (year % 100 == 0) && (year % 400 == 0))
		{
			std::cout << "Rok jest przestepny\n";
		}
		else
			std::cout << "Rok jest nie przestepny\n";
	}
	else
		std::cout << "Rok nie moze byc ujemny i rowanc sie 0!\n";
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

//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci trzech odcink�w i sprawdzi, czy mo�na zbudowa� z nich tr�jk�t. Wy�wietl odpowiedni komunikat.
void task12()
{
	float firstWeight, secondWeight, thirdWeight;

	std::cout << "Podaj 1 dlugosc: ";
	std::cin >> firstWeight;
	std::cout << "Podaj 2 dlugosc: ";
	std::cin >> secondWeight;
	std::cout << "Podaj 3 dlugosc: ";
	std::cin >> thirdWeight;


	if (firstWeight > secondWeight && firstWeight > thirdWeight)
	{
		if ((secondWeight + thirdWeight) > firstWeight)
		{
			std::cout << "Da sie utworzyc trojkata\n";
		}
		else
			std::cout << "Nie da sie utworzyc trojkata\n";
	}
	else
	{
		if (secondWeight > firstWeight && secondWeight > thirdWeight)
		{
			if ((firstWeight + thirdWeight) > secondWeight)
			{
				std::cout << "Da sie utworzyc trojkata\n";
			}
			else
				std::cout << "Nie da sie utworzyc trojkata\n";
		}
		else
		{
			if ((firstWeight + secondWeight) > thirdWeight)
			{
				std::cout << "Da sie utworzyc trojkata\n";
			}
			else
				std::cout << "Nie da sie utworzyc trojkata\n";
		}
	}
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, je�li jest to mo�liwe. Wy�wietl wynik lub odpowiedni komunikat, je�li liczba jest ujemna.
void task13()
{
	float firstNum, result;

	std::cout << "Podaj liczbe dodatnia: ";
	std::cin >> firstNum;

	if (firstNum > 0)
	{
		result = sqrt((float)firstNum);;
		std::cout << "Pierwiastek z tej liczy = " << result << '\n';
	}
	else
		std::cout << "Nie podales liczby dodatniej\n";
}

//Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
void task14()
{
	int day, month, year;

	std::cout << "Podaj rok: ";
	std::cin >> year;
	std::cout << "Podaj miesiac: ";
	std::cin >> month;
	std::cout << "Podaj dzien: ";
	std::cin >> day;

	if (year > 0 && year != 0)
	{
		if (month > 0 && month <= 12)
		{
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			{
				if (day > 0 && day <= 31)
				{
					//std::cout << "31\n";
					std::cout << "Poprawna data\n";
				}
				else
				{
					std::cout << "Podales bledne dane\n";
				}
			}
			else
			{
				if (month == 2)
				{
					if ((year % 4) == 0 && (year % 100 != 0) || (year % 100 == 0) && (year % 400 == 0))
					{
						if (day > 0 && day <= 29)
						{
							//std::cout << "29\n";
							std::cout << "Poprawna data\n";
						}
						else
						{
							std::cout << "Podales bledne dane\n";
						}
					}
					else
					{
						if (day > 0 && day <= 28)
						{
							//std::cout << "28\n";
							std::cout << "Poprawna data\n";
						}
						else
						{
							std::cout << "Podales bledne dane\n";
						}
					}
				}
				else
				{
					if (day > 0 && day <= 30)
					{
						//std::cout << "30\n";
						std::cout << "Poprawna data";
					}
					else
					{
						std::cout << "Podales bledne dane\n";
					}
				}
			}
		}
		else
			std::cout << "Podales bledne dane\n";
	}
	else
	{
		std::cout << "Rok nie moze byc ujemny i rowanc sie 0!\n";
	}
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i obliczy jej warto�� bezwzgl�dn�. Wy�wietl wynik.
void task15()
{
	int num, result;

	std::cout << "Podaj liczbe calkowita: ";
	std::cin >> num;

	if (num > 0)
	{
		result = num;
		std::cout << "Wartosc bezwzgledna = " << result << "\n";
	}
	else
	{
		result = num * -1;
		std::cout << "Wartosc bezwzgledna = " << result << "\n";
	}
}




int main()
{

	setlocale(LC_CTYPE, "polish");

	task1();
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
DRY - don't repeat yourself - nie powtarzaj si�


*/