/*
Braiden Anderson
September 16, 2023
COMPLETE
*/

#include <iostream>
#include <string>

int errorMessage(std::string errorResponse = "Invalid input. Please replay the program.") {
    std::cout << errorResponse;
    return 0;
}

int main() {
    int xValue, yValue;
    
    std::cout << "Enter x: ";
    std::cin >> xValue;

    std::cout << "Enter y: ";
    std::cin >> yValue;

    if (xValue == 0 && yValue == 0) {
        std::cout << "This point is the origin.";
    } else if (xValue == 0) {
        std::cout << "This point is on the y axis.";
    } else if (yValue == 0) {
        std::cout << "This point is on the x axis.";
    } else if (xValue > 0 && yValue > 0) {
        std::cout << "This point is in the first quadrant.";
    } else if (xValue < 0 && yValue > 0) {
        std::cout << "This point is in the second quadrant.";
    } else if (xValue > 0 && yValue < 0) {
        std::cout << "This point is in the fourth quadrant.";
    } else if (xValue < 0 && yValue < 0) {
        std::cout << "This point is in the third quadrant.";
    }

    std::cout << std::endl;
    return 0;
}