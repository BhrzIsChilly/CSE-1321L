/*
Braiden Anderson
September 10, 2023
COMPLETE
*/

#include <iostream>
#include <string>

int invalidInput() {
    std::cout << "Invalid input, please try again!";
    return 0;
}

int main() {
    float numberValue;
    int actionValue;
    std::cout << "Welcome!\nPlease input a number: ";
    std::cin >> numberValue;

    std::cout << "\n\nWhat would you like to do to this number:\n0) Get the additive inverse of the number\n1) Get the reciprocal of the number\n2) Square the number\n3) Cube the number\n4) Exit the program\n\n";

    std::cin >> actionValue;

    switch (actionValue) {
    case 0:
        printf("The additive inverse of %f is %f", numberValue, (numberValue*-1));
        break;
    case 1:
        printf("The reciprocal of %f is %f", numberValue, (1/numberValue));
        break;
    case 2:
        printf("The square of %f is %f", numberValue, (numberValue*numberValue));
        break;
    case 3:
        printf("The cube of %f is %f", numberValue, (numberValue*numberValue*numberValue));
        break;
    case 4:
        std::cout << "\nThank you, goodbye!";
        break;
    default:
        invalidInput();
        break;
    }

    std::cout << std::endl;
    return 0;
}