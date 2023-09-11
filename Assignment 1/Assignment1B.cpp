/*
Braiden Anderson
August 16, 2023
COMPLETE
*/

#include <iostream>

int main() {
    float totalPrice, taxRate, serviceCharge;
    float totalTax, subtotal, tip10, tip25, total10, total25;

    // std::cout << "Enter in respective order the total price of your meal, the tax rate, and the service charge.";
    // std::cin >> totalPrice, taxRate, serviceCharge;
    std::cout << "Enter the total price of the meal: ";
    std::cin >> totalPrice;
    std::cout << "Enter the local tax rate: ";
    std::cin >> taxRate;
    std::cout << "Enter the service charge: ";
    std::cin >> serviceCharge;

    totalTax = totalPrice * taxRate;
    subtotal = totalPrice + serviceCharge;
    tip10 = subtotal * .10;
    tip25 = subtotal * .25;
    total10 = tip10 + subtotal + totalTax;
    total25 = tip25 + subtotal + totalTax;

    printf("\n\nThe subtotal is $%.2f\n", subtotal);

    printf("\nA 10%% tip would be $%.3f\n", tip10);
    printf("The total would be $%.4f\n", total10);

    printf("\nA 25%% tip would be $%.3f\n", tip25);
    printf("The total would be $%.4f\n", total25);

    return 0;
}