cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(test)

aux_source_directory(. DIR_SRCS)

add_executable(test ${DIR_SRCS})

find_library(WIRINGPI_LIBRARIES NAMES wiringPi)

target_link_libraries(test ${WIRINGPI_LIBRARIES})





