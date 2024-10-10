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

int main()
{
	task1();
}
