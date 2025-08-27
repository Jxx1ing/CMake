# 指定 CMake 的最低版本要求
cmake_minimum_required(VERSION 3.15)

# 定义项目名称为 tcp
project(tcp)

# 指定链接库
# 这里是全局性的，把 common、http、reactor 库加入后续生成的 target 的链接列表
# 注意：link_libraries 是全局作用，会影响后续的 add_executable / add_library
link_libraries(common http reactor)
# 补充原因：main.cpp 只直接调用 tcp 模块，但 tcp 模块依赖 common、http 和 reactor 库（中的函数），因此需要在链接时额外指定这些库。

# 搜索当前目录下的所有源文件，并存入变量 SRC
# aux_source_directory 会自动把目录下的所有源文件 (.cpp/.c) 加入列表
aux_source_directory(./ SRC)

# 使用 SRC 变量中的源文件生成一个库
# 默认生成的是静态库 (libtcp.a)，如果需要生成动态库可以加 SHARED
add_library(tcp ${SRC})
