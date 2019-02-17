cmake_minimum_required(VERSION 3.13)
include(CMakeForceCompiler)
project(pic32_clang_test)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR mips)
SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -Wall)


set(HARMONY_FRAMEWORK /home/cs-macphersong1c/libs/harmony/v2_06)
set(HARMONY_INCLUDES ${HARMONY_FRAMEWORK}/framework/)
MESSAGE("Harmony dir: " ${HARMONY_INCLUDES})
include_directories(SYSTEM /home/cs-macphersong1c/libs/xc32/v2.15/pic32c/include/c++/6.2.1/)
include_directories(SYSTEM ${HARMONY_INCLUDES})
# useful for testing scenarios
add_executable(pic32_clang_test main.cpp)