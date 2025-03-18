#include "electricField.h"
#include "magneticField.h"
#include <iostream>
int main()
{
	ElectricField E_default;
	ElectricField E_input(-5, 3, -5);
	E_default.setVector(2, 10, 6);
	MagneticField M_default;
	MagneticField M_input(7, 9, -3);
	M_default.setVector(0, 7, 7);


	std::cout << "E_default: " << E_default.getVector()[0] << ", " << E_default.getVector()[1] << ", " << E_default.getVector()[2] << std::endl;
	std::cout << "Magnitude: " << E_default.calculateMagnitude() << std::endl;
	std::cout << "Inner product: " << E_default.innerProduct() << std::endl;

	std::cout << "E_input: " << E_input.getVector()[0] << ", " << E_input.getVector()[1] << ", " << E_input.getVector()[2] << std::endl;
	std::cout << "Magnitude: " << E_input.calculateMagnitude() << std::endl;
	std::cout << "Inner product: " << E_input.innerProduct() << std::endl;

	std::cout << "M_default: " << M_default.getVector()[0] << ", " << M_default.getVector()[1] << ", " << M_default.getVector()[2] << std::endl;
	std::cout << "Magnitude: " << M_default.calculateMagnitude() << std::endl;
	M_default.unitVector();

	std::cout << "M_input: " << M_input.getVector()[0] << ", " << M_input.getVector()[1] << ", " << M_input.getVector()[2] << std::endl;
	std::cout << "Magnitude: " << M_input.calculateMagnitude() << std::endl;
	M_input.unitVector();


	return 0;
}
