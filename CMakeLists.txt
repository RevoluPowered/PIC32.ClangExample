cmake_minimum_required(VERSION 3.13)
project(pic32_clang_test)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_SYSTEM_PROCESSOR mips)
include_directories(SYSTEM /libs/xc32/v2.15/pic32c/include/c++/6.2.1/)

add_executable(pic32_clang_test main.cpp)