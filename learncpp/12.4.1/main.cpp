#include <iostream>

int fact(int n) {
	if (n == 0) {
		return 1;
	}

	return n * fact(n -1);
}


int main() {
#if DEBUG
std::cout << std::unitbuf;
#endif

	std::cout << fact(0) << '\n';
	std::cout << fact(1) << '\n';
	std::cout << fact(2) << '\n';
	std::cout << fact(3) << '\n';
	std::cout << fact(4) << '\n';
	std::cout << fact(5) << '\n';
	std::cout << fact(6) << '\n';
	std::cout << fact(7) << '\n';
	std::cout << fact(8) << '\n';
	std::cout << fact(9) << '\n';
	return 0;
}
