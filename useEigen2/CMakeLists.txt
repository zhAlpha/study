cmake_minimum_required(VERSION 3.15)
project(useEigen2)

set(CMAKE_CXX_STANDARD 11)

include_directories(/usr/include/eigen3)

add_executable(useEigen2 main.cpp)