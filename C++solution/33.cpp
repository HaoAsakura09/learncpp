/* Write a program that finds the largest in a series of number entered y
 * the user. THe program must prompt the user to enter numbers one by one.
 * Whne the users 0 or a negative number, the program ust display the largest nonnegative
 * number entered.
 */
#include <iostream>
#include <format>

int main()
{
	double largest{}, num{};
	
	do {
		std::cout << "Enter a number: ";
		std::cin >> num;

		if (num > largest)
			largest = num;
	} while (num != 0);

	std::cout << std::format("The largest number entered was {:<.2f}\n", largest);
	return 0;
}
