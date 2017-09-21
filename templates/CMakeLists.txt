cmake_minimum_required(VERSION 3.8)
project(templates)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp TypenamedID.cpp SimpleAddNumbers.cpp)
add_executable(templates ${SOURCE_FILES})