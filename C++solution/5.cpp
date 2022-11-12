// Calculates volume of a sphere with the input provided by the user
#include <iostream>
#include <iomanip>

int main()
{
    constexpr double pi{ 3.14159 };

    std::cout << "Enter radius: ";
    int radius{};
    std::cin >> radius;

    double volume{ 4.0 / 3.0 * pi * radius * radius * radius };

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Volume of the sphere with " << radius << "-meter radius: " << volume;
    return 0;
}
