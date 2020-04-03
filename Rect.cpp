
#include "Rect.h"

Rect::Rect(){}

Rect::Rect(Point left_top, Point left_bot, Point right_top, Point right_bot) : tleft(left_top, left_bot, right_top),
   tright(left_bot,right_top,right_bot){}

void Rect::draw(int MODE)
{
    if (tright.a.z < .34 && tright.a.z > -.32) {
        MODE = HALF;
    }
    else if (tright.a.z > .34) {
        MODE = FULL;
    }

    if(MODE == WIREFRAME){
        tleft.draw(GL_LINE_LOOP);
        tright.draw(GL_LINE_LOOP);
    }
    else if (MODE == HALF) {
        tleft.draw();
        tright.draw(GL_LINE_LOOP);
    }
    else {
        tleft.draw();
        tright.draw();
    }
}
