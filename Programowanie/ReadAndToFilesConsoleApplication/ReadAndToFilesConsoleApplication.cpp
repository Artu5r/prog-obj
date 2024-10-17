#include <iostream>
#include <fstream>

void task1()
{
	std::string name;
	int age;
	std::cout << "Podaj imie: ";
	std::cin >> name;
	std::cout << "\nPodaj wiek: ";
	std::cin >> age;

	std::ofstream writeToFile;
	writeToFile.open("c:\\plik2c.txt", std::ios_base::app);

	if (writeToFile.is_open() == true)
	{
		writeToFile << name << "\n" << age << "\n";
		writeToFile.flush();

		writeToFile.close();
	}
}

void task2()
{
	std::fstream readFromFile;
	readFromFile.open("c:\\plik2c.txt");

	if (readFromFile.is_open())
	{
		std::string name;
		int age;

		
		//while (readFromFile >> name)
		while(readFromFile.eof() == false)
		{
			readFromFile >> name;
			readFromFile >> age;

			std::cout << "Imie " << name << " wiek " << age;
		}
		readFromFile.close();
	}
}

int main()
{
	task2();
}
