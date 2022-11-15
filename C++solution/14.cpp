#include <iostream>
#include <format>

int main()
{
	int first{};
	int second{};
	int third{};

	char ch{};

	std::cout << "Enter phone number [(xxx) xxx-xxxx]: ";
	std::cin >> ch >> first >> ch >>
		ch >> second >> ch >> third;

	std::cout << std::format("You entered {}.{}.{}\n", first, second, third);

	return 0;
}
