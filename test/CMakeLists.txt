set(Test_SRCS sample_unittest.cc)

add_executable(${CMAKE_PROJECT_NAME}_test ${Test_SRCS})
target_link_libraries(${CMAKE_PROJECT_NAME}_test gtest gmock gtest_main core)
