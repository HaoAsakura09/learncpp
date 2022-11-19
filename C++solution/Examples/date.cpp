// Prints a date in legal form
#include <iostream>
#include <format>
#include <stdio.h> // scanf_s()

int main()
{
	int month{}, day{}, year{};

	std::cout << "Enter date (mm/dd/yy): ";
	scanf_s("%d/%d/%d", &month, &day, &year);

	std::cout << std::format("Dated this {}", day);
	switch (day)
	{
	case 1: case 21: case 31:
		std::cout << "st";        break;
	case 2: case 22:
		std::cout << "nd";        break;
	case 3: case 23:
		std::cout << "rd";        break;
	default: std::cout << "th"; break;
	}
	std::cout << " day ";

	switch (month)
	{
	case 1:  std::cout << "January";		break;
	case 2:  std::cout << "February";	  break;
	case 3:  std::cout << "March";		  break;
	case 4:  std::cout << "April";		  break;
	case 5:  std::cout << "May";			  break;
	case 6:  std::cout << "June";		    break;
	case 7:  std::cout << "July";		    break;
	case 8:  std::cout << "August";		  break;
	case 9:  std::cout << "September";	break;
	case 10: std::cout << "October";	  break;
	case 11: std::cout << "November";	  break;
	case 12: std::cout << "December";	  break;
	}

	std::cout << std::format(", 20{:0>2}\n", year);
	return 0;
}
