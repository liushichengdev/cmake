#include <iostream>
#include "Adder.h"
#include <fmt/core.h>

int main() 
{
    std::cout << adder(12, 12);
    std::cout<<"Hello, world!\n";
    fmt::print("Hello, fmt\n");
#ifdef DEBUG
    fmt::print("Hello, Debug\n");
#endif// DEBUG
#ifdef RELEASE
    fmt::print("Hello, Release\n");
#endif // RELEASE

    return 0;
}
