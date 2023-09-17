#ifndef READER_H
#define READER_H

#include "Train.h"
#include <stack>
#include <string>
using namespace std;

class Reader
{
public:
    Reader();
    ~Reader();

    void setup(string);
    Train getTrain();
    void clear();
private:
    Train _train;
    stack<Wagon*> _memStack;

};


#endif
