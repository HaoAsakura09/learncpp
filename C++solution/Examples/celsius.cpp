// Converts a Fahrenheit temperature to Celsius
#include <iostream>
#include <iomanip>

constexpr float FREEZING_PT{ 32.0f };
constexpr float SCALE_FACTOR{ 5.0f / 9.0f };

int main()
{
    float fahrenheit{};
    float celsius{};

    std::cout << "Enter Fahrenheit temperature: ";
    std::cin >> fahrenheit;

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    std::cout << std::fixed << std::showpoint << std::setprecision(1);
    std::cout << "Celsius equivalent: " << celsius << '\n';

    return 0;
}

