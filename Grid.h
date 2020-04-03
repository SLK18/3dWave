#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "Rect.h"
#include <vector>

class Grid
{
public:

	std::vector<std::vector<Rect>> g;

	Grid(const int, const int);
	void draw();
	void wavedist(const int ceiling = 1);
};

