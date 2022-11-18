/*
 *  Extend the program in Programming project 1
 * to handle three-digit numbers
 */
#include <iostream>
#include <format>

int main()
{
	int num{};
	std::cout << "Enter a three-digit number: ";
	std::cin >> num;

	if (num <= 99)
	{
		std::cout << "Not a three-digit number!\n";
		return 0;
	}

	int first{}, second{}, third{};
	first = num % 10 % 10;
	second = num / 10 % 10;
	third = num / 10 / 10;

	std::cout << std::format("The number in reversal is: {}{}{}\n", first,second,third);
	return 0;
}
