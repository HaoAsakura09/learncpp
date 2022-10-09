#include <iostream>

int get_height();
double distanceFall(int height, int seconds);
void printCurrentHeight(int height, int seconds);

int main()
{
	int height{get_height()};
	printCurrentHeight()(height, 0);
	printCurrentHeight()(height, 1);
	printCurrentHeight()(height, 2);
	printCurrentHeight()(height, 3);
	printCurrentHeight()(height, 4);
	printCurrentHeight()(height, 5);

	return 0;
}

int get_height()
{
	std::cout << "Enter the height of the tower in meters: ";
	int height;
	std::cin >> height;

	return height;
}

void printCurrentHeight(int height, int seconds)
{
	double currentHeight;
	currentHeight = height - distanceFall(height, seconds);
	
	if (currentHeight > 0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << currentHeight << " meters\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

double distanceFall(int height, int seconds)
{
	constexpr double gravity{9.8};
	return (gravity * (seconds * seconds)) / 2;
}
