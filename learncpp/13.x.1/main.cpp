#include "Point2d.h"

#include <cmath>
#include <iostream>

double distanceFrom(const Point2d& first, const Point2d& second) {
	return std::sqrt((first._x - second._x) * (first._x - second._x) + (first._y - second._y) * (first._y - second._y));
}

int main() {
	Point2d first{};
    	Point2d second{ 3.0, 4.0 };
    	first.print();
    	second.print();
	
	std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';
	std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';
    	return 0;
}
