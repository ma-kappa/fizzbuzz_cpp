cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_COMPILER, "g++")
set(CMAKE_CXX_FLAGS "-Wall -std=c++11")
set(CMAKE_CXX_FLAGS_DEBUG, "-O0 -g")

project(fizzbuzz, CXX)

add_executable(
    fizzbuzz
    src/main.cpp
)
