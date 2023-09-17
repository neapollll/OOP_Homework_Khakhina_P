#include <iostream>
#include <string>

#include "Train.h"
#include "Wagon.h"
#include "Console.h"
#include "Reader.h"
using namespace std; 

int main(int, char**) {


    Train tr;

    Console cTrain;
    //cTrain.setup();
    //tr = cTrain.getTrain();

    Reader fTrain;
    fTrain.setup("train.txt");
    tr = fTrain.getTrain();

    tr.info();

    int sz = tr.getSize();

    Train tr1, tr2;
    Wagon* cur;
    for (int i = 0; i < sz; i++)
    {

        cur = tr.at(0);
        tr.pop();
        if (cur->getCargoType() == "coal")
        {
            tr1.push(cur);
        }
        else {
            tr2.push(cur);
        }

    }

    cout << "\ntr1.size = " << tr1.getSize() << endl;
    tr1.info();
    cout << "tr2.size = " << tr2.getSize() << endl;
    tr2.info();



    return 0;
}
