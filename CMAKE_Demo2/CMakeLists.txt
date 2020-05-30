#最低版本要求
cmake_minimum_required(VERSION 2.8)
#项目信息
project(Demo2)
#查找当前目录下的所有源文件 并将名称保存到 DIR_SRCS 变量中
aux_source_directory(. DIR_SRCS)
add_executable(Demo ${DIR_SRCS})
#https://github.com/wzpan/cmake-demo/blob/master/Demo2/CMakeLists.txt