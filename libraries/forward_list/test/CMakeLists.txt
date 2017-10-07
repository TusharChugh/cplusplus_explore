cmake_minimum_required(VERSION 3.8)
project(forward_list_test)

set(CMAKE_CXX_STANDARD 14)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

enable_testing()

set(SOURCE_FILES forward_list/insert_values.cpp main.cpp)

add_executable(test_forward_list ${SOURCE_FILES})
target_link_libraries(test_forward_list ${GTEST_LIBRARIES} pthread)

