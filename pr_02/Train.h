#ifndef TRAIN_H
#define TRAIN_H

#include "Wagon.h"

class Train
{
public:
    Train();

    Wagon* at(int i = 0);
    void push(Wagon*);
    void pop();
    int getSize();
  //additionally
    void info();

private:
    Wagon* _start;
    int _size;

};

#endif
