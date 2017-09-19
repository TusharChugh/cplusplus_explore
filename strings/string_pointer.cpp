//C++ primer
//Chap 1
#include <iostream>

int main() {
    std::string s1("123456");
    std::string::iterator it = s1.begin();

    std::string s2 = s1;

    *it = '0';

    std::cout<<"s1 = "<<s1<<std::endl;
    std::cout<<"s2 = "<<s2<<std::endl;

    return 0;
}