#include "marlinrandomutil.h"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>


int main() {
	std::cout << "Start where?";
	
	int baseNum{};
	std::cin >> baseNum;

	std::cout << "How many?";

	int rangeSize{};
	std::cin >> rangeSize;

	std::vector<int> modSquareNumArr(rangeSize, 0);

	int randMult{marlin::getRandomIntInRange(2, 4)}; // Should be between [2, 4]
	randMult = 4;

	
	for (int offset{}; offset < rangeSize; ++offset) {
		modSquareNumArr[offset] = baseNum + offset;
	}
	
	// Take the square of each number and multiply by the randMult
	std:for_each(modSquareNumArr.begin(), modSquareNumArr.end(), [&randMult](int& num){
				num = num * num * randMult;
	});

	std::cout << "I generated " << rangeSize << " square numbers. Do you know what each number is after multiplying it by " <<  randMult << '\n';;


	int numOfNumsToGuess{rangeSize};
	int lastGuessedNum{};

	while (numOfNumsToGuess > 0) {

		std::cin >> lastGuessedNum;
		
		auto findResult = std::find(modSquareNumArr.begin(), modSquareNumArr.end(), lastGuessedNum);
		if (findResult != modSquareNumArr.end()) {
			modSquareNumArr.erase(findResult);
			std::cout << "Nice! " << --numOfNumsToGuess << " numbers left.\n";
		} else {
			std::cout << lastGuessedNum << " is wrong!\n";
			// Do a special print if the number was +-4 from a potentially correct guess
			int minElement = *std::min_element(modSquareNumArr.begin(), modSquareNumArr.end(), [lastGuessedNum](const int& first, const int& second) -> bool {
					int diffFirst{std::abs(first - lastGuessedNum)};
					int diffSecond{std::abs(second - lastGuessedNum)};

					if (diffFirst <= 4 && diffSecond <= 4) {
						return diffSecond - diffFirst;
					} else if (diffFirst <= 4) {
						return true;
					} else {
						return false;
					}

			});

			if (std::abs(lastGuessedNum - minElement) <= 4) {
				std::cout << lastGuessedNum << " is wrong! Try " << minElement << " next time.\n"; 
			} 
			return 0;
		}
	}

	std::cout << "Nice! You found all the numbers, good job!\n";

	return 0;
}
