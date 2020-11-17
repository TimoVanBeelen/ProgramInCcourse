cmake_minimum_required(VERSION 3.17)
project(primes C)

set(CMAKE_C_STANDARD 90)

add_executable(primes main.c)

target_link_libraries(primes m)