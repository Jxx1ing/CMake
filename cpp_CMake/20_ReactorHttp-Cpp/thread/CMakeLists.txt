# 指定 CMake 的最低版本要求
cmake_minimum_required(VERSION 3.15)

# 定义项目名称为 thread
project(thread)

# 搜索当前目录 (./) 下的所有源文件，并存入变量 SRC
# aux_source_directory 会自动把目录下的 .cpp 或 .c 文件加入列表
aux_source_directory(./ SRC)

# 使用 SRC 中的源文件生成一个库
# 默认生成的是静态库 libthread.a，如果需要动态库可以加 SHARED
add_library(thread ${SRC})
