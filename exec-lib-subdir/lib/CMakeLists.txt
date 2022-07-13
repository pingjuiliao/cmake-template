cmake_minimum_required(VERSION 3.8)

add_library(MyLib foo.cc)
target_include_directories(MyLib
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
