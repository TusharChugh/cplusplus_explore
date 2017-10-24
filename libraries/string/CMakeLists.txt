cmake_minimum_required(VERSION 3.8)
project(string)

set(CMAKE_CXX_STANDARD 14)

set(PROJECT_NAME string)
set(PROJECT_SOURCE_DIR src)

set(SOURCE_FILES include/string.h)
include_directories(include)

add_library(string STATIC ${SOURCE_FILES})

#add_executable(basic_string ${SOURCE_FILES})

#target_link_libraries(string)

add_subdirectory(src)
add_subdirectory(test)