#include "magneticField.h"
#include <cmath>
#include <iostream>


MagneticField::MagneticField()
{
	E = new double[3];
}

MagneticField::MagneticField(double ex, double ey, double ez)
{
	E = new double[3];
	E[0] = ex;
	E[1] = ey;
	E[2] = ez;
}

MagneticField::~MagneticField()
{
	delete [] E;
}

double MagneticField::calculateMagnitude()
{
	//pythagorean theorem
	return sqrt(pow(E[0], 2) + pow(E[1], 2) + pow(E[2], 2));
}

void MagneticField::unitVector()
{
	double norm[3];
	for (int i = 0; i < 3; ++i)
	{
		norm[i] = E[i] / calculateMagnitude();
	}
	std::cout << "Unit vector: " << norm[0] << ", " << norm[1] << ", " << norm[2] << std::endl;
}

void MagneticField::setVector(double ex, double ey, double ez)
{
	E[0] = ex;
	E[1] = ey;
	E[2] = ez;
}

double* MagneticField::getVector()
{
	return E;
}
