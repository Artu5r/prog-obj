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

int main()
{
	ifstream file("liczby.txt");
	int numbers[100];
	for (int i = 0; i < 100; i++)
	{
		file >> numbers[i];
	}

	int numeryodw4_0[100];
	for (int i = 0; i < 100; i++)
	{
		numeryodw4_0[i] = reversedLiczba(numbers[i]);
		cout << numeryodw4_0[i] << endl;
	}
}
