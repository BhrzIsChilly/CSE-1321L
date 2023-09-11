/*
Braiden Anderson
August 15, 2023
COMPLETE
*/

#include <iostream>

int main() {
    short red, green, blue;
    float alphaValue;

    std::cout << "Enter your RGB data values in respective order with\none space between each individual value as follows:\n >> RED GREEN BLUE\n >> 255 255 255\n >> 0 0 0\n >> 157 244 12\n";

    std::cin >> red >> green >> blue;

    //std::cout << red << std::endl << green << "\n" << blue <<  "\n";

    std::cout << "\nThank you. Now enter the brightness decimal value\n in a range from 0.0 to 1.0 such as follows:\n >> .871 \n >> 0\n >> 0.4\n";

    std::cin >> alphaValue;

    //std::cout << red, green, blue;
    short redConversion, greenConversion, blueConversion;

    redConversion   = red + (float)(255-red) * alphaValue;
    greenConversion = green + (float)(255-green) * alphaValue;
    blueConversion  = blue + (float)(255-blue) * alphaValue;

    //std::cout << red << std::endl << green << std::endl << blue << std::endl;

    printf("A %.1f%% brighter tint of RGB (%d, %d, %d) is RGB (%d, %d, %d).", alphaValue*100, red, green, blue, redConversion, greenConversion, blueConversion);

    return 0;
}