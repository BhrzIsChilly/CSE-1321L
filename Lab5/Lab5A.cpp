/*
Braiden Anderson
September 14, 2023
COMPLETE
*/

#include <iostream>
#include <string>

int errorMessage(std::string errorResponse = "Invalid input. Please replay the program.") {
    std::cout << errorResponse;
    return 0;
}

int main() {
    char previousAnswer;
    std::cout << "Do you have a driving permit (Y/N)? ";
    std::cin >> previousAnswer;
    previousAnswer = tolower(previousAnswer);

    switch(previousAnswer) {
        case 'y':
            std::cout << "Do you have a commercial driving license (Y/N)? ";
            std::cin >> previousAnswer;
            previousAnswer = tolower(previousAnswer);
            switch(previousAnswer) {
                case 'y':
                    std::cout << "Congratulations! You can purchase a vehicle, let's start talking options!";
                    break;
                case 'n':
                    std::cout << "Commercial driving license is a prerequisite to purchase a vehicle!";
                    break;
                default:
                    errorMessage();
                    break;
            }
            break;
        case 'n':
            std::cout << "Driving permit is a prerequisite to purchase a vehicle!";
            break;
        default:
            errorMessage();
            break;
    }       

    std::cout << std::endl;
    return 0;
}