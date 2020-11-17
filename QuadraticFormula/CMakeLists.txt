cmake_minimum_required(VERSION 3.17)
project(QuadraticFormula C)

set(CMAKE_C_STANDARD 90)

add_executable(QuadraticFormula main.c abc.c abc.h)

target_link_libraries(QuadraticFormula m)