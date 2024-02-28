cmake_minimum_required(VERSION 3.8)

project("test option")
option(ROOT_SAYS_HELLO
      "say hello in root dir" OFF)
set(BUILD_SHARED_LIBS OFF)
set(SUBDIR_SAYS_HELLO ON CACHE BOOL "setting option in outer cmakelists")

add_subdirectory(subdir)
