#ifndef CONSOLE_H
#define CONSOLE_H

#include "Train.h"

#include <stack>
#include <string>
using namespace std;

class Console
{
public:
    Console();
    ~Console();

    void setup();
    Train getTrain();
    void clear();
private:
    Train _train;
    stack<Wagon*> _memStack;

};


#endif