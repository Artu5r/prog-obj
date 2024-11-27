#include <iostream>
#include "GeometricFigure.h"
#include "GeometricFigure.cpp"

int main()
{
	//Napisz klasy które opisz¹ figury geometryczne: 
	//    kwadrat, trapez, romb, równoleg³obok, prostok¹t.
	// Zdefiniuj podstawowe metody.

	Square firstSquare(5);
	std::cout << "Pole kwadratu: " << firstSquare.CalculateArea() << ", obwód: " << firstSquare.CalculatePerimeter() << "/n";

	Trapeze firstTrapeze(3, 5, 4, 6, 4);
	std::cout << "Pole trapezu: " << firstTrapeze.CalculateArea() << ", obwód: " << firstTrapeze.CalculatePerimeter() << "/n";



}