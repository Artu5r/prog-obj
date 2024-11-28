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

/////////////////////////////////////////////////

Diamond::Diamond()
{
	sideLength = 0;
	height = 0;
}

Diamond::Diamond(double side, double h)
{
	sideLength = side;
	height = h;
}

double Diamond::CalculateArea() {
	return sideLength * height;
}

double Diamond::CalculatePerimeter() {
	return sideLength * 4;
}

/////////////////////////////////////////////////

Parallelogram::Parallelogram()
{
	firstSideLength = 0;
	secondSideLength = 0;
	height = 0;
}

Parallelogram::Parallelogram(double first, double second, double h)
{
	firstSideLength = first;
	secondSideLength = second;
	height = h;
}

double Parallelogram::CalculateArea()
{
	return firstSideLength * height;
}

double Parallelogram::CalculatePerimeter()
{
	return firstSideLength * 2 + secondSideLength * 2;
}

/////////////////////////////////////////////////


Rectangle::Rectangle()
{
	firstSideLength = 0;
	secondSideLength = 0;
}

Rectangle::Rectangle(double first, double second)
{
	firstSideLength = first;
	secondSideLength = second;
}

double Rectangle::CalculateArea()
{
	return firstSideLength * secondSideLength;
}

double Rectangle::CalculatePerimeter()
{
	return firstSideLength * 2 + secondSideLength * 2;
}