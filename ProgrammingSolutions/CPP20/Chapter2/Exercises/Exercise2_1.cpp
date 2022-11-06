/*	Exercise 2-1. Create a program that converts inches to feet
 *	and inches. In case you're unfamiliar with imperial units: 
 *	1 foot equals 12 inches. An input of 77 inches, for instance,
 *	should thus produce an output of 6 feet and 5 inches. 
 *	Prompt the user to enter an integer value corresponding to the
 *	number of inches and then make a conversion and output the result
 */
#include <iostream>
#include <format>

int main()
{
	constexpr int inchesPerFoot{ 12 };
	std::cout << "Enter the number of inches: ";
	int inches{};
	std::cin >> inches;

	std::cout << std::format("{} feet and {} inches.\n", (inches / inchesPerFoot),
		inches % inchesPerFoot);
	return 0;
}
