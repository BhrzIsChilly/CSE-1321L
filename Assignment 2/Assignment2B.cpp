/*
Braiden Anderson
August 28, 2023
COMPLETE
*/

#include <iostream>

int main() {
    int inputSeconds = 0;

    std::cout << "Time in seconds: ";
    std::cin >> inputSeconds;
    std::cout << "Converting...";

    int timeSeconds = inputSeconds%60;
    int timeMinutes = inputSeconds/60%60;
    int timeHours = inputSeconds/3600;

    printf("%d seconds == %d hour(s), %d minute(s), and %d second(s).", inputSeconds, timeHours, timeMinutes, timeSeconds);

    return 0;
}