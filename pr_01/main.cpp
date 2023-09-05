#include <iostream>

#include <RedSquare.h>
#include <Circle.h>
#include <Triangle.h>
#include <Rectangle.h>

int main()
{
    RedSquare bigSquare;
    bigSquare.addShape(new Circle(25));
    bigSquare.addShape(new TriAngle(30));
    bigSquare.addShape(new Rectangle(50, 20));
    std::cout << bigSquare.calcSquare() << std::endl;
    return 0;

}
