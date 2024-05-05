# Set minimum  version of CMake
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(say-hello VERSION 1.0)

# Add a library
add_library(
    say-hello SHARED
    hello.hpp
    hello.cpp)

# Add the executable
add_executable(HelloWorld main.cpp)

# Link the library
target_link_libraries(HelloWorld PRIVATE say-hello)