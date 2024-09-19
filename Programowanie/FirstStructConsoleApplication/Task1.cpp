#include <iostream>

//Napisz program który obliczy odlegloœæ punktu 2D od œrodka uk³adu wspó³rzêdnych.
void task1()
{
	double x, y;
	std::cout << "Podaj x: ";
	std::cin >> x;
	std::cout << "\nPodaj y: ";
	std::cin >> y;

	double distance = sqrt(x * x + y * y);
	std::cout << "\nOdleglosc = " << distance;
}
