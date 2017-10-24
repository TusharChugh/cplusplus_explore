cmake_minimum_required(VERSION 3.8)
project(string)

set(CMAKE_CXX_STANDARD 14)

#add_library(string STATIC
#        ../include/forward_list/forward_list.h)

target_link_libraries(string)
#target_include_directories(forward_list PRIVATE
#        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/forward_list>
#        $<INSTALL_INTERFACE:include/forward_list>
#        )
#
#target_include_directories(forward_list PUBLIC
#        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#        $<INSTALL_INTERFACE:include>
#        )

