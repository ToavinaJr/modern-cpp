#include <iostream>

int main()
{
    int tab[4];

    for (auto i : tab)
        std::cout << i << std::endl;
    return EXIT_SUCCESS;
}