#include "electricField.h"
#include <cmath>

class ElectricField
{
	ElectricField()
	{
		E = new double[3];
	}

	ElectricField(double ex, double ey, double ez)
	{
		E[0] = ex;
		E[1] = ey;
		E[2] = ez;
	}

	~ElectricField()
	{
		delete [] E;
	}

	double calculateMagnitude()
	{
		//pythagorean theorem
		return sqrt(pow(E[0], 2) + pow(E[1], 2) + pow(E[2], 2));
	}

	double innerProduct()
	{
		
		return (E[0]*E[0] + E[1]*E[1] + E[2]*E[2]);
	}

	void setVector(double ex, double ey, double ez)
	{
		E[0] = ex;
		E[1] = ey;
		E[2] = ez;
	}
}
