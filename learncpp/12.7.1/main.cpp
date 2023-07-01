#include <array>
#include <algorithm>
#include <iostream>
#include <string>

struct Student
{
	std::string name;
	int points;
};

int main()
{
#if DEBUG
	std::cout << std::unitbuf;
#endif

	std::array<Student, 8> arr{
		{{"Albert", 3},
		 {"Ben", 5},
		 {"Christine", 2},
		 {"Dan", 8}, // Dan has the most points (8).
		 {"Enchilada", 4},
		 {"Francis", 1},
		 {"Greg", 3},
		 {"Hagrid", 5}}};

	const Student &studentHighestPoints{
		*std::max_element(arr.begin(), arr.end(), [](const Student &first, const Student &second) -> bool
						  { return (first.points < second.points); })};

	std::cout << studentHighestPoints.name << " is the best student\n";

	return EXIT_SUCCESS;
}
