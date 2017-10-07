cmake_minimum_required(VERSION 3.8)
project(forward_list)

set(CMAKE_CXX_STANDARD 14)

set(PROJECT_NAME forward_list)
set(PROJECT_SOURCE_DIR src)

set(SOURCE_FILES include/forward_list/forward_list_node.h include/forward_list/forward_list.h)
include_directories(include)
#add_executable(forward_list ${SOURCE_FILES})

add_library(forward_list STATIC ${SOURCE_FILES})

target_link_libraries(forward_list)

#add_subdirectory(src)
add_subdirectory(test)