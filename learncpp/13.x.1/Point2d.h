#ifndef POINT2D_H
#define POINT2D_H

class Point2d {
	private:
		double _x{};
		double _y{};
	public:
		Point2d(double x=0.0, double y=0.0);

		void print();

		double distanceTo(Point2d& otherPoint) const;

		friend double distanceFrom(const Point2d& first, const Point2d& second);
};
#endif
