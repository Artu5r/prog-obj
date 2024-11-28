#include <iostream>

class Square
{
protected:
	double firstSideLength;

public:
	Square();
	Square(double side);

	void Info();
	double CalculateArea();
	double CalculatePerimeter();
};

class Trapeze
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

	void Info();
	double CalculateArea();
	double CalculatePerimeter();
};

class Diamond
{
protected:
	double firstSideLength;
	double height;

public:
	Diamond();
	Diamond(double side, double h);

	void Info();
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
	
	void Info();
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

	void Info();
	double CalculateArea();
	double CalculatePerimeter();
};
