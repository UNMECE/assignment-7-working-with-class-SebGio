#include "electricField.h"
#include <cmath>


ElectricField::ElectricField()
{
	E = new double[3];
}

ElectricField::ElectricField(double ex, double ey, double ez)
{
	E = new double[3];
	E[0] = ex;
	E[1] = ey;
	E[2] = ez;
}

ElectricField::~ElectricField()
{
	delete [] E;
}

double ElectricField::calculateMagnitude()
{
	//pythagorean theorem
	return sqrt(pow(E[0], 2) + pow(E[1], 2) + pow(E[2], 2));
}

double ElectricField::innerProduct()
{
		
	return (E[0]*E[0] + E[1]*E[1] + E[2]*E[2]);
}

void ElectricField::setVector(double ex, double ey, double ez)
{
	E[0] = ex;
	E[1] = ey;
	E[2] = ez;
}

double* ElectricField::getVector()
{
	return E;
}
