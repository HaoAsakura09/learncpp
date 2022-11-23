// Prints a table of squares using an odd method

#include <iostream>
#include <format>

int main()
{
	int i{}, n{}, odd{}, square{};

	std::cout << "This program prints a table of squares.\n";
	std::cout << "Enter number of entries in table: ";
	std::cin >> n;

	i = 1;
	odd = 3;
	for (square = 1; i <= n; odd += 2)
	{
		std::cout << std::format("{:<10}{:<10}\n", i, square);
		++i;

		square += odd;
	}
	return 0;
}
