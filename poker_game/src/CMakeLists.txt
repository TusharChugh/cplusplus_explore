cmake_minimum_required(VERSION 3.8)
project(poker_game)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES poker_game/pips.cpp poker_game/card.cpp main.cpp)

add_executable(poker_game ${SOURCE_FILES})