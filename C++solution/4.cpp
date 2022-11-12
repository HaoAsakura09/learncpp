#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "This program calculates a volume of sphere.\n";
    constexpr double pi{ 3.14159 };
    int radius{ 10 }; // 10-meter radius

    double volume{ 4.0 / 3.0 * pi * radius * radius * radius };

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "The volume of Sphere: " << volume << '\n';
    return 0;
}
