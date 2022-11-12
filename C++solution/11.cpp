#include <iostream>
#include <cstdio>
#include <format>

int main()
{
	std::cout << "Enter a date (mm/dd/yyy): ";
	int month{};
	int day{};
	int year{};
	char ch{};
	std::cin >> month >> ch >> day >> ch >> year;

	std::cout << std::format("You entered the date {}{}{}\n", year, month, day);
	return 0;
}
