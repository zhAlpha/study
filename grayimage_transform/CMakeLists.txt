cmake_minimum_required(VERSION 2.8)
project(grayimage_transform)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(/usr/local/include/ExcelFormat)

set(CMAKE_CXX_STANDARD 11)

#add_executable(grayimage_transform main.cpp)
add_executable(grayimage_transform BasicExcel.cpp ExcelFormat.cpp main.cpp)
#add_executable(grayimage_transform1 BasicExcel.cpp ExcelFormat.cpp main1.cpp)
target_link_libraries(grayimage_transform ${OpenCV_LIBS})
#target_link_libraries(grayimage_transform1 ${OpenCV_LIBS})