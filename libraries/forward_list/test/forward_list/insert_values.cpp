#include <gtest/gtest.h>
#include "forward_list/forward_list.h"


TEST(LISTINPUTSIZE, LISTOUTPUTSIZE) {
    tlib::LinkedList<int> int_list;
    int_list.insert_start(1);
    int_list.insert_start(2);
    int_list.insert_start(3);
    int_list.insert_start(4);
    ASSERT_EQ(4, int_list.size());
}
