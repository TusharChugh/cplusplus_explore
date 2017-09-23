#include <iostream>
#include "LinkedList.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    tlib::LinkedList<int> int_list;
    int_list.insert_start(1);
    int_list.insert_start(2);
    int_list.insert_start(3);
    int_list.insert_start(4);

    int_list.print(std::cout);
    return 0;
}