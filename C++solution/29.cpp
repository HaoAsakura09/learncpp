/* The following table shows the daily flights from one city to another:
 * Departure time	Arrival time
 * 8:00 a.m.		10:16 a.m.
 * 9:43 a.m.		11:52 a.m.
 * 11:19 a.m		1:31 p.m.
 * 12:47 p.m.		3:00 p.m.
 * 2:00 p.m			4:08 p.m.
 * 3:45 p.m			5:55 p.m.
 * 7:00 p.m.		9:20 p.m.
 * 9:45 p.m.		11:58 p.m.
 *  
 * Write a program that asks use to ente a time(expressed in hours and minutes, using the 24-hour clockc.
 * The program then displays the departure and arribval times for the flight whose
 * departure time is closest to that entered by the user:
 * 
 * Enter a 24-hour time: 13:15
 * Closest departure time is 12:47 p.m., arriving at 3:00 p.m
 * Hint: Convert the input into a time expressed in minutes since midnight, and compare it to the 
 * departure times, also expressed in minutes since midnight. For example, 13:15 us 13 x 60 + 15 = 795 minutes
 * since midnight, which is closer to 12:47 p.m. (767 minutes susnce midnight) than to any of the other 
 * departure times.
 */
#include <iostream>
#include <format>
#include <stdio.h> // scanf_s()
int main()
{
	int hour{};
	int minute{};
	int userMinutes{};

	// Number of minutes of departure time
	const int d1{ 8 * 60 };			// 8:00 a.m
	const int d2{ 9 * 60 + 60 };	// 9:43 a.m
	const int d3{ 11 * 60 + 19 };	// 11:19 a.m
	const int d4{ 12 * 60 + 47 };	// 12:47 p.m
	const int d5{ 2 * 60 };			// 2:00 p.m
	const int d6{ 3 * 60 + 45 };	// 3:45 p.m
	const int d7{ 7 * 60 };			// 7:00 p.m
	const int d8{ 9 * 60 + 45 };	// 9:45 p.m

	std::cout << "Enter a 24-hour time: ";
	scanf_s("%2d:%2d", &hour, &minute);
	userMinutes = hour * 60 + minute;

	if (userMinutes < d1 || (userMinutes - d1 < d2 - userMinutes))
	{
		std::cout << std::format("Closest departure time is {}:{:0>} a.m., arriving at {}:{} a.m.\n", 8, 0, 10, 16);
	}
	else if (userMinutes < d2 || (userMinutes - d2 < d3 - userMinutes))
	{
		std::cout << std::format("Closest departure time is {}:{} a.m., arriving at {}:{} a.m.\n", 9, 34, 11, 52);
	}
	else if (userMinutes < d3 || (userMinutes - d3 < d4 - userMinutes))
	{
		std::cout << std::format("Closest departure time {}:{} a.m., arriving at {}:{} p.m.\n", 11, 19, 1, 31);
	}
	else if (userMinutes < d4 || (userMinutes - d4 < d5 - userMinutes))
	{
		std::cout << std::format("Closest departure time {}:{} p.m., arriving at {}:{:0>}", 12, 47, 3,0);
	}
	else if (userMinutes < d5 || (userMinutes - d5 < d6 - userMinutes))
	{
		std::cout << std::format("Closest departure time {}:{:0>} p.m., arriving at {}:{:0>} p.m.\n", 2, 0, 4, 8);
	}
	else if (userMinutes < d6 || (userMinutes - d6 < d7 - userMinutes))
	{
		std::cout << std::format("Closest departure time {}:{} p.m., arriving at {}:{} p.m.\n", 3, 45, 5, 55);
	}
	else if (userMinutes < d7 || (userMinutes - d7 < d8 - userMinutes))
	{
		std::cout << std::format("Closest departurer time {}:{:0>} p.m., arriving at {}:{} p.m.\n", 7, 0, 9, 20);
	}
	else
	{
		std::cout << std::format("Closest departure time {}:{} p.m., arriving at {}:{:0>} p.m.\n", 12, 47, 3, 0);
	}
	return 0;
}
