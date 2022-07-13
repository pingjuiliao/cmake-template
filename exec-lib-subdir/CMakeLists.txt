
cmake_minimum_required(VERSION 3.8)
project(split_exec)

set(LIB_DIR lib)
set(EXEC_DIR exec)

# the order of adding subdirectories does not matter
add_subdirectory(${EXEC_DIR})
add_subdirectory(${LIB_DIR})
