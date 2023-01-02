cmake_minimum_required(VERSION 3.23)
project(cs507_fall2022__assignment3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cs507_fall2022__assignment3
        Array.inl
        array_auto_ptr.cpp
        Base_Array.cpp
        Base_Array.h
        main.cpp
        Stack.cpp
        Stack.h
        Stack.inl)
