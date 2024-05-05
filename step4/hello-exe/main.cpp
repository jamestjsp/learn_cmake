#include <iostream>
#include "hello.hpp"

int main()
{
    hello::say_hello();
    // Print the version of the library
    std::cout << "libsay-hello Version: " << SAY_HELLO_VERSION << std::endl;
    return 0;
}
