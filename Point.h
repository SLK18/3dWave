#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Point
{
public:
	GLfloat x, y, z;

	Point operator +(Point const&);
	Point operator -(Point const&);
	void operator =(Point const&);
	Point operator /(GLfloat const&);


	Point();
	Point(GLfloat const&, GLfloat const&, GLfloat const&);

	Point Midpoint(Point, Point);
};

