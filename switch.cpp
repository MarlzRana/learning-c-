#include <iostream>

int main() {
    /* switch = alternative to using many "else if" statements
              = compare one value to against matching cases
    */

   int month;
   std::cout << "Please enter the month (1-12): ";
   std::cin >> month ;

    // What you don't want to do below (use if statement to compare one value to a matching case)
//    if(month == 1) {
//     std::cout << "It is January";
//    } else if(month == 2) {
//     std::cout << "It is February";
//    } else if(month == 3) {
//     std::cout << "It is March";
//    } else if(month == 4) {
//     std::cout << "It is April";
//    } else if(month == 5) {
//     std::cout << "It is May";
//    } else if(month == 6) {
//     std::cout << "It is June";
//    } else if(month == 7) {
//     std::cout << "It is July";
//    } else if(month == 8) {
//     std::cout << "It is August";
//    } else if(month == 9) {
//     std::cout << "It is September";
//    } else if(month == 10) {
//     std::cout << "It is October";
//    } else if(month == 11) {
//     std::cout << "It is November";
//    } else {
//     std::cout << "You entered an invalid month number";
//    }

    // Use a switch instead
    switch(month) {
        case 1:
            std::cout << "It is January" << "\n";
            break;
        case 2:
            std::cout << "It is February" << "\n";
            break;
        case 3:
            std::cout << "It is March" << "\n";
            break;
        case 4:
            std::cout << "It is April" << "\n";
            break;
        case 5:
            std::cout << "It is May" << "\n";
            break;
        case 6:
            std::cout << "It is June" << "\n";
            break;
        case 7:
            std::cout << "It is July" << "\n";
            break;
        case 8:
            std::cout << "It is August" << "\n";
            break;
        case 9:
            std::cout << "It is September" << "\n";
            break;
        case 10:
            std::cout << "It is October" << "\n";
            break;
        case 11:
            std::cout << "It is November" << "\n";
            break;
        case 12:
            std::cout << "It is December" << "\n";
            break;
        default:
            std::cout << "Please enter in only numbers (1-12)";
    }

    char grade;
    
    std::cout << "What letter grade?: ";
    std::cin >> grade;

    switch(grade) {
        case 'A':
            std::cout << "You did great! " << "\n";
            break;
        case 'B':
            std::cout << "You did good" << "\n";
            break;
        case 'C':
            std::cout << "You did okay" << "\n";
            break;
        case 'D':
            std::cout << "You did not do good" << "\n";
            break;
        case 'E':
            std::cout << "You almost failed" << "\n";
            break;
        case 'F':
            std::cout << "You failed" << "\n";
            break;
        default:
            std::cout << "You did not enter a valid grade" << "\n";
    }

   return 0;

}