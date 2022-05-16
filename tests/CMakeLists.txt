project(Tests)

add_executable(Google_Tests_run vector_test.cpp)

target_link_libraries(Google_Tests_run MonteCarlo_PI)

target_link_libraries(Google_Tests_run gtest gtest_main)