cmake_minimum_required(VERSION 3.8)
project(tests)

set(CMAKE_CXX_STANDARD 14)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(SOURCE_FILES main.cpp)
add_executable(tests ${SOURCE_FILES})
target_link_libraries(tests ${GTEST_LIBRARIES} pthread)