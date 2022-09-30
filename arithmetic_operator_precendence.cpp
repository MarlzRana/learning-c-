#include <iostream>

int main() {
    /*  Order of precedence if we are evaluation an arithmetic expression left to right
        parentheses
        multiplication, division, modulus (do all these in a single parse left to right as you come across these operators) 
        addition, subtraction (do all these in a single parse left to right as you come across these operators) 
    */

   int students = 6 - 5 + 4 * 3 / 2; // 7
   std::cout << students;
}