#include <iostream>
#pragma once
#include <iostream>

class Quadrangle
{
private:

protected:
	double sideA, sideB, sideC, sideD;
	double height;
	std::string name;
public:
	Quadrangle(double a, double b, double c, double d, double h, std::string n);

	void ShowInformation();
	double GetPerimeter();
};

class Rectangle : public Quadrangle
{
private:

protected:


public:

	Rectangle(double a, double b, std::string n = "Prostok¹t");

	void ShowInformation();
	double GetArea();
};

class Square : public Rectangle
{
private:

protected:

public:
	Square(int a, std::string n = "Kwadrat");
};

class Trapeze : public Quadrangle
{
private:


protected:

public:
	Trapeze(double a, double b, double c, double d, double h, std::string n = "Trapez");

	void ShowInformation();
	double GetArea();

};