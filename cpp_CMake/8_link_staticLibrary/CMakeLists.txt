cmake_minimum_required(VERSION 3.15)
project(test)
# 源文件main.cpp
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
# 不设置 EXECUTABLE_OUTPUT_PATH，可执行文件默认输出在build目录下
# 包含头文件路径
include_directories(${PROJECT_SOURCE_DIR}/include)

# 链接静态库(【全名libxxx.a】 或者 【掐头（lib）去尾（.a）之后的名字 xxx】)
link_libraries(calc)
# 包含静态库路径
link_directories(${PROJECT_SOURCE_DIR}/lib)

set(CMAKE_CXX_STANDARD 11)
# 生成可执行程序
add_executable(app ${SRC})

