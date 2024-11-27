#include <iostream>
#include "GeometricFigure.h"

Square::Square()
{
	sideLength = 0;
}

Square::Square(double s)
{
	sideLength = s;
}

double Square::CalculateArea()
{
	double area = sideLength * sideLength;
	return area;
}

double Square::CalculatePerimeter()
{
	return sideLength * 4;
}

/////////////////////////////////////////////////

Trapeze::Trapeze()
{
	firstSideLength = 0;
	secondSideLength = 0;
	thirdSideLength = 0;
	fourthSideLength = 0;
	height = 0;
}

Trapeze::Trapeze(double first, double secound, double third, double fourth, double h)
{
	firstSideLength = first;
	secondSideLength = secound;
	thirdSideLength = third;
	fourthSideLength = fourth;
	height = h;
}

double Trapeze::CalculateArea() {
	return 0.5 * (firstSideLength + thirdSideLength) * height;
}

double Trapeze::CalculatePerimeter() {
	return firstSideLength + secondSideLength + thirdSideLength + fourthSideLength;
}
