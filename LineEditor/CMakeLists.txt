cmake_minimum_required(VERSION 3.5)
project(LineEditor)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp lineEditor.cpp lineEditor.h)
add_executable(LineEditor ${SOURCE_FILES} lineEditor.cpp lineEditor.h)