cmake_minimum_required(VERSION 3.10)

project(demo6)

set(OpenCV_DIR "/home/pi/opencv_build/opencv/build/opencv2")


find_package( OpenCV REQUIRED)

message("WARNING" "OpenCV_INCLUDE_DIRS:" ${OpenCV_INCLUDE_DIRS})
message("WARNING" "OpenCV_LIBS:" ${OpenCV_LIBS})

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(demo6 opencvtakep.cpp)
target_link_libraries(demo6 ${OpenCV_LIBS})
