cmake_minimum_required(VERSION 3.30)
project(A8 C)

set(CMAKE_C_STANDARD 11)

add_executable(A8 main.c)

# Link the math library
target_link_libraries(A8 m)