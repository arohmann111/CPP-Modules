#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
public:
	Point();
	Point(const float i, const float j);
	Point(const Point &other);
	Point &operator=(const Point &other);
	~Point();

	const Fixed &getX() const;
	const Fixed &getY() const;

private:
	Fixed _x;
	Fixed _y;
};


bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif