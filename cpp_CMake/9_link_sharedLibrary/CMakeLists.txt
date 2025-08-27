cmake_minimum_required(VERSION 3.15)
project(test)
# 源文件main.cpp
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
# 不设置 EXECUTABLE_OUTPUT_PATH，可执行文件默认输出在build目录下
# 包含头文件路径
include_directories(${PROJECT_SOURCE_DIR}/include)

# 包含动态库路径
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib2)
# 生成可执行程序
add_executable(app ${SRC})
# 把 app 可执行文件和 calc动态库进行链接（app 依赖 calc）
target_link_libraries(app calc)

# ps:target_link_libraries用于指定一个目标（如可执行文件或库）在编译时需要链接哪些库，写在CMakeLists.txt最后一行