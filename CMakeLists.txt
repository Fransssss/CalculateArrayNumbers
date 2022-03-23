cmake_minimum_required(VERSION 3.21)
project(CalculateArrayItems)

set(CMAKE_CXX_STANDARD 14)

add_executable(CalculateArrayItems main.cpp SumArray.cpp SumArray.h ProductArray.cpp ProductArray.h)
