cmake_minimum_required(VERSION 4.3)
project(example_module)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(example_module main.cpp)
target_sources(example_module
        PRIVATE
        FILE_SET CXX_MODULES FILES my_module.cppm
)
target_link_libraries(example_module stdc++exp)