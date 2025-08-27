cmake_minimum_required(VERSION 3.15)   # 指定 CMake 的最低版本要求
project(calc)                          # 定义项目名称为 calc

# 在当前目录 (./) 搜索所有源文件，并将结果存放到变量 SRC 中
aux_source_directory(./ SRC)

# 指定头文件搜索路径，这里使用变量 HEADPATH 指向 include 目录
include_directories(${HEADPATH})

# 设置动态库输出路径，LIBPATH 通常由外部传入或在顶层 CMakeLists.txt 定义
set(LIBRARY_OUTPUT_PATH ${LIBPATH})

# 使用 ${SRC} 里的源文件，生成一个名字为 ${CALCLIB} 的动态库
add_library(${CALCLIB} SHARED ${SRC})
