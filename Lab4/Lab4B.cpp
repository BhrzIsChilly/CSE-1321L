/*
Braiden Anderson
September 10, 2023
COMPLETE
*/

#include <iostream>
#include <string>

// Included from stack overflow post: https://stackoverflow.com/questions/313970/how-to-convert-an-instance-of-stdstring-to-lower-case
#include <algorithm>
#include <cctype>

int invalidInput() {
    std::cout << "Invalid input. Please replay the program.";
    return 0;
}

int main() {
    std::string today;

    std::cout << "Enter the day: ";
    std::cin >> today;
    
    std::transform(today.begin(), today.end(), today.begin(), // Included from stack overflow
        [](unsigned char c){ return std::tolower(c); });
    
    if (today == "monday" || today == "wednesday") {
        std::cout << "I have class today!";
    } else if (today == "friday") {
        std::cout << "It's Friday! Friday! Gotta get down on Friday!";
    } else if (today == "tuesday" || today == "thursday" || today == "saturday" || today == "sunday") {
        std::cout << "I should use this time to do my homework.";
    } else {
        invalidInput();
    }

    std::cout << std::endl;
    return 0;
}