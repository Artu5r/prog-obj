#include <iostream>
#include <fstream>
#include <vector>

int main()
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
	
// zad 4.1
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
