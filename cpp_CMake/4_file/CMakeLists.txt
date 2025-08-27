cmake_minimum_required(VERSION 3.15)
project(test)
# CMAKE_CURRENT_SOURCE_DIR = /home/u64/cpp_CMake/4_file
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
set(EXECUTABLE_OUTPUT_PATH /home/u64/cpp_CMake/2/aa/bb/cc)
set(CMAKE_CXX_STANDARD 11)
add_executable(app ${SRC})