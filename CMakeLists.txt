cmake_minimum_required(VERSION 2.8.4)
project(first)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall")

add_subdirectory(common)
add_subdirectory(cmd)
