/* Write a program that asks the user to enter a two-digit number,
 *  then prints the number with its digits reversed.
 * A session with the program should have the following appearance:
 * 
 * Enter a two-digit number: 28
 * The reversal is: 82
 */
#include <iostream>
#include <format>

int main()
{
	int number{};
	std::cout << "Enter a two-digit number: ";
	std::cin >> number;

	std::cout << std::format("The reversal is: {}{}", number % 10, number / 10);
	return 0;
}
