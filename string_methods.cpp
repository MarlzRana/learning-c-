#include <iostream>

int main() {
    std::string name;

    std::cout << "Please enter your name: ";
    std::getline(std::cin, name);

    // if (name.length() > 12) {
    //     std::cout << "You name can't be over 12 characters long";
    // } else {
    //     std::cout << "Welcome " << name;
    // }
    
    // if (name.empty()) {
    //     std::cout << "You didn't enter your name" << "\n";
    // } else {
    //     std:: cout << "Hello " << name << "\n";
    // }

    // name.clear();
    // std::cout << "Hello " << name << "\n";

    // name.append("@gmail.com");
    // std::cout << "Your username is: " << name << "\n";

    // std::cout << name.at(0) << "\n";

    // name.insert(0, "@");

    // std::cout << name.find(' ') << "\n";

    name.erase(0, 3);

    std::cout << name << "\n";
    return 0;
}