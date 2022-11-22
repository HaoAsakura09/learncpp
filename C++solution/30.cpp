/* Write a program that prompts the user to enter two dates and then indicates which date
 * comes earlier int the calendar:
 * Enter first date (mm/dd/yy): 3/6/08
 * Enter second date (mm/dd/yy): 5/17/07
 * 5/17/07 is earlier than 3/6/08
 */
#include <iostream>
#include <format>
#include <stdio.h>

int main()
{
	int mm{}, mm2{};
	int dd{}, dd2{};
	int yy{}, yy2{};
	
	std::cout << "Enter first date(mm/dd/yy): ";
	scanf_s("%2d/%2d/%2d", &mm, &dd, &yy);
	std::cout << "Enter second date(mm/dd/yy): ";
	scanf_s("%2d/%2d/%2d", &mm2, &dd2, &yy2);

	int numDays{ mm * 30 + dd + yy * 365 };
	int numDays2{ mm2 * 30 + dd2 + yy2 * 365 };

	if (numDays < numDays2)
		std::cout << std::format("{}/{}/{:0>2} is earlier than {}/{}/{:0>2}\n", mm, dd, yy, mm2, dd2, yy2);
	else
		std::cout << std::format("{}/{}/{:0>2} is earlier than {}/{}/{:0>2}\n", mm2, dd2, yy2, mm, dd, yy);
	return 0;
}
