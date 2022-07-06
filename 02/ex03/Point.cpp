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
	this->_x = other.getY();
	this->_y = other.getX();
	return *this;
}

/*member functions*/
const Fixed &Point::getX() const
{
	return this->_x;
}

const Fixed &Point::getY() const
{
	return this->_y;
}
