find_package(GTest REQUIRED)

file(COPY "${CMAKE_SOURCE_DIR}/test/test_data/" DESTINATION "${CMAKE_BINARY_DIR}/test/test_data")
add_executable(test_cfilesize test_cfilesize.cpp)
target_include_directories(test_cfilesize PUBLIC "${CMAKE_SOURCE_DIR}/include")
target_link_libraries(test_cfilesize PUBLIC GTest::gtest_main cfilesize)
gtest_discover_tests(
  test_cfilesize
  WORKING_DIRECTORY "${CMAKE_BINARY_DIR}/test/test_data"
)
