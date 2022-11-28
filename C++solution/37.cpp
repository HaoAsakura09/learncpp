/* Programming Project 1 in Chapter 4 asked you to write a program that displays a two-digit
 * number with its digits reversed. Generalize the program so that the number can have one,
 * two, three, or more digits. Hint: Use a do loop that repeatedly divides the number by 10,
 * stopping when it reaches 0.
 */
#include <iostream>
#include <format>

int main()
{
	int digits{};
	int number{};
	int reversedNumber{};
	int i{10};

	std::cout << "Enter a number: ";
	std::cin >> number;

	do {

		reversedNumber = (reversedNumber * i) + (number % 10);
		number /= 10;

	} while (number > 0);

	std::cout << std::format("In reversal: {}", reversedNumber);
	return 0;
}
