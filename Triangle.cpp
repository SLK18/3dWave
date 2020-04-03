
#include "Triangle.h"
#include "Point.h"
#include <math.h>

Triangle::Triangle(): a{ 0,0,0 },
b{ 0,0,1 }, c{ 0,1,1 }{}

Triangle::Triangle(Point q, Point w, Point e): a { q },
b{ w }, c{ e } {}

void Triangle::draw(GLenum MODE)
{
    glBegin(MODE);
    glColor3f(0, 0, sin(a.z));
    glVertex3f(a.x,a.y,a.z);
    glColor3f(1, 0, cos(b.z));
    glVertex3f(b.x,b.y,b.z);
    glColor3f(.5, 1, cos(c.z));
    glVertex3f(c.x,c.y,c.z);
    glEnd();
}
