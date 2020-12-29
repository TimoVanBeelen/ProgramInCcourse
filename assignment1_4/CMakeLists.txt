cmake_minimum_required(VERSION 3.17)
project(assignment1_4 C)

set(CMAKE_C_STANDARD 90)

add_executable(assignment1_4 main.c)

target_link_libraries(assignment1_4 m)