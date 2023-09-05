#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "IShape.h"

class TriAngle:public IShape
{
   private:
    double a;
    double h;
public:
   TriAngle (double ta);
   double calcSquare();
};

#endif
