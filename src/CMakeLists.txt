add_library(
  cfilesize
  STATIC cfilesize.c
)
target_include_directories(
  cfilesize
  PUBLIC "${CMAKE_SOURCE_DIR}/include"
)

if(UNIX)
  add_library(
    cfilesize_unix
    OBJECT cfilesize_unix.c
  )
  target_include_directories(
    cfilesize_unix
    PRIVATE "${CMAKE_SOURCE_DIR}/include"
  )
  target_link_libraries(cfilesize $<TARGET_OBJECTS:cfilesize_unix>)
elseif(WIN32)
endif()
