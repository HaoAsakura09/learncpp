// Exercise 2-2. Write a program that will compute the area of a circle.
// The program should prompt for the circle to be entered from the keyboard.
// Calculate the area using the formula a = pi * radius * radius,
// and then display the result.
#include <iostream>
#include <format>
#include <numbers>

int main()
{
	std::cout << std::format("Enter radius: ");
	double radius{};
	std::cin >> radius;

	double pi{ std::numbers::pi };
	double area{ radius *radius * pi };

    std::cout << std::format("Area of the circle {:.2f}.\n", area);

	return 0;
}
