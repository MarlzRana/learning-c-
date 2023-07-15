#include "Point2d.h"

#include <cmath>
#include <iostream>

Point2d::Point2d(double x, double y) : _x{x}, _y{y}
{
}

void Point2d::print() {
	std::cout << "Point2d(" << _x << ", " << _y << ")\n"; 
}

double Point2d::distanceTo(Point2d& otherPoint) const {
	return std::sqrt((_x - otherPoint._x) * (_x - otherPoint._x) + (_y - otherPoint._y ) * (_y - otherPoint._y ));
}
