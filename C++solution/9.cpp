#include <iostream>
#include <format>

int main()
{
	std::cout << std::format("Enter a dollar amount: ");
	int amount{};
	std::cin >> amount;

	std::cout << std::format("$20 bills: {:>2}\n", amount / 20);
	amount %= 20;

	std::cout << std::format("$10 bills: {:>2}\n", amount / 10);
	amount %= 10;

	std::cout << std::format(" $5 bills: {:>2}\n", amount / 5);
	amount %= 5;

	std::cout << std::format(" $1 bills: {:>2}\n", amount / 1);
	return 0;
}
