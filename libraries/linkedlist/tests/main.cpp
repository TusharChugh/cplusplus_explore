#include <iostream>
#include "../LinkedList.h"
#include <gtest/gtest.h>

TEST(LISTINPUTSIZE, LISTOUTPUTSIZE) {
    tlib::LinkedList<int> int_list;
    int_list.insert_start(1);
    int_list.insert_start(2);
    int_list.insert_start(3);
    int_list.insert_start(4);
    ASSERT_EQ(4, int_list.size());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}