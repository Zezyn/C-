cmake_minimum_required(VERSION 3.3)
project(Midterm)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp data.cpp data.h)
add_executable(Midterm ${SOURCE_FILES})