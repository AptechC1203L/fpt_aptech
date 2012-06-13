cmake_minimum_required(VERSION 2.6)

#set(SUB_DIRS lab7 lab8 lab9)

add_subdirectory(lab7)
add_subdirectory(lab8)
add_subdirectory(lab9)

add_custom_target(codeblock cmake . -G "CodeBlocks - Unix Makefiles")
add_custom_target(eclipse_cdt cmake . -G "Eclipse CDT4 - Unix Makefiles")
add_custom_target(indent astyle -n lab*/*.h lab*/*.c)
