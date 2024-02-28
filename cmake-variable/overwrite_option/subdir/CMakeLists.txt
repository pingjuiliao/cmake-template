
option(SUBDIR_SAYS_HELLO
  "subdirectories says hello" OFF)

if (SUBDIR_SAYS_HELLO)
   message("subdirectory says hello!!!!!!")
endif()

if (ROOT_SAYS_HELLO)
  message("root says hello!!!!!")
endif()
