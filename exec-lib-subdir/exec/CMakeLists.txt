cmake_minimum_required(VERSION 3.8)
#message(${LIB_DIR})
add_executable(Main main.cc)
#target_include_directories(Main
#    PRIVATE ${PROJECT_SOURCE_DIR}/${LIB_DIR})
target_link_libraries(Main PRIVATE MyLib)
