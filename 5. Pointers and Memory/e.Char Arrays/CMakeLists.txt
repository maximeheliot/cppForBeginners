cmake_minimum_required(VERSION 3.17)
project(Char_Arrays)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(Char_Arrays main.cpp)