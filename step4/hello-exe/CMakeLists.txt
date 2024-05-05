# Add the executable
add_executable(HelloWorld main.cpp)

# Link the library
target_link_libraries(HelloWorld PRIVATE say-hello)