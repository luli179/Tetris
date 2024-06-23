#版本
cmake_minimum_required(VERSION 3.22)
#项目名称
project(tetris)

#cpp标准
set(CXX_STANDARD 20)

aux_source_directory(src src_files)
add_executable(tetris ${src_files})

include_directories(include)
