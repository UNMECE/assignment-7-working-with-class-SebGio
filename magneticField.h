#ifndef MAGNETICFIELD_H
#define MAGNETICFIELD_H

class MagneticField
{
private:
	double* E;
public:
	MagneticField();
	MagneticField(double ex, double ey, double ez);
	~MagneticField();

	void setVector(double ex, double ey, double ez);
	double* getVector();
	double calculateMagnitude();
	void unitVector();
};

#endif
