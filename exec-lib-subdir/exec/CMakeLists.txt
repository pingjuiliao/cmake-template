cmake_minimum_required(VERSION 3.8)

# LIB_DIR_NAME is inherited by the project's CMakeLists.txt
#message(${LIB_DIR_NAME})

add_executable(Main main.cc)


## include foo.h for main.cc
target_include_directories(Main
    PRIVATE ${PROJECT_SOURCE_DIR}/${LIB_DIR_NAME})
## NOTE: there's an alternative way to do so. see ../${LIB_DIR_NAME}/CMakeLists.txt for more INFO

## TODO: search for independence of file path
#
# target_include_directories(Main PRIVATE MyLib)
#                            ^target      ^target
# It would be nice if we can do
#
# We have setup some target names for the project. That is, "Main" and "MyLib"
# created by add_executable(), add_library(). However, in these Makefile, these
# target names are not tightly coupled with the file path. Here, we use
# PROJECT_SOURCE_DIR/LIB_DIR_NAME to do the work, which seems
#

# PRIVATE works here
target_link_libraries(Main PRIVATE MyLib)
