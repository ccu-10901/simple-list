cmake_minimum_required(VERSION 3.17)
project(struct_demo C)

set(CMAKE_C_STANDARD 11)

add_executable(struct_demo main.c list.c list.h)