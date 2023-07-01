#include <iostream>

void printBinRepHelper(unsigned int x) {

	if (x > 1) {
		printBinRepHelper(x >> 1);
	}

	std::cout << x % 2;
}


void printBinRep(int x) {
	
	printBinRepHelper(static_cast<unsigned int>(x));

	std::cout << '\n';
}

int main() {
#if DEBUG
std::cout << std::unitbuf;
#endif

	int inpNum = 0;

	std::cout << "Enter the a positive integer: ";
	std::cin >> inpNum;


	printBinRep(inpNum);

	return 0;
}
