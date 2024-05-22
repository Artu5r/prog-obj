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

int main()
{	
	int boardCoordinatesLeftTop = 20;
	int boardLeftTopX = 20;
	int boardLeftTopY = 20;
	int boardRightBottomX = 80;
	int boardRightBottomY = 40;


	setCursor(boardCoordinatesLeftTop, boardLeftTopY);
	for (int i = boardLeftTopX; i <= boardRightBottomX; i++)
		std::cout << "#";

	for (int row = boardLeftTopY + 1; row < boardRightBottomY; row++)
	{
		setCursor(boardLeftTopX, row);
		std::cout << "#";

		setCursor(boardRightBottomX, row);
		std::cout << "#";
	}

	setCursor(boardLeftTopX, boardRightBottomY);
	for (int i = boardLeftTopX; i <= boardRightBottomX; i++)
		std::cout << "#";
}
