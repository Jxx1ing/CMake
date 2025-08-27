cmake_minimum_required(VERSION 3.15)   # 指定 CMake 的最低版本要求
project(sort)                          # 定义项目名称为 calc

# 在当前目录 (./) 搜索所有源文件，并将结果存放到变量 SRC 中
aux_source_directory(./ SRC)

# 指定头文件搜索路径，这里使用变量 HEADPATH 指向 include 目录
include_directories(${HEADPATH})

# 设置静态库输出路径，LIBPATH 通常由外部传入或在顶层 CMakeLists.txt 定义
set(LIBRARY_OUTPUT_PATH ${LIBPATH})

# 将当前目录下的源文件 (SRC) 编译为一个静态库
# 静态库名称由变量 SORTLIB 决定（例如 libsort.a）
add_library(${SORTLIB} STATIC ${SRC})
