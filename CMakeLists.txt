cmake_minimum_required(VERSION 2.6)

set(CMAKE_BUILD_TYPE Debug)

include_directories(src)
add_subdirectory(src)

add_custom_target(codeblock cmake . -G "CodeBlocks - Unix Makefiles")
add_custom_target(eclipse_cdt cmake . -G "Eclipse CDT4 - Unix Makefiles")
