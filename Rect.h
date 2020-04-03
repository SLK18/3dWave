#pragma once

#include "Triangle.h"

class Rect
{

	enum MODE { WIREFRAME, HALF, FULL};

public:
	Triangle tleft, tright;
	Rect();
	Rect(Point, Point, Point, Point);

	void draw(int MODE = WIREFRAME);
};

