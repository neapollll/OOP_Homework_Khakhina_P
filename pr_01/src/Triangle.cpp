#include "Triangle.h"
#include <math.h>

TriAngle::TriAngle(double ta)
{
    a = ta;
}
double TriAngle::calcSquare()
{
    return a * a * sqrt(3) / 4;
}
