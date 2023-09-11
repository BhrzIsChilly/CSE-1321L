/*
Braiden Anderson
August 16, 2023
COMPLETE
*/

#include <iostream>
#include <string>

int main() {
    std::string animalString;
    float subtotalPrice;
    short wholeNumber;
    char singleLetter;

    std::cout << "Enter your third favorite animal: ";
    std::cin >> animalString;
    std::cout << "Enter the subtotal from your last take-out meal: ";
    std::cin >> subtotalPrice;
    std::cout << "Enter a whole number less than |32767|: ";
    std::cin >> wholeNumber;
    std::cout << "Enter a single letter: ";
    std::cin >> singleLetter;

    printf("\nYour passphrase is: %s %.2f %d %c\n", animalString.c_str(), subtotalPrice, wholeNumber, singleLetter);
    std::cout << "\nOther variations are:";
    printf("\n%d %c %s %.2f", wholeNumber, singleLetter, animalString.c_str(), subtotalPrice);
    printf("\n%d %s %.2f %c", wholeNumber, animalString.c_str(), subtotalPrice, singleLetter);
    printf("\n%.2f %s %c %d\n\n", subtotalPrice, animalString.c_str(), singleLetter, wholeNumber);

    return 0;
}