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

class Diamond
{
protected:
	double sideLength;
	double height;

public:
	Diamond();
	Diamond(double side, double h);

	double CalculateArea();
	double CalculatePerimeter();
};

class Parallelogram
{
protected:
	double firstSideLength;
	double secondSideLength;
	double height;

public:
	Parallelogram();
	Parallelogram(double first, double second, double h);
	
	double CalculateArea();
	double CalculatePerimeter();
};

class Rectangle
{
protected:
	double firstSideLength;
	double secondSideLength;

public:
	Rectangle();
	Rectangle(double first, double second);

	double CalculateArea();
	double CalculatePerimeter();
};
