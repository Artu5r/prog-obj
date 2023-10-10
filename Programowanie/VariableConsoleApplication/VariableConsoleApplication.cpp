//01100001 01110010 01110100 01110101 01110010 01101011
#include <iostream>

//napisz pragram ktory wczyta liczbe od urzytkownika i wyswietli ja
void task1()
{
	int numFromUser;

	std::cout << "Podaj liczbe: ";
	std::cin >> numFromUser;
	std::cout << "Podales: " << numFromUser;
}

//program obliczjacy srednia arytmetyczna 2 liczb
void task2()
{
	int firstNumber, secoundNumber, average;

	std::cout << "Podaj 1 liczbe ";
	std::cin >> firstNumber;
	std::cout << "\nPodaj 2 liczbe ";
	std::cin >> secoundNumber;
	average = (firstNumber + secoundNumber) / 2;

	std::cout << "\nSrednia to: " << average;
}

//Program obliczaj¹cy pole prostok¹ta.
void task3()
{
	int firtsSide, secoundSide, area;

	std::cout << "Podaj bok a ";
	std::cin >> firtsSide;
	std::cout << "\nPodaj bok b ";
	std::cin >> secoundSide;
	area = firtsSide * secoundSide;
	std::cout << "\nPole = " << area;
}

//Program obliczaj¹cy objêtoœæ sto¿ka.
void task4()
{
	float radius, height, area;

	std::cout << "Podaj promien kola ";
	std::cin >> radius;
	std::cout << "\nPodaj wysokosc ";
	std::cin >> height;
	area = (3.14 * (radius * radius)) * (1 / 3.0 * height);
	std::cout << "\nObj = " << area;
}

//Program obliczaj¹cy pole ko³a.
void task5()
{
	float radius, area;

	std::cout << "Podaj promien kola ";
	std::cin >> radius;
	area = 3.14 * (radius * radius);
	std::cout << "\nObj = " << area;
}

//Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2
void task6()
{
	float numberA, numberB, result;

	std::cout << "Podaj a: ";
	std::cin >> numberA;
	std::cout << "\nPodaj b: ";
	std::cin >> numberB;
	result = (numberA * numberA) + (numberB * numberB);
	std::cout << "\na^2 + b^2 = " << result;
}

//Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
void task7()
{
	float triangleBase, triangleHeight, area;

	std::cout << "Podaj dlugosc podstawy trojkata: ";
	std::cin >> triangleBase;
	std::cout << "\nPodaj wysokosc trojkata: ";
	std::cin >> triangleHeight;
	area = (triangleBase * triangleHeight) / 2;
	std::cout << "\nObj trojkata = " << area;
}

//Program obliczaj¹cy objêtoœæ kuli o promieniu r
void task8()
{
	float radius, area;

	std::cout << "Podaj promien kuli: ";
	std::cin >> radius;
	area = (4 / 3.0) * 3.14 * (radius * radius * radius);
	std::cout << "\nObjetosc kuli = " << area;
}

//Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
void task9()
{
	float baseTrapezeA, baseTrapezeB, height, area;

	std::cout << "Podaj podstawe trapezu a: ";
	std::cin >> baseTrapezeA;
	std::cout << "Podaj podstawe trapezu b: ";
	std::cin >> baseTrapezeB;
	std::cout << "Podaj wysokosc trapezu h: ";
	std::cin >> height;
	area = ((baseTrapezeA + baseTrapezeB) * height) / 2;
	std::cout << "Pole trapezu = " << area;
}

//Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
void task10()
{
	float num1, num2, num3, numWeight1, numWeight2, numWeight3, result;

	std::cout << "Podaj 1 liczbe: ";
	std::cin >> num1;
	std::cout << "Podaj wage liczby 1: ";
	std::cin >> numWeight1;
	std::cout << "Podaj 2 liczbe: ";
	std::cin >> num2;
	std::cout << "Podaj wage liczby 2: ";
	std::cin >> numWeight2;
	std::cout << "Podaj 3 liczbe: ";
	std::cin >> num3;
	std::cout << "Podaj wage liczby 3: ";
	std::cin >> numWeight3;

	result = ((num1 * numWeight1) + (num2 * numWeight2) + (num3 * numWeight3)) / (numWeight1 + numWeight2 + numWeight3);

	std::cout << "\nSrednia warzona = " << result << "\n";
}

//Stwórz program, który pobiera od u¿ytkownika d³ugoœæ w metrach i przelicza j¹ na centymetry i milimetry, wyœwietlaj¹c wynik.
void task11()
{
	float numInMeters, numInCm, numInMm;

	std::cout << "Podaj dlugosc w metrach: ";
	std::cin >> numInMeters;
	numInCm = numInMeters * 100;
	numInMm = numInMeters * 1000;
	std::cout << "Dlugosc w cm = " << numInCm;
	std::cout << "\nDlugosc w mm = " << numInMm << "\n";
}

//Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.
void task12()
{
	float moneyFromUser, conversion, exchangeRate;

	std::cout << "Podaj kwote: ";
	std::cin >> moneyFromUser;
	std::cout << "Podaj kurs wymiany dla 1 = ";
	std::cin >> conversion;
	exchangeRate = moneyFromUser * conversion;
	std::cout << "\nPrzeliczona kwota wynosi " << exchangeRate << "\n";
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	task12();
}


/*
Algorytm - skoñczony zbiór instrukcji, który rozwi¹zuje zadany problem , okreœla te¿ kolejnoœæ wykonywania instrukcji
Zapis algorytmu:
	-rysunki
	-opis s³owny
	-w punktach
	-schemat blokowy
	-kod Ÿród³owy danego jezyka
	-pseudokod
 //01100001 01110010 01110100 01110101 01110010 01101011
Zmienna - pewien obszar w pamiêci operacyjnej,
w kórej mo¿na w danej chwili przechowaæ 1 dan¹

Instrukcja deklaracji zmiennej:
typ_zmiennej nazwa_zmiennej
Typ zmiennej - wielkoœæ obszaru pamiêci, interpretacja ci¹gu bitów
	int - 4 bajtowa liczba ca³kowita ze znakiem <-2 147 482 648, 2 147 483 647>
	short - 2 bajtowa liczba ca³kowita ze znakiem <-32 768, 32 767->
	long - to samo co int
	long long - 8 bajtowa liczba ze znakiem
	unsigned - zmienna bez znaku <0, 2*max + 1>
	float - 4 bajtowa liczba rzeczywista, dokladnosc 6-7 cyfr po przecinku
	double - 8 bajtowa liczba rzeczywista, dokladnosc 15-16 cyfr po przecinku
	long double - 12 bajtowa liczba rzeczywista, dokladnosc 19-20 cyfr po przecinku

Nazwa zmiennnej - nazwa obszaru w pamiêci, identyfikator
Warunki niezbêdne:
	-dozwolone znaki: alfabet angielski aA-zZ, cyfry arabskie 0-9, podkreslenie (_)
	-pierwszy znak nie zaczyna siê od cyfry
	-unikalny
	-nie mo¿e to byæ zarezerwowane z³owo kluczowe danego jezyka

Warunki progrmistów:
	-nazwa zmiennnej powinna oddawaæ charakter przechowywanych danych (wiek_osoby, wiekOsoby)
	-piszemy po angielsku
*/
//01100001 01110010 01110100 01110101 01110010 01101011