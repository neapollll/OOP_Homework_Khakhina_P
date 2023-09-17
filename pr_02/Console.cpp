#include "Console.h"
#include <iostream>
using namespace std;
#include <string>

Console::Console()
{
}

Console::~Console()
{
    this->clear();
}

void Console::setup()
{
    /*if (this->_train.getSize() > 0)
    {
        cout << "\t| ERROR : THIS TRAIN HAS ALREADY BEEN ASSEMBLED, DELETE IT OR USE NEW ONE";
        cout << endl;
        return;
    }*/

    cout << "> enter the number of wagons \n < ";
    int inSize;
    cin >> inSize;
    for (int i = 0; i < inSize; i++)
    {
        string str;
        int wInd;
        int tInd;
        Wagon* wag = new Wagon;
        this->_memStack.push(wag);
        cout << "> train # " << inSize - i << "\n";
        cout << "> enter the type of cargo\n";
        cout << "> 1 - coal; 0 - wood\n";
        cin >> tInd;
        if (tInd == 1)
        {
            str = "coal";
        }
        else {
            str = "wood";
        }
        wag->setCargoType(str);
        cout << "> enter the unique ID of wagon\n < ";
        cin >> wInd;
        wag->setCargoIndex(wInd);
        this->_train.push(wag);
        cout << "___\n";
    }
    cout << "\n";
}


Train Console::getTrain()
{
    return this->_train;
}

void Console::clear()
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
