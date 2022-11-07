// Exercise 2-4. Your body mass index(BMI) is your weight, w, in kilograms divided
// by the square of your height, h, in meters (w/(h*h)). Writhe a program to calculate
// the BMI from a weight entered in pounds and a height entered in feet and inches.
// A kilogram is 2.2 pounds, and foot is 0.3048 meters.
#include <iostream>
#include <format>

int main()
{
	constexpr double poundsPerKilogram{ 2.2 };
	constexpr double inchesPerFoot{ 12.0 };
	constexpr double metersPerfoot{ 0.3048 };

	std::cout << std::format("{:^100}\n", "This program calculates body mass index(BMI)");

	std::cout << std::format("Enter your weight in pounds: ");
	double pounds{};
	std::cin >> pounds;

	std::cout << std::format("Enter your height in feet and inches: ");
	double feet{};
	double inches{};
	std::cin >> feet >> inches;

	const double weightInKilograms{ pounds / poundsPerKilogram };
	const double heightMeters{ metersPerfoot * (feet + inches / inchesPerFoot) };
	const double bmi{ weightInKilograms / (heightMeters * heightMeters) };
	std::cout << std::format("Your BMI is {:.2f}\n", bmi);

	return 0;
}
