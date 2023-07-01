#include <iostream>

void printBinRepHelper(int x) {
	
	if (x == 0) {
		return;
	}
	
	printBinRepHelper(x >> 1);
	
	std::cout << x % 2;
}


void printBinRep(int x) {
	//while (!(x % 2)) {
	//	x >>= 1;
	//}
	//std::cout << x << '\n';
	printBinRepHelper(x);
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
