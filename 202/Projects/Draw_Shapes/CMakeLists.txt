cmake_minimum_required(VERSION 3.3)
project(c15_7)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES c15_7.cpp figure.h figure.cpp rectangle.h rectangle.cpp triangle.h triangle.cpp)
add_executable(c15_7 ${SOURCE_FILES})