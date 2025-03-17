#ifndef ELECTRICFIELD_H
#define ELECTRICFIELD_H

class ElectricField
{
	private:
		double *E;
	public:
		ElectricField();
		ElectricField(double ex, double ey, double ez);
		~ElectricField();
		
		void setVector();
		double getVector();
		double calculateMagnitude();
		double innerProduct();
}

#endif
