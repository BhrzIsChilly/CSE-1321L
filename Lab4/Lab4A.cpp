/*
Braiden Anderson
September 10, 2023
COMPLETE
*/

#include <iostream>
#include <string>
#include <cmath>

int letterGradeResponse(std::string letterGrade) {
    printf("Letter grade is: %s", letterGrade.c_str());
    return 0;
}

int main() {
    float grade;
    std::cout << "Enter the score of your exam: ";
    std::cin >> grade;
    grade = std::round(grade);
    if (grade < 0 || grade > 100){
        std::cout << "Enter a number 0-100";
    } else if (grade < 65) {
        letterGradeResponse("F");
    } else if (grade < 68) {
        letterGradeResponse("D-");
    } else if (grade < 71) {
        letterGradeResponse("D");
    } else if (grade < 74) {
        letterGradeResponse("D+");
    } else if (grade < 77) {
        letterGradeResponse("C-");
    } else if (grade < 80) {
        letterGradeResponse("C");
    } else if (grade < 83) {
        letterGradeResponse("C+");
    } else if (grade < 86) {
        letterGradeResponse("B-");
    } else if (grade < 89) {
        letterGradeResponse("B");
    } else if (grade < 92) {
        letterGradeResponse("B+");
    } else if (grade < 95) {
        letterGradeResponse("A-");
    } else if (grade < 98) {
        letterGradeResponse("A");
    } else if (grade < 101) {
        letterGradeResponse("A+");
    } else {
        std::cout << "You have entered an invalid input. Try again.";
    }

    std::cout << std::endl;
    return 0;
}