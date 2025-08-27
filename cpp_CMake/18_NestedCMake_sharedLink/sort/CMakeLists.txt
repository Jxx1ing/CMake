cmake_minimum_required(VERSION 3.15)   # 指定 CMake 的最低版本要求为 3.15
project(sort)                          # 定义项目名称为 sort
aux_source_directory(./ SRC)           # 搜索当前目录下的所有源文件并存入变量 SRC
include_directories(${HEADPATH})       # 添加头文件搜索路径
set(LIBRARY_OUTPUT_PATH ${LIBPATH})    # 设置生成的库文件输出目录
link_directories(${LIBPATH})           # 添加需要链接的库所在目录
add_library(${SORTLIB} STATIC ${SRC})  # 使用 SRC 源文件生成名为 SORTLIB 的静态库
target_link_libraries(${SORTLIB} ${CALCLIB})  # 为 SORTLIB 链接依赖于 ${CALCLIB} 动态库
