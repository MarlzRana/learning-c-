#include <iostream>

int sumDigits(int x) {
	if (x == 0) {
		return 0;
	}
	return sumDigits(x / 10) + (x % 10);
}

int main() {
#if DEBUG
std::cout << std::unitbuf;
#endif

	std::cout << sumDigits(93427) << '\n';

	return EXIT_SUCCESS;
}
