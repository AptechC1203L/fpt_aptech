cmake_minimum_required(VERSION 2.8)

add_executable(concatenate src/concatenate.c)
add_executable(matrix src/matrix.c)
add_executable(reverse src/reverse.c)

add_custom_target(codeblock cmake . -G "CodeBlocks - Unix Makefiles")
add_custom_target(eclipse_cdt cmake . -G "Eclipse CDT4 - Unix Makefiles")
add_custom_target(indent astyle -n src/*.h src/*.c)
