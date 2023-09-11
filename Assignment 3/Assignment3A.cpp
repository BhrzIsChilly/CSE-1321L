/*
Braiden Anderson
September 06, 2023
COMPLETE
*/

#include <iostream>
#include <string>

int Assignment3A() {
    std::string potentialIllness;
    char previousAnswer;

    std::cout << "[WebMD Checker]\nWhat is your suspected illness? ";
    std::getline(std::cin, potentialIllness);
    
    if (potentialIllness == "HGPS") {
        std::cout << "Do you have brittle bones? ";
        std::cin >> previousAnswer;
        if (previousAnswer == 'Y') {
            std::cout << "It is possible that you have HGPS";
        } else if (previousAnswer == 'N') {
            std::cout << "It is not likely that you have HGPS";
        }
    } else if (potentialIllness == "Lupus") {
        std::cout << "It is not likely that you have Lupus";
    } else if (potentialIllness == "Bokter Syndrome") {
        std::cout << "Do you have a Vitamin C deficiency? ";
        std::cin >> previousAnswer;
        if (previousAnswer == 'Y') {
            std::cout << "Are you a sailor? ";
            std::cin >> previousAnswer;
            if (previousAnswer == 'N') {
                std::cout << "It is not likely you have Bokter Syndrome";
            } else if (previousAnswer == 'Y') {
                std::cout << "It is possible that you have Bokter Syndrome";
            }
        } else if (previousAnswer == 'N') {
            std::cout << "It is not likely that you have Bokter Syndrome";
        }
    }

    std::cout << std::endl;
    return 0;
}

int main() {
    Assignment3A();
}