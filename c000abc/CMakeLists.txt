cmake_minimum_required(VERSION 3.26)
project(c000abc C)

set(CMAKE_C_STANDARD 11)

add_executable(c000abc main.c
        modules/h001uint8_t.h)
