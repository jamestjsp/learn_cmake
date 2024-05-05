# Add a library
add_library(
    say-hello SHARED
    src/hello.hpp
    src/hello.cpp)

# Incude directories
target_include_directories(say-hello PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

# Add a compile definition
target_compile_definitions(say-hello PUBLIC SAY_HELLO_VERSION=1)