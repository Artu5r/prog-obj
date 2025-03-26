#include <iostream>
#include <fstream>
#include <vector>

// zad 4.1
void zad4_1()
{
	std::ifstream file("przyk³lad.txt");

	//int numbers[200];

	//for (int i = 0; i < 200; i++)
	//{
	//	file >> numbers[i];
	//}

	//std::cout << "Odczytywanie liczby:\n";
	//for (int i = 0; i < 200; i++)
	//{
	//	std::cout << numbers[i] << ", ";
	//}

	std::vector<int> numbers;

	int num;
	while (file >> num)
		numbers.push_back(num);

	/*for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << num << ", ";
	}*/

	for (int num : numbers)
	{
		std::cout << num << ", ";
	}

	std::cout << "Zadanie 4.1\n";

	int count = 0;
	for (int num : numbers)
	{
		int firstDisits;
		int lastDisits = num % 10;

		int tmpNum = num;
		do
		{
			firstDisits = tmpNum % 10;
			tmpNum = tmpNum / 10;
		} while (tmpNum != 0);

		if (firstDisits == lastDisits)
		{
			count++;
		}
	}
}

void zad4_3()
{
	std::ifstream file("liczby.txt");

	int numbers[200];

	int x;
	int y;
	int z;
	int counter = 0;

	for (int i = 0; i < 200; i++)
	{
		file >> numbers[i];
		x = numbers[i];
			

		if (z % y == 0 && y % x == 0)
		{
			std::cout << "Dobre liczby: " << x << " " << y << " " << z;
			counter++;
		}

	}


}

int main()

{
	zad4_3();
}
