#include <iostream>
#include "GeometricFigure.h"

Quadrangle::Quadrangle(double a, double b, double c, double d, double h, std::string n)
{
	sideA = a;
	sideB = b;
	sideC = c;
	sideD = d;
	height = h;
	name = n;
}

void Quadrangle::ShowInformation()
{
	std::cout << "Informacja o obiekcie  o nazwie: " << name << "\n";
	std::cout << "Bok a = " << sideA << "\n";
	std::cout << "Bok b = " << sideB << "\n";
	std::cout << "Bok c = " << sideC << "\n";
	std::cout << "Bok d = " << sideD << "\n";
	std::cout << "Obwód = " << GetPerimeter() << "\n";
	//std::cout << "Pole = " << GetArea() << "\n";

}

double Quadrangle::GetPerimeter()
{
	return sideA + sideB + sideC + sideD;
}

Rectangle::Rectangle(double a, double b, std::string n) :Quadrangle(a, b, a, b, a, n)
{
}

void Rectangle::ShowInformation()
{
	Quadrangle::ShowInformation();
	std::cout << "Pole = " << GetArea() << "\n";
}


double Rectangle::GetArea()
{
	return sideA * sideB;
}

Square::Square(int a, std::string n) :Rectangle(a, a, n)
{

}

Trapeze::Trapeze(double a, double b, double c, double d, double h, std::string n) :Quadrangle(a, b, c, d, h, n)
{

}

void Trapeze::ShowInformation()
{
	Quadrangle::ShowInformation();
	std::cout << "Pole = " << GetArea() << "\n";
}

double Trapeze::GetArea()
{
	return (sideB + sideD) * height / 2;
}