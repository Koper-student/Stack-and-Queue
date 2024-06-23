cmake_minimum_required(VERSION 3.27)
project(stack_and_queue)

set(CMAKE_CXX_STANDARD 17)

add_executable(stack_and_queue main.cpp
        Queue.h
        Queue.cpp
        Stack.cpp
        Stack.h)
