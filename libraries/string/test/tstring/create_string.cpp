#include <gtest/gtest.h>
#include <tstring/tstring.h>

TEST(CREATESTRING, SETANDGET) {
    tlib::tstring input("Hello");
    ASSERT_STREQ("Hello", input.c_str());
}


