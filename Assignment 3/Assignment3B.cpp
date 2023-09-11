/*
Braiden Anderson
September 07, 2023
COMPLETE
*/

#include <iostream>
#include <string>

int response() {
    char previousResponse;
    std::cin >> previousResponse;

    if (previousResponse == 'Y') {
        return 1;
    } else if (previousResponse == 'N') {
        return 0;
    }

    return -1;
}


int Assignment3B() {
    short continentCount = 0;
    std::string prompts[7] = {"Have you been to Africa? ",
                              "Have you been to Antarctica? ",
                              "Have you been to Asia? ",
                              "Have you been to Australia? ",
                              "Have you been to Europe? ",
                              "Have you been to North America? ",
                              "Have you been to South America? "};

    std::cout << "[World Traveler Checklist]\n";
    for (int i = 0; i < 7; i++) {
        std::cout << prompts[i];
        continentCount += response();
    }
    printf("You have visited %d continents: ", continentCount);

    switch (continentCount) {
        case 0:
            std::cout << "How is that possible? Are you living in space?";
            break;
        case 1:
            std::cout << "That's a good start. Time to explore the world!";
            break;
        case 2:
            std::cout << "You've just started your journey to see the world.";
            break;
        case 3:
            std::cout << "You've just started your journey to see the world.";
            break;
        case 4:
            std::cout << "You're an experienced traveler now.";
            break;
        case 5:
            std::cout << "You're an experienced traveler now.";
            break;
        case 6:
            std::cout << "Wow, you've been almost everywhere!";
            break;
        case 7:
            std::cout << "You're a true world traveler!";
            break;
    }

    std::cout << std::endl;
    return 0;
}

int main() {
    Assignment3B();
    return 0;
}

