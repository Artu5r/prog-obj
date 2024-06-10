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

enum keyCode
{
	UP,
	DOWN,
	LEFT,
	RIGHT,
	ESC
};

struct point
{
	unsigned short x;
	unsigned short y;
};

struct boardCoordinates
{
	point leftTop, rightBottom;
};

void getConsolResolution(int& consoleWidth, int& consoleHeight)
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

	consoleWidth = csbi.srWindow.Right - csbi.srWindow.Left;
	consoleHeight = csbi.srWindow.Bottom - csbi.srWindow.Top;
}


keyCode codeChar(unsigned char charToCode)
{
	if (charToCode == 'w' || charToCode == 72)
		return keyCode::UP;
	if (charToCode == 's' || charToCode == 80)
		return keyCode::DOWN;
	if (charToCode == 'a' || charToCode == 75)
		return keyCode::LEFT;
	if (charToCode == 'd' || charToCode == 77)
		return keyCode::RIGHT;
	if (charToCode == 27)
		return keyCode::ESC;
}

keyCode getKeyCode(keyCode prevKeyCode)
{
	unsigned char currentChar = 0;
	keyCode currentKeyCode = prevKeyCode;
	if (_kbhit())
	{
		currentChar = _getch();
		if (currentChar == 224 || currentChar == 0)
		{
			currentChar = _getch();
			if (currentChar == 72
				|| currentChar == 80
				|| currentChar == 75
				|| currentChar == 77
				|| currentChar == 27)
				currentKeyCode = codeChar(currentChar);
		}
		else if (currentChar == 'w'
			|| currentChar == 's'
			|| currentChar == 'a'
			|| currentChar == 'd'
			|| currentChar == 27)
			currentKeyCode = codeChar(currentChar);
	}
	return currentKeyCode;
}

void changeCoordinate(point& coordinate, keyCode currentKeyCode, int consoleWidth, int consoleHeight)
{
	switch (currentKeyCode)
	{
	case keyCode::UP:
		if (coordinate.y > 0)
			coordinate.y--;
		else
			coordinate.y = consoleHeight;
		break;
	case keyCode::DOWN:
		if (coordinate.y < consoleHeight)
			coordinate.y++;
		else
			coordinate.y = 0;
		break;
	case keyCode::LEFT:
		if (coordinate.x > 0)
			coordinate.x--;
		else
			coordinate.x = consoleWidth;
		break;
	case keyCode::RIGHT:
		if (coordinate.x < consoleWidth)
			coordinate.x++;
		else
			coordinate.x = 0;
		break;
	default:
		break;
	}
}

int main()
{
	boardCoordinates board;
	point boardCoordinates;
	board.leftTop.x = 20;
	board.leftTop.y = 20;
	board.rightBottom.x = 80;
	board.rightBottom.y = 40;

	boardCoordinates.x = 20;
	boardCoordinates.y = 20;


	int consoleHeight, consoleWidth;
	getConsolResolution(consoleWidth, consoleHeight);
	keyCode currentKeyCode = keyCode::RIGHT;

	setCursor(board.leftTop.x, board.leftTop.y);


	while (true)
	{
		changeCoordinate(boardCoordinates, currentKeyCode, consoleWidth, consoleHeight);
	}







	//for (int i = board.leftTop.x; i <= board.rightBottom.x; i++)
	//	std::cout << "#";

	//for (int row = board.leftTop.y + 1; row < board.rightBottom.y; row++)
	//{
	//	setCursor(board.leftTop.x, row);
	//	std::cout << "#";

	//	setCursor(board.rightBottom.x, row);
	//	std::cout << "#";
	//}

	//setCursor(board.leftTop.x, board.rightBottom.y);
	//for (int i = board.leftTop.x; i <= board.rightBottom.x; i++)
	//	std::cout << "#";


}
