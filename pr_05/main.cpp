#include "weak_ptr.h"
#include <utility>




void check() {
    
    
    weak_ptr<int> w1;
    weak_ptr<int> w2;
    //std::cout<<"Data w1: "<< w1<<"\n";
  


 

    w1.swap(w2);


}

void observe()
{
    weak_ptr<int> gw;
    std::cout << "gw.use_count() == " << gw.use_count() << "; ";
    // we have to make a copy of shared pointer before usage:
   /* if (std::shared_ptr<int> spt = gw.lock())
        std::cout << "*spt == " << *spt << '\n';
    else
        std::cout << "gw is expired\n";*/
}


int main() {

    std::cout << "Tests\n";
    check();
    observe();
    return 0;
}