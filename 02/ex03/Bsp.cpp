#include "Point.hpp"

float sign(const Point p0, const Point pt1, const Point pt2)
{
	return ((p0.getX().toFloat() - pt2.getX().toFloat()) * (pt1.getY().toFloat() - pt2.getY().toFloat())
			- (pt1.getX().toFloat() - pt2.getY().toFloat()) * (p0.getY().toFloat() - pt2.getY().toFloat()));
}
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float d1, d2, d3;
	bool hasNeg, hasPos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	hasNeg = (d1 <= 0) || (d2 <= 0) || (d3 <= 0);
	hasPos = (d1 >= 0) || (d2 >= 0) || (d3 >= 0);
	
	return !(hasNeg && hasPos);
}
