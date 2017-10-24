cmake_minimum_required(VERSION 3.8)
project(string)

set(CMAKE_CXX_STANDARD 14)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

enable_testing()

set(SOURCE_FILES unit_tests.cpp)

add_executable(unittest_string ${SOURCE_FILES})
target_link_libraries(unittest_string ${GTEST_LIBRARIES} pthread)