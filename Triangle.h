
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "Point.h"

class Triangle
{
	public:

		Point a, b, c;

		Triangle();
		Triangle(Point, Point, Point);

		void draw(GLenum MODE = GL_TRIANGLES);
};
