#include "Reader.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Reader::Reader()
{
}

Reader::~Reader() // later
{
    this->clear();
}

void Reader::setup(string filePath)
{
    ifstream file(filePath);
    int fSize;
    string ftype;
    int findex;
    Wagon* wag;
    file >> fSize;
    for (int i = 0; i < fSize; i++)
    {
        wag = new Wagon;
        this->_memStack.push(wag);
        file >> ftype >> findex;
        wag->setCargoType(ftype);
        wag->setCargoIndex(findex);
        this->_train.push(wag);
    }
}

Train Reader::getTrain()
{
    return this->_train;
}

void Reader::clear()
{
    int sz = this->_train.getSize();
    for (int i = 0; i < sz; i++)
    {
        this->_train.pop();
    }
    while (this->_memStack.size() > 0)
    {
        Wagon* p = this->_memStack.top();
        if (p != nullptr) delete p;
        this->_memStack.pop();
    }
}