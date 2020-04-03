#include "Point.h"


Point Point::operator +(Point const& other)
{
	Point p;
	p.x = this->x + other.x;
	p.y = this->y + other.y;
	p.z = this->z + other.z;
	return p;
}

Point Point::operator -(Point const& other)
{
	Point p;
	p.x = this->x - other.x;
	p.y = this->y - other.y;
	p.z = this->z - other.z;
	return p;
}

void Point::operator =(Point const& other)
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
}

Point Point::operator /(GLfloat const& d)
{
	Point p;
	p.x = this->x / d;
	p.y = this->y / d;
	p.z = this->z / d;
	return p;
}

Point::Point(): x(0),y(0),z(0){}

Point::Point(GLfloat const& q, GLfloat const& w, GLfloat const& e): x(q), y(w), z(e){}

Point Point::Midpoint(Point a, Point b)
{
	return (a + b) / 2;
}
