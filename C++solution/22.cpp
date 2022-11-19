/* Write a program that calculates how many digits a number contains: 
 * Enter a number: 374
 * The number 374 has 3 digits
 * 
 * You may assume that the number has no more than four digits.
 * Hint: Use if statements to test the number. For example, if the number is
 * between 0 and 9, it has one digit. If the number is between 10 and 99, it has two digits.
 */
#include <cmath>
#include <iostream>
#include <format>

int main()
{
	int number{};
	std::cout << "Enter a number: ";
	std::cin >> number;

	int cNumber{ std::abs(number) };

	if (cNumber >= 1 && cNumber <= 9)
		std::cout << std::format("The number {} has 1 digit.\n", number);
	else if (cNumber >= 10 && cNumber <= 99)
		std::cout << std::format("The number {} has 2 digits.\n", number);
	else if (cNumber >= 100 && cNumber <= 999)
		std::cout << std::format("The number {} has 3 digits.\n", number);
	else
		std::cout << "The number you have entered is out of range. Maybe you can teach the program to understand? :)\n";
	return 0;
}
