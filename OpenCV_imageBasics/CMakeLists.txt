cmake_minimum_required(VERSION 2.8)
project(OpenCV_imageBasics)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV 3 REQUIRED)

INCLUDE_DIRECTORIES(${OpenCV_INCLUDE_DIRS})

add_executable(OpenCV_imageBasics main.cpp)

target_link_libraries(OpenCV_imageBasics ${OpenCV_LIBS})