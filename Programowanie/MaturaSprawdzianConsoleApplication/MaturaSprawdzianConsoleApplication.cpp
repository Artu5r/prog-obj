#include <iostream>
#include <fstream>
#include <vector>

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

	cout << "zad4.0\n";
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

	int number = 0;
	int maxDifference = 0;
	int numberWithMaxDifference = 0;

	for (int i = 0; i < 100; i++)
	{
		int difference = numbers[i] - revNumbers[i];
		if (difference < 0)
		{
			difference = -difference;
		}
		if (difference > maxDifference)
		{
			maxDifference = difference;
			numberWithMaxDifference = number;
		}
	}
	cout << numberWithMaxDifference << ", " << maxDifference << "\n";
}

void zad4_3()
{
	ifstream file("liczby.txt");
	int number;

	cout << "zad4.3\n";

	while (file >> number)
	{
		int isPrime = true;
		if (number < 2)
		{
			isPrime = false;
		}
		else
		{
			for (int i = 2; i * i <= number; i++)
			{
				if (number % i == 0)
				{
					isPrime = false;
					break;
				}
			}
		}

		if (!isPrime)
			continue;

		int reversed = 0;
		int temp = number;

		while (temp > 0)
		{
			int digit = temp % 10;
			reversed = reversed * 10 + digit;
			temp /= 10;
		}

		int isReversedPrime = true;
		if (reversed < 2)
		{
			isReversedPrime = false;
		}
		else
		{
			for (int i = 2; i * i <= reversed; i++)
			{
				if (reversed % i == 0)
				{
					isReversedPrime = false;
					break;
				}
			}
		}
		if (isReversedPrime)
			cout << number << "\n";
	}
}

void zad4_4()
{
	ifstream file("liczby.txt");
	vector<int> numbers;
	int number;

	while (file >> number)
	{
		numbers.push_back(number);
	}

	cout << "zad4.4\n";

	vector<int> uniqueNum;
	vector<int> counts;

	for (int i = 0; i < numbers.size(); i++)
	{
		int found = false;
		for (int j = 0; j < uniqueNum.size(); j++)
		{
			if (numbers[i] == uniqueNum[j])
			{
				counts[j]++;
				found = true;
				break;
			}
		}
		if (!found)
		{
			uniqueNum.push_back(numbers[i]);
			counts.push_back(1);
		}
	}

	int uniqueCount = uniqueNum.size();
	int countTwo = 0;
	int countThree = 0;

	for (int i = 0; i < counts.size(); i++)
	{
		if (counts[i] == 2)
			countTwo++;
		else if (counts[i] == 3)
			countThree++;
	}
	cout << uniqueCount << " " << countTwo << " " << countThree << "\n";
}

int main()
{
	zad4_2();
}
