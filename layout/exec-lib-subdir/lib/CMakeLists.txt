cmake_minimum_required(VERSION 3.8)

add_library(MyLib foo.cc)

### some weird stuff:
#  target_include_directories is not really required here because
#  the header file and the source file is in the same directory (linux)
# However, adding the following lines (3 choose 1)

# 1 # main.cc linked successfully includes the foo.h
#
# target_include_directories(MyLib
#    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
#
# 2 # main.cc linked successfully includes the foo.h
#
# target_include_directories(MyLib
#    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
#
# 3 # main.cc cannot include the foo.h
#
# target_include_directories(MyLib
#    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
#
