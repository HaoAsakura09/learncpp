// Ex2_01.cpp
// Writing values of variables to the screen
#include <iostream>

int main()
{
	int appleCount{ 15 };						// Number of apples
	int orangeCount{ 5 };						// Number of oranges
	int totalFruit{ appleCount + orangeCount };	// Totak number of fruit

	std::cout << "The value of appleCount is " << appleCount << '\n';
	std::cout << "The value of orangeCount is " << orangeCount << '\n';
	std::cout << "The value of totalFruit is " << totalFruit << '\n';
	return 0;
}
