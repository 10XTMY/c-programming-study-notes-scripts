cmake_minimum_required(VERSION 3.27)
project(practice C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(practice src/main.c
        src/loops.c
        include/loops.h
        include/recursion.h
        src/recursion.c
        include/merge_sort.h
        src/merge_sort.c
        include/quick_sort.h
        src/quick_sort.c
        include/copy_string.h
        src/copy_string.c
        include/cs50.h
        src/cs50.c)
