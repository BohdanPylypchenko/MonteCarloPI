cmake_minimum_required(VERSION 3.23)
project(MonteCarlo_PI C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

set(HEADER_FILES
        vector/vector.h
        )
set(SOURCE_FILES
        vector/vector.c
        )

add_library(MonteCarlo_PI STATIC ${SOURCE_FILES} ${HEADER_FILES})

target_link_libraries(MonteCarlo_PI)
