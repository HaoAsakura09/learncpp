// Prints a table of squares using a while statement
#include <iostream>
#include <format>

int main()
{
	int i{}, n{};

	std::cout << "This program prints a table of square.\n";
	std::cout << "Enter number of entries in table: ";
	std::cin >> n;

	i = 1;
	while (i <= n)
	{
		std::cout << std::format("{:<10}{:<10}\n", i, i * i);
		i++;
	}
	return 0;
}
