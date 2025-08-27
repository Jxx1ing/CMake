cmake_minimum_required(VERSION 3.15)   # 指定 CMake 的最低版本要求
project(test1)                         # 定义当前项目名称为 test1

# 在当前目录 (./) 搜索所有源文件，并将结果存放到变量 SRC 中
aux_source_directory(./ SRC)

# 指定头文件搜索路径 (由外部传入的变量 HEADPATH 指定，通常是 include 目录)
include_directories(${HEADPATH})

# 指定库文件搜索路径 (由外部传入的变量 LIBPATH 指定，通常是静态库或动态库所在目录)
link_directories(${LIBPATH})

# 指定要链接的库名 (由外部传入的变量 CALCLIB，例如 calc)
# 注意：这里只写逻辑库名，不需要写 lib 前缀和 .a/.so 后缀
link_libraries(${CALCLIB})

# 设置可执行文件输出路径 (由外部传入的变量 EXECPATH 指定)
set(EXECUTABLE_OUTPUT_PATH ${EXECPATH})

# 生成可执行文件
# 可执行文件名由 APPNAME1 决定，源文件为当前目录下的 SRC
add_executable(${APPNAME1} ${SRC})
