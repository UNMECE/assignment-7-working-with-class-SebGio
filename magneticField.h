#ifndef MAGNETICFIELD_H
#define MAGNETICFIELD_H

class MagneticField
{
	private:
		double *E;
	public:
		MagneticField();
		MagneticField(double ex, double ey, double ez);
		~MagneticField();
		
		void setVector();
		double getVector();
		double calculateMagnitude();
		double unitVector();
}
#endif
