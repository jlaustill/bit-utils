
cmake_minimum_required(VERSION 3.26)
project(bit-utils)


add_subdirectory(tests)
add_library(bit-utils bit-utils.h
        bit-utils.cpp)
