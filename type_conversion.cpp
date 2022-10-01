#include <iostream>

int main() {
    /*
        type conversion = conversion of a value from it's original data type to another
        implicit type conversion = automatic type conversion
        explicit type conversion = precede the value with a new type in parentheses i.e (int) val1
    */
    int x = 3.14; // implicit type conversion took place here to convert 3.14 (double) into 3 (int) by truncation the decimal portion of the number
    double y = (int) 3.14; // explicit type conversion and implicit type conversion  (3.14 explicit-> 3) (3(int) implicit-> 3(double))
    char z = 100; // implicit type conversion where 100's ascii decimal value is converted it's in equivalent ascii character (d)

    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << z << "\n";
    std::cout << (char) 100 << "\n"; // explicit type conversion

    int correct = 8;
    int questions = 10;
    double score = correct / questions * 100; // Will result in 0 percent (due to implicit type conversion) as questions (the denominator is of type integer) so the result of (correct / questions) will be an integer hence (int) 0.8 will be 0 and 0* 100 = 0
    double properScore = correct / (double) questions * 100;

    std::cout << score << "%\n";
    std::cout << properScore << "%\n";







    return 0;
}