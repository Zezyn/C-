cmake_minimum_required(VERSION 3.5)
project(Sorting_Template)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Template_Queue.cpp Template_Queue.h)
add_executable(Sorting_Template ${SOURCE_FILES})