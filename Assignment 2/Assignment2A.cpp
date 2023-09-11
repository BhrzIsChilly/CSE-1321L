/*
Braiden Anderson
August 21, 2023
COMPLETE
*/

#include <iostream>
#include <math.h>

float octagonSideLength, octagonArea, cylinderRadius, cylinderHeight, cylinderPerimeter, cylinderArea;


int main() {
    //Octagon section
    std::cout << "[Octagon Calculator]" << std::endl << "Enter the length of one side: ";
    std::cin >> octagonSideLength;
    octagonArea = (2*(1+sqrt(2)))*octagonSideLength*octagonSideLength;
    std::cout << std::endl << "Octagon Perimeter = " << octagonSideLength*8 << std::endl << "Octagon Area = " << octagonArea << std::endl;

    //Cylinder section
    std::cout << "[Cylinder Calculator]" << std::endl << "Enter the radius: ";
    std::cin >> cylinderRadius;
    std::cout << "Enter the height: ";
    std::cin >> cylinderHeight;
    cylinderPerimeter = 4*cylinderRadius+2*cylinderHeight;
    cylinderArea = (2*M_PI*cylinderRadius*cylinderHeight) + (2*M_PI*cylinderRadius*cylinderRadius);
    std::cout << "Cylinder Perimeter = " << cylinderPerimeter << std::endl << "Cylinder Area = " << cylinderArea << std::endl;

    return 0;
}