/* Rearrange the square3.cpp program so that for initializes i, tests i, and increments i.
 * Dont't rewrite the program; in particular, don't use nay multiplications
 */

#include <iostream>
#include <format>

int main()
{
	int i{}, n{}, odd{}, square{};

	std::cout << "This program prints a table of squares.\n";
	std::cout << "Enter number of entries in table: ";
	std::cin >> n;
;
	odd = 3;
	for (int i = 1, square = 1; i <= n; odd += 2)
	{
		std::cout << std::format("{:<10}{:<10}\n", i, square);
		++i;

		square += odd;
	}
	return 0;
}
