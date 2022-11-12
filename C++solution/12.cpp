#include <iostream>
#include <format>

int main()
{
	std::cout << "Enter item number: ";
	int itemNumber{};
	std::cin >> itemNumber;
	
	std::cout << "Enter unit price: ";
	double unitPrice{};
	std::cin >> unitPrice;

	std::cout << "Enter purchase date (mm/dd/yyyy): ";
	int month{};
	int day{};
	int year{};
	char ch{};
	std::cin >> month >> ch >> day >> ch >> year;

	std::cout << std::format("\n{:<20}{:<20}{:<20}\n", "Item", "Unit", "Purchase");
	std::cout << std::format("{:<20}{:<20}{:<20}\n","", "Price", "Date");
	std::cout << std::format("{:<20}${:>8.2f}{:>13}/{:<}/{:<}\n", itemNumber, unitPrice, month, day, year);
	return 0;
}
