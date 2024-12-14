cmake_minimum_required(VERSION 3.16)
project(
  cfilesize
  VERSION 0.1
  DESCRIPTION "A portable C library to find the size of a file."
  LANGUAGES C CXX
)

include(CTest)
include(CPack)

add_subdirectory(src)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
  if(BUILD_TESTING)
    add_subdirectory(test)
  endif()
  if(BUILD_DOCS)
    find_package(Doxygen)
    if(NOT Doxygen_FOUND)
      message(
        FATAL_ERROR
        "Doxygen not found. Please install Doxygen or disable documentation generation."
      )
    endif()
    doxygen_add_docs(
      docs
      ${PROJECT_SOURCE_DIR}
    )
  endif()
endif()
