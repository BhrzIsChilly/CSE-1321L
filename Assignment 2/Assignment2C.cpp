/*
Braiden Anderson
August 28, 2023
COMPLETE
*/

#include <iostream>

int main() {
    int xCoordinate, yCoordinate, boxWidth, boxHeight;
    std::cout << "X coordinate (bottom-left corner): ";
    std::cin >> xCoordinate;
    std::cout << "Y coordinate (bottom-left corner): ";
    std::cin >> yCoordinate;
    std::cout << "Hit box width: ";
    std::cin >> boxWidth;
    std::cout << "Hit box height: ";
    std::cin >> boxHeight;

    std::cout << "\n[Sprite Hit Box Coordinates]\n\n";
    printf("Bottom-Left: %d, %d\n", xCoordinate, yCoordinate );
    printf("Top-Left: %d, %d\n", xCoordinate, yCoordinate + boxHeight);
    printf("Bottom-Right: %d, %d\n", xCoordinate + boxWidth, yCoordinate );
    printf("Top-Right: %d, %d\n", xCoordinate + boxWidth, yCoordinate + boxHeight);

    return 0;
}