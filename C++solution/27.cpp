/* Modify the upc.cpp
 * Check whether UPC is valid. 
 * After the user enters a UPC, the program will display either VALID or NOT VALID
 */
#include <stdio.h> // for scanf_s()
#include <iostream>
#include <format>

int main()
{
	std::cout << "Computes a Universal Product Code check digit\n";
	int d{}; // first single digit of upc
	int i1{}, i2{}, i3{}, i4{}, i5{};
	int j1{}, j2{}, j3{}, j4{}, j5{};
	int checkDigit{};
	bool isDivisibleByTen{};

	std::cout << "Enter a UPC: ";
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5,
													 &j1, &j2, &j3, &j4, &j5);

	int firstSum{ d + i2 + i4 + j1 + j3 + j5 };
	int secondSum{ i1 + i3 + i5 + j2 + j4 };
	int total{ 3 * firstSum + secondSum };
	checkDigit = 9 - ((total - 1) % 10);

	isDivisibleByTen = (d * 3 +
						i1 * 1 +
						i2 * 3 +
						i3 * 1 +
						i4 * 3 +
						i5 * 1 +
						j1 * 3 +
						j2 * 1 +
						j3 * 3 +
						j4 * 1 +
						j5 * 3 +
						checkDigit * 1) % 10 == 0;
	
	if (isDivisibleByTen == true)
		std::cout << "The UPC is valid.\n";
	else
		std::cout << "The UPC is invalid.\n";
	return 0;
}
