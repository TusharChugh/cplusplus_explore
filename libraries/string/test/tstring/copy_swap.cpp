#include <gtest/gtest.h>
#include <tstring/tstring.h>
#include <string>

std::string string_ = "Hello";

TEST(COPYSTRING, COPYSTRING_COPY_CONSTRUCTOR_Test) {
    tlib::tstring input1("Hello");
    tlib::tstring input2(input1);
    ASSERT_STREQ(string_.c_str(), input2.c_str());
    ASSERT_STREQ(input2.c_str(), input1.c_str());
}

TEST(STRING_SWAP, STRING_SWAP_ASSIGNMENT_Test) {
    tlib::tstring input1("Hello");
    tlib::tstring input2 = input1;
    ASSERT_STREQ(string_.c_str(), input1.c_str());
    ASSERT_STREQ(input2.c_str(), input1.c_str());
}

TEST(STRING_SWAP, STRING_SWAP_NON_EMPTY_ASSIGNMENT_Test) {
    tlib::tstring input1("Hello");
    tlib::tstring input2("World");
    input2 = input1;
    ASSERT_STREQ(string_.c_str(), input1.c_str());
    ASSERT_STREQ(input2.c_str(), "Hello");
}

TEST(STRING_SWAP, STRING_CONCAT_OPERATOR_TEST) {
    tlib::tstring input1("Hello");
    tlib::tstring input2("World");
    input1 += input2;
    //ASSERT_STREQ(string_.c_str(), input1.c_str());
    ASSERT_STREQ(input1.c_str(), "HelloWorld");
}
