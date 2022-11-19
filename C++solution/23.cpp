/* Write a program that asks the user for 24-hour time,
 * then displays the time in 12-hour form:
 * Enter a 24-hour time: 21:11
 * Equivalent 12-hour time: 9:11 PM
 * 
 * Be careful not to display 12:00 as 0:00
 */
#include <iostream>
#include <format>
#include <stdio.h> // scanf_s()

int main()
{
	int hour{};
	int minute{};
	std::cout << "Equivalent a 24-hour time: ";
	scanf_s("%d:%d", &hour, &minute);

	if (hour >= 12 && hour <= 23)
	{
		(hour == 12) ? hour : (hour -= 12);
		std::cout << std::format("Equivalent 12-hour time: {}:{} PM\n", hour, minute);
	}
	else
		std::cout << std::format("Equivalent 12-hour time: {}:{} AM\n", hour, minute);

	return 0;
}
