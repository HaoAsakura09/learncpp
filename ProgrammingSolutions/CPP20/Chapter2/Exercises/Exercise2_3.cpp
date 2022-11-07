// Exercise 2-3. For your birthday you've been given a long tape measure and an
// instrument that measures angles (the angle between the horizontal and a line to
// the top of a tree, for instance). If you know the distance, d, you are from a tree
// and the height, h, of your eye when peering into your angle-measuring device, you can
// calculate the height of the tree with the formula h + d * tan(angle). Create a program
// to read h in inches, d in feet and inches, and angle in degree from the keyboard,
// and output the height of the tree in feet.
#include <cmath>
#include <iostream>
#include <format>
#include <numbers>

int main()
{
	constexpr double inchesPerFoot{ 12.0 };
	constexpr double piDegrees{ 180.0 };

	std::cout << std::format("Enter the distance form the tree in feet and inches: ");
	double feet{};
	double inches{};
	std::cin >> feet >> inches;
	const double distance{ feet + inches / inchesPerFoot };

	std::cout << std::format("Enter the angle of the top of the tree in degrees: ");
	double angle{};
	std::cin >> angle;

	angle *= std::numbers::pi / piDegrees;

	std::cout << std::format("Enter your eye height from the ground in inches: ");
	double eyeHeight{};
	std::cin >> eyeHeight;
	eyeHeight /= inchesPerFoot;

	const double height{ eyeHeight + distance * std::tan(angle) };
	const unsigned heightFeet{ static_cast<unsigned>(height) };
	const unsigned heightInches{ static_cast<unsigned>(std::round(inchesPerFoot * (height - heightFeet))) };

	std::cout << "\nThe height of the tree is "
		<< heightFeet << " feet "
		<< heightInches << " inches.\n";
	return 0;
}
