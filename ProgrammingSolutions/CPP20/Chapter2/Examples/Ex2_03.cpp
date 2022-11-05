// Ex2_03.cpp
// Sizing a pond for happy fish
#include <iostream>
#include <numbers>	// For the pi constant
#include <cmath>	// For the square root function

int main()
{
	// 2 square feet pond surface for every 6 inches of fish
	const double fishFactor{ 2.0 / 0.5 };	// Area per unit length of fish
	const double inchesPerFoot{ 12.0 };

	double fishCount{};		// Number of fish
	double fishLength{};	// Average length of fish

	std::cout << "Enter the number of fish you want to keep: ";
	std::cin >> fishCount;
	std::cout << "Enter the average fish length in inches: ";
	std::cin >> fishLength;
	fishLength /= inchesPerFoot; // Convert to feet
	std::cout << '\n';

	// Calculate the required surface area
	const double pondArea{ fishCount * fishLength * fishFactor };

	// Calculate the pond diameter form the area
	const double pondDiameter{ 2.0 * std::sqrt(pondArea / std::numbers::pi) };

	std::cout << "Pond diameter required for " << fishCount << " fish is "
		      << pondDiameter << " feet.\n";

	return 0;
}
