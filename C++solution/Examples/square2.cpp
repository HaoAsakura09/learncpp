// Prints a table of squares using a for satement

#include <iostream>
#include <format>

int main()
{
	int i{}, n{};

	std::cout << "This program prints a table of squares.\n";
	std::cout << "Enter a number of entries in table: ";
	std::cin >> n;

	for (i = 1; i <= n; i++)
		std::cout << std::format("{:<10}{:<10}\n", i, i * i);
	return 0;
}
