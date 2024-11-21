#include <iostream>
#include "GeometricFigure.h"

Square::Square()
{
	firstSideLength = 1;
	secoundSideLength = 1;
	thirdSideLength = 1;
	fourthSideLength = 1;
}

Square::Square(double first, double secound, double third, double fourth)
{
	firstSideLength = first;
	secoundSideLength = secound;
	thirdSideLength = third;
	fourthSideLength = fourth;
}