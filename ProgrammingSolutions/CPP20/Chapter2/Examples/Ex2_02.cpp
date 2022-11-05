// Ex2_02.cpp
// Converting distances
#include <iostream> /// For user inout and output through std::cin / std::cout

int main()
{
	unsigned int yards{}, feet{}, inches{};

	// Convert a distance in yards, feet, and inches to inches
	std::cout << "Enter a distance as yards, feet, and inches "
		<< "with the three values separated by spaces: ";
	std::cin >> yards >> feet >> inches;

	const unsigned feetPerYard{ 3 };
	const unsigned inchesPerFoot{ 12 };

	unsigned  totalInches{};
	totalInches = inches + inchesPerFoot * (yards * feetPerYard + feet);
	std::cout << "This distance corresponds to " << totalInches << " inches.\n";


	// Convert a distance in inches to yards, feet, and inches
	std::cout << "Enter a distance in inches: ";
	std::cin >> totalInches;
	feet	= totalInches / inchesPerFoot;
	inches	= totalInches % inchesPerFoot;
	yards	= feet / feetPerYard;
	feet	= feet % feetPerYard;
	std::cout << "This distance corresponds to "
			  << yards << " yards "
			  << feet << " feet "
			  << inches << " inches.\n";
	return 0;
}

