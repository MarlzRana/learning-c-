#include <iostream>

int main()
{

    std::string name;

    while (name.empty())
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    // while (true)
    // {
    //     std::cout << "I am in an infinite loop"
    //               << "\n";
    // }
    std::cout << "Your name is: " << name << "\n";
}