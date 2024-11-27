#include <iostream>

class Square
{
protected:
	double sideLength;

public:
	Square();
	Square(double side);

	double CalculateArea();
	double CalculatePerimeter();
};

class Trapeze : public Square
{
protected:
	double firstSideLength;
	double secondSideLength;
	double thirdSideLength;
	double fourthSideLength;
	double height;

public:
	Trapeze();
	Trapeze(double first, double second, double third, double fourth, double height);

	double CalculateArea();
	double CalculatePerimeter();
};
