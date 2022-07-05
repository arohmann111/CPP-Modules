#include "Point.hpp"

/* Constructors & Destructor */
Point::Point() : _x(0), _y(0) {}

Point::~Point() {}

/*
	A copy constructor is a member function that initializes an 
	object using another object of the same class.
*/
Point::Point(const Point &other)
{
	*this = other;
}

Point::Point(const float i, const float j) : _x(i), _y(j) {}

Point &Point::operator=(const Point &other)
{
	// this->_x = other.getX();
	// this->_y = other.getY();
	if (this == &other)
		return (*this);
	return *this;
}

float Point::getX() const
{
	return this->_x.toFloat();
}

float Point::getY() const
{
	return this->_y.toFloat();
}

float sign(const Point point, const Point pt1, const Point pt2)
{
	return ((point.getX() - pt2.getX()) * (pt1.getY() - pt2.getY())
			- (pt1.getX() - pt2.getY()) * (point.getY() - pt2.getY()));
}
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float d1, d2, d3;
	bool hasNeg, hasPos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	hasNeg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	hasPos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	
	return !(hasNeg && hasPos);
}
