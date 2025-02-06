cmake_minimum_required(VERSION 3.0)
project(ncmdump)

# 设置C++标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 设置头文件目录
include_directories(src/include)

# 查找src目录下所有的源文件
file(GLOB SOURCES "src/*.cpp")

# 添加可执行文件
add_executable(ncmdump ${SOURCES})

# 如果需要链接其他库，可以使用target_link_libraries命令
# target_link_libraries(ncmdump <library_name>)