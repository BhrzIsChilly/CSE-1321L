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
    int numberInQuestion;
    std::cout << "Enter an integer: ";
    std::cin >> numberInQuestion;

    if ((numberInQuestion % 2) == 0) {
        std::cout << "This number is divisible by 2";
    } else if ((numberInQuestion % 3) == 0) {
        std::cout << "This number is divisible by 3";
    } else if ((numberInQuestion % 5) == 0) {
        std::cout << "This number is divisible by 5";
    } else {
        std::cout << "This number is undetermined";
    }


    std::cout << std::endl;
    return 0;
}