#include <iostream>
#include "GeometricFigure.h"

int main()
{
	//Napisz klasy które opisz¹ figury geometryczne: 
	//    kwadrat, trapez, romb, równoleg³obok, prostok¹t.
	// Zdefiniuj podstawowe metody.

	Square firstSquare(5);
	std::cout << "Pole kwadratu: " << firstSquare.CalculateArea() << ", obwod: " << firstSquare.CalculatePerimeter() << "\n";
	firstSquare.Info();
	std::cout << "\n";

	Trapeze firstTrapeze(3, 5, 4, 6, 4);
	std::cout << "Pole trapezu: " << firstTrapeze.CalculateArea() << ", obwod: " << firstTrapeze.CalculatePerimeter() << "\n";
	firstTrapeze.Info();
	std::cout << "\n";

	Diamond firstDiamond(5, 10);
	std::cout << "Pole rombu: " << firstDiamond.CalculateArea() << ", obwod: " << firstDiamond.CalculatePerimeter() << "\n";
	firstDiamond.Info();
	std::cout << "\n";

	Parallelogram firstParallelogram(14, 10, 5);
	std::cout << "Pole rownolegloboku: " << firstParallelogram.CalculateArea() << ", obwod: " << firstParallelogram.CalculatePerimeter() << "\n";
	firstParallelogram.Info();
	std::cout << "\n";

	Rectangle firstRectangle(5, 8);
	std::cout << "Pole prostokata: " << firstRectangle.CalculateArea() << ", obwod: " << firstRectangle.CalculatePerimeter() << "\n";
	firstRectangle.Info();
	std::cout << "\n";

}