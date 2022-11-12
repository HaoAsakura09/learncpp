#include <iostream>

int main()
{
    std::cout << "Enter the value for x: ";
    int x{};
    std::cin >> x;

    std::cout << ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6 << '\n';
    return 0;
}
