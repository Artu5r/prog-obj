#include <iostream>
#include <windows.h>
#include <conio.h>

void setCursor(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void drawSecounds(int secounds)
{
	int x = 0;
	int y = 0;
	setCursor(x, y);

	
	std::cout << secounds;
}

void drawMinutes(int minutes)
{
	int x = 3;
	int y = 0;
	setCursor(x, y);

	
	std::cout << minutes;
}

void drawHours(int hours)
{
	int x = 6;
	int y = 0;
	setCursor(x, y);

	
	std::cout << hours;
}

int main()
{
	int secounds = 55;
	int minutes = 0;
	int hours = 0;
	
	bool quit = false;

	unsigned char currentChar = 0;

	while (!quit)
	{
		if (_kbhit())
		{
			currentChar = _getch();
			if (currentChar == 13)
			{
				while (!quit)
				{
					if (_kbhit())
					{
						currentChar = 0;
						currentChar = _getch();
						if (currentChar == 13)
							quit = true;
					}

					Sleep(1000);
					secounds++;

					drawSecounds(secounds);
					if (secounds >= 60)
					{
						minutes++;
						secounds = 0;
					}
						
					drawMinutes(minutes);
					
					if (minutes >= 60)
					{
						hours++;
						minutes = 0;
					}	

					drawHours(hours);


				}
			}

		}
	}



}
