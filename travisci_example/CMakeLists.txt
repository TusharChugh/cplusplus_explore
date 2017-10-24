cmake_minimum_required(VERSION 2.8)
project(travisci_example)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)

add_executable(travisci_example ${SOURCE_FILES})

