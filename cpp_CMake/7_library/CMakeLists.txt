cmake_minimum_required(VERSION 3.15)
project(test)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
set(EXECUTABLE_OUTPUT_PATH /home/u64/cpp_CMake/2/aa/bb/cc)
include_directories(${PROJECT_SOURCE_DIR}/include)
set(CMAKE_CXX_STANDARD 11)
# 动态库
# add_library(calc SHARED ${SRC})
# 静态库
add_library(calc STATIC ${SRC})