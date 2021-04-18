include_directories($PROJECT_SOURCE_DIR}/lib)

aux_source_directory(./ DIR_SRCS)

add_executable(feed ${DIR_SRCS})

SET(OpenCV_DIR "/home/pi/Downloads/opencv-3.4.8/include/opencv2")

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
target_link_libraries(feed ${OpenCV_LIBS})
target_link_libraries(feed ${CMAKE_THREAD_LIBS_INIT})
target_link_libraries(feed ${WIRINGPI_LIBRARIES})
target_link_libraries(feed Lib)




