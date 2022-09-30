#include <iostream>

int main() {
    /*
        arithmetic operators = return the result of a specific arithmetic operation (+ - * /)
    */    

    int students = 20;

    // Addition +
    students = students + 1;
    students += 1;
    students++;

    // Subtraction -
    students = students - 1;
    students -= 1;
    students--;

    // Multiplication *
    students = students * 2;
    students *= 2;

    // Division /
    students = students / 2;
    students /= 2;

    // Division where the result is a decimal but the holding variable is of type int so the decimal portion of the number gets truncated
    students /= 3;

    // Modulus (remainder) %
    int remainder = students % 4;

    std::cout << students << "\n";
    std::cout << remainder;

    return 0;
}
