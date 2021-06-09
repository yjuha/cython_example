cmake_minimum_required(VERSION 3.17)

set(APP useful)

project(${APP})

find_package(OpenCV REQUIRED)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${OpenCV_INCLUDE_DIRS})

add_library(${APP} SHARED src/myclass.cpp)

target_link_libraries(${APP} ${OpenCV_LIBS})
