#include <iostream>

int main() {
    // ternary operator ?: replacement to an if/else statement
    // condition ? expressionIfTrue : expressionIfFalse

    // int grade = 75;
    // grade >= 60 ? std::cout << "You pass!\n" : std::cout << "You fail\n";

    int number = 9;
    number % 2 ? std::cout << "Odd\n" : std::cout << "Even" ; // C also has truthy and falsy values like javascript

    bool hungry = true;
    // hungry ? std::cout << "You are hungry!\n" : std::cout << "You are full!\n";
    std::cout << (hungry ? "You are hungry" : "You are full") << "\n";

    return 0;
}