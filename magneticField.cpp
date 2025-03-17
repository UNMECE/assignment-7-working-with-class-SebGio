#include "magneticField.h"
#include <cmath>

class MagneticField
{
	MagneticField()
	{
		E = new double[3];
	}

	MagneticField(double ex, double ey, double ez)
	{
		E[0] = ex;
		E[1] = ey;
		E[2] = ez;
	}

	~MagneticField()
	{
		delete [] E;
	}

	double calculateMagnitude()
	{
		//pythagorean theorem
		return sqrt(pow(ex, 2) + pow(ey, 2) + pow(ez, 2));
	}

	double[] unitVector()
	{
		double norm[3];
		for (int i = 0; i < 3; ++i)
		{
			norm[i] = E[i]/abs(E[i])
		}
		return norm;
	}

	void setVector(double ex, double ey, double ez)
	{
	  E[0] = ex;
		E[1] = ey;
		E[2] = ez;
	}
}
