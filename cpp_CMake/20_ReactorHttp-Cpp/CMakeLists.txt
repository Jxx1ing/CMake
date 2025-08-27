# 指定 CMake 的最低版本要求
# 这里要求 CMake 版本必须 >= 3.15
cmake_minimum_required(VERSION 3.15)

# 定义项目名称为 HttpWeb
project(HttpWeb)

# 添加全局头文件搜索路径
# 这样所有子目录的源文件都可以包含对应库的头文件
include_directories(${PROJECT_SOURCE_DIR}/common)
include_directories(${PROJECT_SOURCE_DIR}/http)
include_directories(${PROJECT_SOURCE_DIR}/reactor)
include_directories(${PROJECT_SOURCE_DIR}/tcp)
include_directories(${PROJECT_SOURCE_DIR}/thread)


# 添加子目录，每个子目录中通常会包含一个 CMakeLists.txt
# 用于编译生成库 (静态库/动态库)
add_subdirectory(common)   # 公共工具模块
add_subdirectory(http)     # HTTP 协议相关模块
add_subdirectory(reactor)  # Reactor 事件驱动模块
add_subdirectory(tcp)      # TCP 通信模块
add_subdirectory(thread)   # 线程池或线程相关模块

# 指定要链接的库
# link_libraries 是全局性的，对后续 add_executable / add_library 都生效
# 这里会把 common http reactor tcp thread 这些库自动链接到目标程序
link_libraries(common http reactor tcp thread)

# 生成可执行文件 server，由 main.cpp 源文件编译而成
add_executable(server main.cpp)
