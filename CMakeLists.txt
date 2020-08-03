cmake_minimum_required(VERSION 3.17)
project(Cross)

set(CMAKE_CXX_STANDARD 17)

add_executable(Cross src/main.cpp src/test.cpp Includes/test.h)
target_link_libraries(Cross -lOpenGL32 -lfreeGLUT)