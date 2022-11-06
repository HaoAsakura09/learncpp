// Ex2_04.cpp
// Using explicit type conversions
#include <iostream>

int main()
{
	const unsigned feetPerYard{ 3 };
	const unsigned inchesPerFoot{ 12 };
	const unsigned inchesPerYard{ feetPerYard * inchesPerFoot };

	double length{};		// Length as decimal yards
	unsigned int yards{};	// Whole yards
	unsigned int feet{};	// Whole feet
	unsigned int inches{};	// Whole inches

	std::cout << "Enter a length in yards as a decimal: ";
	std::cin >> length;

	// Get the length as yards, feet, and inches
	yards	= static_cast<unsigned int>(length);
	feet	= static_cast<unsigned int>((length - yards) * feetPerYard);
	inches = static_cast<unsigned int>(length * inchesPerYard) % inchesPerFoot;

	std::cout << length << " yards converts to "
		<< yards << " yards "
		<< feet << " feet "
		<< inches << " inches.\n";
	return 0;
}
