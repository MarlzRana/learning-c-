#include <iostream>

int main() {
    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // !  = reverses the logical state of it's operand

    int temp;

    std::cout << "Enter your temperature: ";
    std::cin >> temp;

    // if(temp > 0 && temp < 30){
    //     std::cout << "The temperature is good!\n";
    // } 
    // else{
    //     std::cout << "The temperature is bad!\n";
    // }

    if(!(temp <= 0 || temp >= 30)){ // De Morgan's Law
        std::cout << "The temperature is good!\n";
    } 
    else{
        std::cout << "The temperature is bad!\n";
    }
    return 0;
}