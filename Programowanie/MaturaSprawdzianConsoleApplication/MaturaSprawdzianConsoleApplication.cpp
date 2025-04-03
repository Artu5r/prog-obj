#include <iostream>
#include <fstream>

using namespace std;

int reversedLiczba(int n)
{
	int rev = 0;
	while (n > 0)
	{
		rev = rev * 10 + (n % 10);
		n /= 10;
	}
	return rev;
}

void zad4()
{
	ifstream file("liczby.txt");
	int numbers[100];
	for (int i = 0; i < 100; i++)
	{
		file >> numbers[i];
	}
	cout << "zad4\n";
	int revNumbers[100];
	for (int i = 0; i < 100; i++)
	{
		revNumbers[i] = reversedLiczba(numbers[i]);
		cout << revNumbers[i] << endl;
	}
}

void zad4_1()
{
	ifstream file("liczby.txt");
	int numbers[100];
	for (int i = 0; i < 100; i++)
	{
		file >> numbers[i];
	}
	cout << "zad4.1\n";
	int revNumbers[100];
	for (int i = 0; i < 100; i++)
	{
		revNumbers[i] = reversedLiczba(numbers[i]);
	}

	for (int i = 0; i < 100; i++)
	{
		if (revNumbers[i] % 17 == 0)
		{
			cout << revNumbers[i] << endl;
		}
	}
}

void zad4_2()
{
	ifstream file("przyklad.txt");
	int numbers[100];
	for (int i = 0; i < 100; i++)
	{
		file >> numbers[i];
	}
	cout << "zad4.2\n";
	int revNumbers[100];
	for (int i = 0; i < 100; i++)
	{
		revNumbers[i] = reversedLiczba(numbers[i]);
	}
	
	int absoluteValue[100];
	int tmp;

	for (int i = 0; i < 100; i++)
	{
		if (numbers[i] < 0)
		{
			absoluteValue[i] = numbers[i] * -1;
		}
		else
		{
			absoluteValue[i] = numbers[i];
		}

		tmp = revNumbers[i] - absoluteValue[i];
	}
	
}

int main()
{
	zad4_2();
}
