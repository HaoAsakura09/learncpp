/* Write a program that prints a one-month calendar. The user specifies the number of days in
 * the month and thie day of the week on which the month begins:
 *	
 * Enter number of days in moth: 31
 * Enter starting day of the week (1 = Sun, 7 = Sat): 3
 *        1  2  3  4  5
 *  6  7  8  9 10 11 12
 * 13 14 15 16 17 18 19
 * 20 21 22 23 24 25 26
 * 27 28 29 30 31
 * 
 * Hint: This program isn't as hard as it looks. The most important part is a for statement that
 * uses a variable i to count from 1 to n, where n is the number of days iin the month, printing
 * each value of i. Inside the loop, and if statement tests whether i is the last day in a week; if
 * so, it orints a new-line character
 */
#include <iostream>
#include <format>

int main()
{
	int daysInMonth{};
	int dayOfWeek{};
	int nl{ 0 };

	std::cout << "Enter number of days in month: ";
	std::cin >> daysInMonth;
	std::cout << "Enter starting day if the week (1=Sun, 7=Sat): ";
	std::cin >> dayOfWeek;

	std::cout << '\n';
	for (int i{ 1 }; i <= daysInMonth; i++)
	{
		while (dayOfWeek-- >= 1)
		{
			std::cout << "  ";
			nl++;
		}

		std::cout << std::format("{:>2} ", i);

		if (nl % 7 == 0)
			std::cout << '\n';

		nl++;
	}
	return 0;
}
