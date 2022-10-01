 #include <iostream>

 int main() {

    char op;
    double num1;
    double num2;

    std::cout << "***************** CALCULATOR *****************\n";

    std::cout << "Arithmetic expression format example: 6/2\n" ;

    std::cout << "Please enter the first number of your arithmetic expression: ";
    std::cin >> num1;
    std::cout << "Please enter the operator (+ - * /): ";
    std::cin >> op;
    std::cout << "Please enter the second number of your arithmetic expression: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            std::cout << "RESULT: " << num1 << op << num2 << "=" << num1 + num2 << "\n"; 
            break;
        case '-':
            std::cout << "RESULT: " << num1 << op << num2 << "=" << num1 - num2 << "\n"; 
            break;
        case '*':
            std::cout << "RESULT: " << num1 << op << num2 << "=" << num1 * num2 << "\n"; 
            break;
        case '/':
            std::cout << "RESULT: " << num1 << op << num2 << "=" << num1 / num2 << "\n"; 
            break;
        default:
            std::cout << "Please enter a valid operator\n";
    }
    std::cout << "**********************************************\n";


    return 0;
 }