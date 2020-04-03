#include "Grid.h"

#include <math.h>

Grid::Grid(const int width, const int height)
{
	g.resize(width, std::vector<Rect>(height));
	GLfloat w = width - (width / 2), h = height - (height / 2);

	for (GLfloat x = 0; x < width; x++) {
		for (GLfloat y = 0; y < height; y++) {
			Point start = { (GLfloat)x - w,(GLfloat)y - h,(GLfloat)0 };
			Point end = { (GLfloat)x + 1 - w,(GLfloat)y + 1 - h,(GLfloat)0 };
			Point corner1 = { (GLfloat)x + 1 - w, (GLfloat)y - h, (GLfloat)0 };
			Point corner2 = { (GLfloat)x - w, (GLfloat)y + 1 - h, (GLfloat)0 };

			g[x][y] = Rect(corner1,start,end,corner2);
		}
	}
}

void Grid::draw() {
	for (int i = 0; i < g.size(); i++) {
		for (int k = 0; k < g[i].size(); k++) {
			g[i][k].draw();
		}
	}
}

void Grid::wavedist(const int ceiling)
{
	const double amp = .5, p = .8;
	for (int i = 0; i < g.size(); i++) {
		for (int k = 0; k < g[i].size(); k++) {
			g[i][k].tleft.a.z = amp * sin(p*(glfwGetTime() - i - 1));
			g[i][k].tleft.b.z = amp * sin(p*(glfwGetTime() - i));
			g[i][k].tleft.c.z = amp * sin(p*(glfwGetTime() - i - 1));

			g[i][k].tright.a.z = amp * sin(p*(glfwGetTime() - i));
			g[i][k].tright.b.z = amp * sin(p*(glfwGetTime() - i - 1));
			g[i][k].tright.c.z = amp * sin(p*(glfwGetTime() - i));

		}
	}
}
