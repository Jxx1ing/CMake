cmake_minimum_required(VERSION 3.15)
project(test)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
set(EXECUTABLE_OUTPUT_PATH /home/u64/cpp_CMake/2/aa/bb/cc)
# 把 ${PROJECT_SOURCE_DIR}/include 这个路径加入到编译器的头文件搜索路径中
# 换一种说法——在编译代码时，如果遇到 #include "xxx.h" 或 #include <xxx.h>，除了系统默认的头文件路径，还要到 ${PROJECT_SOURCE_DIR}/include 这个目录里去搜索头文件。
include_directories(${PROJECT_SOURCE_DIR}/include)
set(CMAKE_CXX_STANDARD 11)
add_executable(app ${SRC})