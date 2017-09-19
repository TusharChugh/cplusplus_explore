cmake_minimum_required(VERSION 3.8)
project(strings)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES string_pointer.cpp)
add_executable(strings ${SOURCE_FILES})