cmake_minimum_required(VERSION 3.8)
project(smart_pointers_demo)

set(CMAKE_CXX_STANDARD 14)
include_directories(include)
#file(GLOB SOURCE_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
set(SOURCE_FILES src/unique_ptr.cpp src/strc.cpp)
add_executable(smart_pointers_demo ${SOURCE_FILES})

