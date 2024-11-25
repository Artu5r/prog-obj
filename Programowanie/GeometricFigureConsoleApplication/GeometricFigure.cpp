#include <iostream>
#include "GeometricFigure.h"

Square::Square()
{
	firstSideLength = 1;
	secoundSideLength = 1;
}

Square::Square(double first, double secound)
{
	firstSideLength = first;
	secoundSideLength = secound;
}

double Square::CalculateArea()
{
	double area = firstSideLength * secoundSideLength;
	return area;
}

Trapeze::Trapeze()
{
	firstSideLength = 1;
	secoundSideLength = 1;
	thirdSideLength = 1;
	fourthSideLength = 1;
}

Trapeze::Trapeze(double first, double secound, double third, double fourth)
{
	firstSideLength = first;
	secoundSideLength = secound;
	thirdSideLength = third;
	fourthSideLength = fourth;
}
