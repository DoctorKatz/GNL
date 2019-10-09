cmake_minimum_required(VERSION 3.15)
project(GNL C)

set(CMAKE_C_STANDARD 99)

add_executable(GNL main.c Src/get_next_line.c Inc/get_next_line..h)