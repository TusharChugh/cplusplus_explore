cmake_minimum_required(VERSION 3.8)
project(poker_game_test)

set(CMAKE_CXX_STANDARD 17)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

enable_testing()

set(SOURCE_FILES poker_game/create_card.cpp main.cpp)

add_executable(poker_game_test ${SOURCE_FILES})
target_link_libraries(poker_game_test ${GTEST_LIBRARIES} pthread)