/* Rewrite the upc.c program of Section 4.1 so that the user enter 11 digits
 * at one time, instead of entering one digit, then five digits, 
 * and then another five digits.
 */
#include <iostream>
#include <format>
#include <stdio.h> // for scanf_s()

int main()
{
	int d{}, i1{}, i2{}, i3{}, i4{}, i5{},
		j1{}, j2{}, j3{}, j4{}, j5{};

	std::cout << "Enter a UPC: ";
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);

	int firstSum{ d + i2 + i4 + j1 + j3 + j5 };
	int secondSum{ i1 + i3 + i5 + j2 + j4 };
	int total = 3 * firstSum + secondSum;

	std::cout << std::format("Check digit: {}\n", 9 - ((total - 1) % 10));
	return 0;
}
