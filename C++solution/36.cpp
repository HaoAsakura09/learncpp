/* Add a loop to the broker.c program of Section 5.2 so that the user can enter more than 
 * one trade and the program will calculate the commission on each. The program should terminate
 * when the user enters 0 as the trade value:
 * 
 * Enter value of trade: 30000
 * commission: $166.00
 * 
 * Enter value of trade: 20000
 * Commission: $144.00
 * 
 * Enter value of trade: 0
 */
#include <iostream>
#include <format>

int main()
{
	float commission{}, value{};

	std::cout << " Enter value of trade: ";
	std::cin >> value;

    while (value != 0)
	{ 
		if (value < 2'500.00f)
			commission = 30.00f + .017f * value;
		else if (value < 6'250.00f)
			commission = 56.00f + .0066f * value;
		else if (value < 20'000.00f)
			commission = 76.00f + .0034f * value;
		else if (value < 50'000.00f)
			commission = 100.00f + .0022f * value;
		else if (value < 500'000.00f)
			commission = 155.00f + .0011f * value;
		else
			commission = 255.00f + .0009f * value;
		
		if (commission < 39.00f)
			commission = 39.00f;

		std::cout << std::format("Commission: ${:<.2f}\n\n", commission);

		std::cout << "Enter value of trade: ";
		std::cin >> value;
	}
	return 0;

}
