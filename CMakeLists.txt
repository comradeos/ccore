cmake_minimum_required(VERSION 3.23)
project(ccore C)

set(CMAKE_C_STANDARD 99)
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")
add_executable(ccore main.c c002basics3/c026_pointer_to_pointer.h c002basics3/c027_tasks_21_22_23.h c002basics3/c028_tasks_24_25_26.h c002basics3/c029_game_platformer.h c002basics3/c030_pointer_on_function.h tests/pass_array_to_function.h c002basics3/c031_ternary_operator_recursion.h c002basics3/c032_switch_static.h c002basics3/c035_arrow_operator.h c002basics3/c036_work_with_files.h)
