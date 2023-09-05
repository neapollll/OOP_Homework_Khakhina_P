#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "IShape.h"

class Rectangle:public IShape
{
   private:
    double a;
    double b;
public:
   Rectangle (double ra, double rb);
   double calcSquare();
};

#endif
