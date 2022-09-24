cmake_minimum_required(VERSION 3.23)
project(ccore C)

set(CMAKE_C_STANDARD 99)
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")
add_executable(ccore main.c mclib.h c002basics3/c026_pointer_to_pointer.h c002basics3/c027_tasks_21_22_23.h)
