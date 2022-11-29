/* Write a program that prompts the user to enter a number n, then prints all even squares
 * between 1 and n.  For example, if the user enters 100, the program should print the following:
 * 4
 * 16
 * 36
 * 64
 * 100
 */

#include <iostream>
#include <format>

int main()
{
	std::cout << "This program prints all even squares between 1 and n.\n";
	int n{};

	std::cout << "Enter the number of tables to be printed: ";
	std::cin >> n;

	int i{ 1 };
	while(i <= n)
	{
		if (i % 2 == 0)
		{
			std::cout << std::format("{:<4}\n", i * i);
		}

		i++;
	}

	return 0;
}
