#include <iostream>
#include "TypenamedID.cpp"
#include "SimpleAddNumbers.cpp"

//Note: No if def's used. Be careful

void run_TypenamedID() {
    Y y;
    X<Y> xy;
    xy.f();
}

int main() {
    run_TypenamedID();
    std::cout<<std::endl;
    std::cout<<"Adding two ints :"<< add_numbers(2, 3)<<std::endl;
    std::cout<<"Adding two doubles :"<< add_numbers(2.2, 3.5)<<std::endl;
    return 0;
}