/*
Braiden Anderson
September 07, 2023
COMPLETE
*/

#include <iostream>

int Assignment3C() {
    int potentialResponse1, potentialResponse2;
    std::string potentialResponse3;
    std::cout << "[Guess the Color Mode]\n";
    std::cout << "How many channels does your image have? ";
    std::cin >> potentialResponse1;
    switch (potentialResponse1) {
        case 1:
            std::cout << "It is a Grayscale image.";
            break;
        case 2:
            std::cout << "It is a Grayscale image.";
            break;
        case 3:
            std::cout << "It is an RGB image.";
            break;
        case 4:
            std::cout << "What is its BPC value? ";
            std::cin >> potentialResponse2;
            switch (potentialResponse2) {
                case 8:
                    std::cout << "What image format is it? ";
                    std::cin >> potentialResponse3;
                    if (potentialResponse3 == "PNG") {
                        std::cout << "It is an RGB image.";
                    } else if (potentialResponse3 == "TIFF") {
                        std::cout << "It is a CMYK image.";
                    } else {
                        std::cout << "This is invalid input. Please run the program again.";
                    }
                    break;
                case 16:
                    std::cout << "What image format is it? ";
                    std::cin >> potentialResponse3;
                    if (potentialResponse3 == "PNG") {
                        std::cout << "It is an RGB image.";
                    } else if (potentialResponse3 == "TIFF") {
                        std::cout << "It is a CMYK image.";
                    } else {
                        std::cout << "This is invalid input. Please run the program again.";
                    }
                    break;
                case 32:
                    std::cout << "It is an RGB image.";
                    break;
                default:
                    std::cout << "This is invalid input. Please run the program again.";
                    break;
            }
            break;
        case 5:
            std::cout << "It is a CMYK image.";
            break;
        default:
            std::cout << "This is invalid input. Please run the program again.";
            break;
    }

    return 0;
}

int main() {
    Assignment3C();
    std::cout << std::endl;
    return 0;
}