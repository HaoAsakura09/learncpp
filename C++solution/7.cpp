#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter the value for x: ";
    int x{};
    std::cin >> x;

    std::cout << "The value of x of the following polynomial: ";
    std::cout << 3 * (std::pow(x, 5)) +
                 2 * (std::pow(x, 4)) -
                 5 * (std::pow(x, 3)) -
                     (std::pow(x, 2)) +
                 7 * x - 6 << '\n';
    return 0;
}
