#include <iostream>

int main() {
    double temp;
    char unit;

    std::cout << "**************** Temperature conversion ****************\n";

    std::cout << "Enter your the value of temperature measurement without the unit: ";
    std::cin >> temp;

    std::cout << "Enter the unit of temperature measurement (C/F): ";
    std::cin >> unit;

    if (unit == 'C') {
        std::cout << "Your temperature " << temp << "C is " <<  temp * 9 / 5 + 32 << "F\n";
    } else if (unit == 'F') {
        std::cout << "Your temperature " << temp << "F is " <<  (temp - 32) * 5 / 9 << "C\n";
    } else {
        std::cout << "You entered an invalid temperature\n";
    }

    std::cout << "**************** Temperature conversion ****************\n";
    return 0;
}