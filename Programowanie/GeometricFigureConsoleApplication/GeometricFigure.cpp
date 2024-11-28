#include <iostream>
#include "GeometricFigure.h"

Square::Square()
{
	firstSideLength = 0;
}

Square::Square(double s)
{
	firstSideLength = s;
}

void Square::Info()
{
	std::cout << "Kwadrat: \n";
	std::cout << "bok = " << firstSideLength;
}

double Square::CalculateArea()
{
	double area = firstSideLength * firstSideLength;
	return area;
}

double Square::CalculatePerimeter()
{
	return firstSideLength * 4;
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

void Trapeze::Info()
{
	std::cout << "Trapez: \n";
	std::cout << "bok1 = " << firstSideLength << "\n";
	std::cout << "bok3 = " << secondSideLength << "\n";
	std::cout << "bok4 = " << thirdSideLength << "\n";
	std::cout << "bok5 = " << fourthSideLength << "\n";
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
	firstSideLength = 0;
	height = 0;
}

Diamond::Diamond(double side, double h)
{
	firstSideLength = side;
	height = h;
}

void Diamond::Info()
{
	std::cout << "Romb: \n";
	std::cout << "bok1 = " << firstSideLength << "\n";
	std::cout << "wysokosc = " << height << "\n";
}

double Diamond::CalculateArea() {
	return firstSideLength * height;
}

double Diamond::CalculatePerimeter() {
	return firstSideLength * 4;
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

void Parallelogram::Info()
{
	std::cout << "Rownoleglobok: \n";
	std::cout << "bok1 = " << firstSideLength << "\n";
	std::cout << "bok2 = " << secondSideLength << "\n";
	std::cout << "wysokosc = " << height << "\n";
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

void Rectangle::Info()
{
	std::cout << "Prostokąt: \n";
	std::cout << "bok1 = " << firstSideLength << "\n";
	std::cout << "bok2 = " << secondSideLength << "\n";
}

double Rectangle::CalculateArea()
{
	return firstSideLength * secondSideLength;
}

double Rectangle::CalculatePerimeter()
{
	return firstSideLength * 2 + secondSideLength * 2;
}
