#include <stdio.h> // for scanf_s()
#include <iostream>
#include <format>

int main()
{
	std::cout << "Computes a Universal Product Code check digit\n";
	int d{}; // first single digit of upc
	int i1{}, i2{}, i3{}, i4{}, i5{};
	int j1{}, j2{}, j3{}, j4{}, j5{};



	std::cout << "Enter the first (single) digit: ";
	std::cin >> d;
	std::cout << "Enter the first group of five digits: ";
	scanf_s("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	std::cout << "Enter the second group of five digits: ";
	scanf_s("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

	int firstSum{ d + i2 + i4 + j1 + j3 + j5 };
	int secondSum{ i1 + i3 + i5 + j2 + j4 };
	int total{ 3 * firstSum + secondSum };

	std::cout << std::format("Check digit: {}\n", 9 - ((total - 1) % 10));

	return 0;
}
