cmake_minimum_required(VERSION 3.12)
project(Myproject)

# 添加可执行文件
add_executable(program main.cpp add.cpp)

# 添加头文件搜索路径
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# 指定链接的库文件（如果有的话）
# target_link_libraries(program <>)

