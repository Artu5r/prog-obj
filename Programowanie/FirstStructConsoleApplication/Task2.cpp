#include <iostream>

struct point
{
	double x;
	double y;
};

void getPointValue(point &p)
{
	std::cout << "Podaj x: \n";
	std::cin >> p.x;

	std::cout << "Podaj y: \n";
	std::cin >> p.y;
}

//Napisz program kt�ry obliczy odleglo�� punktu 2D od innego punktu wsp�rz�dnych.
void task2()
{
	//double x, y;
	point firstPoint;
	//firstPoint.x = 5.9;

	//getPointValue(firstPoint.x , firstPoint.y);
	getPointValue(firstPoint);

	double distance = sqrt(firstPoint.x * firstPoint.x + firstPoint.y * firstPoint.y);
	std::cout << "\nOdleglosc to " << distance;
}
