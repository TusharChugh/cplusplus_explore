#include <gtest/gtest.h>
#include <tstring/tstring.h>
#include <string>

std::string string_input = "Hello";

TEST(CREATESTRING, SETANDGET) {

    tlib::tstring input("Hello");
    ASSERT_STREQ(string_input.c_str(), input.c_str());
}


