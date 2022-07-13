cmake_minimum_required(VERSION 3.8)

# LIB_DIR is inherited by the project's CMakeLists.txt
#message(${LIB_DIR})
add_executable(Main main.cc)

# NOTE: does not seem to require include directories even they are not in the same dir
#target_include_directories(Main
#    PRIVATE ${PROJECT_SOURCE_DIR}/${LIB_DIR})
target_link_libraries(Main PRIVATE MyLib)
