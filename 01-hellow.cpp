#include <iostream>
#include <cstddef>

using namespace std;

int main()
{
    // int c{2.5}; Narrowing conversion so does not compile
    double d = {1};
    cout << "Hello world";

    std::byte b{254};
    std::cout << std::to_integer<int>(b);

    // Literal prefixes and suffixes
    auto million = 1'000'000;
    std::cout << million << std::endl;

    return EXIT_SUCCESS;
    ;
}