cmake_minimum_required(VERSION 3.9)

# Set the project name
project(argument-parser)

# Set C++ version
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Project header files location
include_directories(src)

# Add projects
add_subdirectory(src)
#add_subdirectory(test)
add_subdirectory(lib/googletest)
