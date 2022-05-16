cmake_minimum_required(VERSION 3.23)
project(MonteCarlo_PI_Demo C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

add_executable(MonteCarlo_PI_Demo main.c)

include_directories(mc_pi)
add_subdirectory(mc_pi)

target_link_libraries(MonteCarlo_PI_Demo MonteCarlo_PI)

add_subdirectory(tests)