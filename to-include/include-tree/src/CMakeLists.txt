
set(MAIN_SRC main.cc ${INCLUDE_DIR}/MyAPI/util/log.h)

add_executable(main
  ${MAIN_SRC})

message("include dir is :")
message(${INCLUDE_DIR})

target_include_directories(main
  PRIVATE ${INCLUDE_DIR})
