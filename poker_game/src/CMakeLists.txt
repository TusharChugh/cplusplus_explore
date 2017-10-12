cmake_minimum_required(VERSION 3.8)
project(poker_game)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES poker_game/pips.cpp poker_game/card.cpp main.cpp ../include/poker_game/deck.h poker_game/deck.cpp)

add_executable(poker_game ${SOURCE_FILES})