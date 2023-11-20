#include "ptr.h"
#include "my_unique_ptr.h"
#include "weak_ptr.h"
#include <utility>
#include <iostream>

void check() {


    my_unique_ptr<int> p1(new int(100));
    my_unique_ptr<int> p2(new int(200));
    my_unique_ptr<int> p3(new int(2));

    std::cout << "Data p1: " << *p1 << "\n";
    std::cout << "Data p2: " << *p2 << "\n";
    std::cout << "Data p3: " << ((p3) ? "unique ptr" : "not unique ptr") << "\n";

    p3.release();
    std::cout << "Data p1: " << *p1 << "\n";
    std::cout << "Data p2: " << *p2 << "\n";
    std::cout << "Data p3: " << ((p3) ? "unique ptr" : "not unique ptr") << "\n";

    p1.swap(p3);
    std::cout << "Data p1: " << ((p1) ? "unique ptr" : "not unique ptr") << "\n";
    std::cout << "Data p3: " << ((p3) ? "unique ptr" : "not unique ptr") << "\n";

}

int main() {

    std::cout << "Tests\n";
    weak_ptr<int> test;
    {
        My_shared_ptr<int> sp(new int(42));
        test.ch_zero(&sp);
        std::cout << "count : " << sp.use_count() << std::endl;
        std::cout << "count : " << test.use_count() << std::endl;
        std::cout << "value : " << test.lock().get() << std::endl;
        std::cout << "value : " << sp.get() << std::endl;

    }
    std::cout << "count : " << test.use_count() << std::endl;
    if (test.use_count() == 0) std::cout << "empty!" << std::endl;
    //observe();
    
    my_unique_ptr<int> p1(new int(100));
    my_unique_ptr<int> p2(new int(200));
    my_unique_ptr<int> p3(new int(2));
    check();
    return 0;
}