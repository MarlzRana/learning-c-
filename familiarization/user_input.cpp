#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main() {
    std::string name;
    int age;

    std::cout << "What is your age? ";
    std::cin >> age; // (Point A) This will only extract the age and not the \n character(from when you press enter)
                     // (Point A) This means that the \n character is still in the std::cin/input buffer 

    std::cout << "What's your full name?: ";
    // Need to use std::getline for inputs with whitespaces 
    std::getline(std::cin >> std::ws, name);    // (Point A) std::getline will pick up that \n character from the buffer and assume enter has already been pressed as it has just consumed a \n character 
                                                // (Point A) hence we have to use the extraction operator with std::ws to extract any whitespace and \n character that are still in the input buffer std::cin        

    std::cout << "Hello " << name << "\n";
    std::cout << "Your age is: " << age << "\n";

    return 0;
}