cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(spfr)

aux_source_directory(. DIR_SRCS)

add_executable(${PROJECT_NAME} ${DIR_SRCS})

SET(OpenCV_DIR "/home/pi/opencv_build/opencv/build/opencv2")

find_package(OpenCV REQUIRED)
find_package (Threads)
find_library(WIRINGPI_LIBRARIES NAMES wiringPi)

if(OpenCV_NOT_FOUND)
    message((FATAL_ERROR "opencv library not found"))
endif()

# include dirctories
target_include_directories(${PROJECT_NAME} PUBLIC
    ${OpenCV_INCLUDE_DIRS}
)
message(${OpenCV_INCLUDE_DIRS})



#libraries
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
target_link_libraries(${PROJECT_NAME} ${CMAKE_THREAD_LIBS_INIT})
target_link_libraries(${PROJECT_NAME} ${WIRINGPI_LIBRARIES})
#target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES} core)




