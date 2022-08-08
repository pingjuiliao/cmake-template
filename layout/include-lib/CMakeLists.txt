cmake_minimum_required(VERSION 3.16)

project(include_lib)
set(LIB_DIR ${PROJECT_SOURCE_DIR}/lib)
set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)

add_subdirectory(lib)
add_subdirectory(exec)

