#include <iostream>

class Square
{
protected:
	double firstSideLength;
	double secoundSideLength;

public:
	Square();
	Square(double first, double secound);

	double CalculateArea();


};

class Trapeze : public Square
{
protected:
	double firstSideLength;
	double secoundSideLength;
	double thirdSideLength;
	double fourthSideLength;

public:
	Trapeze();
	Trapeze(double first, double secound, double third, double fourth);
};

class Diamond
{
public:
	Diamond();
	~Diamond();

private:

};

Diamond::Diamond()
{

}

Diamond::Diamond()
{

}