cmake_minimum_required(VERSION 3.30)
project(c005advanced C)

set(CMAKE_C_STANDARD 23)

add_executable(c005advanced main.c
        lessons.h
        lessons.c)
