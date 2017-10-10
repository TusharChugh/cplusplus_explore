cmake_minimum_required(VERSION 3.8)
project(poker_game)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_subdirectory(src)
target_link_libraries(poker_game)
add_subdirectory(test)
