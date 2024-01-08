//01000001 01110010 01110100 01110101 01110010 01001011
#include <iostream>

/*
**Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym. Nastêpnie skonwertuj tê liczbê na system dwójkowy (binarny) i wyœwietl wynik.
*
*
*
*
*
*

* Program który na wejœciu przyjmie równanie a na wyjœciu da równanie w odwrotnej notacji polskiej ONP. Np. na wejœciu 2+3*4 na wyjœcu da 234*+
* Program, który na wejœciu przyjmie  a na wyjœciu wyœwietli wynik rówania.
*
*/

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
		std::cout << "Ma³a litera alfabetu.\n";
	else
		std::cout << "Nie ma³a litera alfabetu.\n";

	/*char x = 'a';
	std::cout << x;
	x = 'g' + 1;
	std::cout << x;

	*/
}

//Napisz program, który poprosi o podanie imienia i sie przywita.
void task3()
{
	std::string username = "";
	std::cout << "Podaj imie: ";
	std::cin >> username;
	std::cout << "Witaj " << username << "\n";
}

//Napisz program, który sprawdzi czy podane has³o jest poprawne
//np. jesli haslo = abc123 wyswietli poprawne has³o.
//jesli nie wyswietli niepoprawne has³o.
void task4()
{
	std::string password;
	std::cout << "Podaj has³o: ";
	std::cin >> password;

	if (password == "abc123")
		std::cout << "Haslo poprawne\n";
	else
		std::cout << "Haslo niepoprawne\n";
}

//Napisz program, który wczyta ³añcuch znaków i policzy ile jest ma³ych liter 'a'.
void task5()
{
	std::string textFromUser;
	std::cout << "Podaj ³añcuch znaków\n";
	std::cin >> textFromUser;

	int numerOfCharacters = 0;

	/*std::cout << "Pierwszy znak to " << textFromUser[0] << "\n";
	textFromUser[1] = 'x';
	std::cout << "Iloœæ znakow " << textFromUser.length() << "\n";*/

	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a')
			numerOfCharacters++;
	}
	std::cout << "Jest " << numerOfCharacters << " liter 'a'\n";
}

//Napisz program, który bêdzie prosi³ o has³o. Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
void task6()
{
	std::string password;
	std::cout << "Podaj has³o: ";
	std::cin >> password;

	do
	{
		std::cout << "Podaj has³o: ";
		std::cin >> password;
		if (password == "abc123")
			std::cout << "Haslo poprawne\n";
		else
			std::cout << "Haslo niepoprawne\n";

	} while (password != "abc123");

}

//01000001 01110010 01110100 01110101 01110010 01001011
//Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
void task7()
{
	std::string characterFromUser;
	std::cout << "Podaj cig znaków: ";
	std::cin >> characterFromUser;

	//samog³oska
	int numberOfVowel = 0;
	//spó³g³oska
	int numberOfConsonant = 0;

	for (int i = 0; i < characterFromUser.length(); i++)
	{
		if (characterFromUser[i] == 'a'
			|| characterFromUser[i] == '¹'
			|| characterFromUser[i] == 'e'
			|| characterFromUser[i] == 'ê'
			|| characterFromUser[i] == 'i'
			|| characterFromUser[i] == 'o'
			|| characterFromUser[i] == 'u'
			|| characterFromUser[i] == 'y')
			numberOfVowel++;
		else if (characterFromUser[i] >= 'a' && characterFromUser[i] <= 'z')
			numberOfConsonant++;
	}
	std::cout << "W tym ciagu jest " << numberOfVowel << " samog³osek i " << numberOfConsonant << " spó³g³osek\n";
}

//Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem
//(czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
void task8()
{
	int t = 0;
	std::string characterFromUser;
	std::string reverse;
	std::cout << "Podaj ciag znakow: ";
	std::cin >> characterFromUser;

	//wersja 1
	/*for (int i = characterFromUser.length() - 1; i >= 0; i--)
	{
		reverse = reverse + characterFromUser[i];
	}

	if (characterFromUser == reverse)
		std::cout << "Text jest palindromem\n";
	else
		std::cout << "Text nie jest palindromem\n";*/

		//wersja 2
		/*int t = 0;
			std::string textFromUser;
			std::string reverse;
			std::cout << "Podaj ciag znakow: ";
			std::cin >> textFromUser;

			bool isPalindrome = true;

			for (int signFromBegining = 0, signFormEnd = textFromUser.length() - 1; signFromBegining < signFormEnd; signFromBegining++, signFormEnd--)
			{
				if (textFromUser[signFromBegining] != textFromUser[signFormEnd])
				{
					isPalindrome = false;
					break;
				}
			}

			if (isPalindrome)
				std::cout << "Ten tekst jest palindromem\n";
			else
				std::cout << "Ten tekst nie jest palindromem\n";*/
}

//Program implementuj¹cy algorytm szyfrowania Cezara 
//(proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).
void task10()
{
	std::string text;
	std::cout << "Podaj ci¹g: ";
	std::cin >> text;

	for (int i = 0; i < text.length(); i++)
	{
		text[i] += 3;
	}
	std::cout << text;
}

//Program wyci¹gaj¹cy informacje z numeru PESEL
void task11()
{
	std::string pesel;
	std::string year;
	std::string mounth;
	std::string day;

	std::cout << "Podaj pesel: ";
	std::cin >> pesel;

	if (pesel.length() == 11)
	{
		year += pesel[0];
		year += pesel[1];
		mounth += pesel[2];
		mounth += pesel[3];
		day += pesel[4];
		day += pesel[5];

		std::cout << "Rok = " << year << "\n";
		std::cout << "Miesi¹c = " << mounth << "\n";
		std::cout << "Dzieñ = " << day << "\n";
	}
}

//Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami
//(czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
void task9()
{
	std::string firstText;
	std::string secoundText;
	std::cout << "Podaj 1 ci¹g: ";
	std::cin >> firstText;
	std::cout << "Podaj 1 ci¹g: ";
	std::cin >> firstText;

	for (int i = 0; i < firstText.length(); i++)
	{
		for (int j = 0; j < secoundText.length(); j++)
		{
			if (firstText[i] == secoundText[j])
				;
		}
	}
}

//Algorytm szyfrowania AtBash Cipher
//algorytm szyfruj¹cy, w którym ka¿da litera jest zamieniana na literê z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
void task12()
{
	std::string text;
	std::string textCrypted = "";
	char tmp;
	std::cout << "Podaj text: ";
	std::cin >> text;

	for (int i = 0; i < text.length(); i++)
	{
		tmp = text[i];
		textCrypted = textCrypted + tmp;
	}
	std::cout << textCrypted;
}


int main()
{
	setlocale(LC_CTYPE, "polish");

	task12();
}

/*
Typy znakow:
* char - 1 bajt ca³owito liczbowa <-128; 127> 'a'
* std::string - ciag znakow "abc123"


	9 12 niedokoncz
*/