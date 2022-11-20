/* Here's a simplified version of the Beaufort scale,
 * which is used to estimate wind force:
 * Speed(knots)		Description
 * Less than 1		Calm
 * 1-3				Light air
 * 4-27				Breeze
 * 28-47			Gale
 * 48-63			Storm
 * Above 63			Hurricane
 * Write a program that asks the user to enter a wind speed (in knots),
 * then displays the corresponding decription.
 */
#include <iostream>
#include <format>

int main()
{
	std::cout << std::format("{:<20}{:<20}\n", "Speed(knots)", "Description");
	std::cout << std::format("{:<20}{:<20}\n", "Less than 1",  "Calm");
	std::cout << std::format("{:<20}{:<20}\n", "1 - 3",		   "Light air");
	std::cout << std::format("{:<20}{:<20}\n", "4-27",		   "Breeze");
	std::cout << std::format("{:<20}{:<20}\n", "28-47",		   "Gale");
	std::cout << std::format("{:<20}{:<20}\n", "48-63",		   "Storm");
	std::cout << std::format("{:<20}{:<20}\n", "Above 63",	   "Hurricane");
	std::cout << '\n';

	int speed{};
	std::cout << "Enter a wind speed(knots): ";
	std::cin >> speed;

	if (speed < 1)
		std::cout << "Calm\n";
	else if (speed <= 3)
		std::cout << "Light air\n";
	else if (speed <= 27)
		std::cout << "Breeze\n";
	else if (speed <= 47)
		std::cout << "Gale\n";
	else if (speed <= 63)
		std::cout << "Storm\n";
	else
		std::cout << "Hurricane\n";
	return 0;
}
