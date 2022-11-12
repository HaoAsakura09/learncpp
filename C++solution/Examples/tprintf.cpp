#include <iostream>
#include <format>

int main()
{
	int i{ 40 };
	float x{ 839.21f };

	std::cout << std::format("|{}|{:>5}|{:<5}|{:0>5}|\n", i, i, i, i);
	std::cout << std::format("|{:10.3f}|{:10.3e}|{:<10g}|\n", x, x, x);
	return 0;
}
