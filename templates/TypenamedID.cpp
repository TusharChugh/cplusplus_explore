//Thinking in C++. Chap 3

#include <iostream>

//Now we can use typename instead of class
template <typename T> class X {
    //Without typename we should get an error here
    typename T::id i;
public:
    void f() {
        i.g();
    }
};

class Y {
public:
    class id {
    public:
        void g() {
            std::cout<<"Hello from g()";
        }
    };
};
