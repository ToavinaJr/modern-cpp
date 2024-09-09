#include <iostream>
#include <utility>
#include <map>

auto get_numbers()
{
    std::cout << "Please enter a number a float and an integer";
    double b{};
    int i{};
    std::cin >> b >> i;

    return std::pair(b, i);
}
int main()
{
    int age{12};
    float height{50.f};

    auto [a, b] = get_numbers();
    return 0;
}