#include "Rectangle.h"

Rectangle::Rectangle (double ra,double rb)
{
 a=ra;
 b=rb;
}
double Rectangle:: calcSquare()
{
    return a*b;
}
