cmake_minimum_required(VERSION 3.10)

project(demo5)

set(OpenCV_DIR "/home/pi/opencv_build/opencv/build/opencv2")


find_package(OpenCV REQUIRED)
find_library(WIRINGPI_LIBRARIES NAMES wiringPi)

message("WARNING" "OpenCV_INCLUDE_DIRS:" ${OpenCV_INCLUDE_DIRS})
message("WARNING" "OpenCV_LIBS:" ${OpenCV_LIBS})

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(demo5 FSR_1.cpp)
target_link_libraries(demo5 ${OpenCV_LIBS})
target_link_libraries(demo5 ${WIRINGPI_LIBRARIES})
