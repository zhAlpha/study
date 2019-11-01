cmake_minimum_required(VERSION 2.8)
project(useEigen)
set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_STANDARD 11)

include_directories( "/usr/include/eigen3")

#find_package(eigen REQUIRED)

add_executable(useEigen main.cpp)