#include <iostream>

namespace myConstants
{
	constexpr double gravity{ 9.8 };
}

bool printHeight(int height, int time);
int getHeight();
double calcHeight(int height, int time);

int main()
{
	std::cout << "Enter  height: ";
	int height{ getHeight() };
	
	int seconds{ 0 };
	while(!printHeight(height, seconds))
		seconds++;
	return 0;
}

int getHeight()
{
	int height;
	std::cin >> height;
	
	while(!std::cin)
	{
		std::cerr << "Input is not an integer!\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> height;
	}
	
	return (height < 0.0) ? 0.0 : height;
}

double calcHeight(int height, int time)
{
	double distanceFallen{ myConstants::gravity * time * time / 2.0 };
	double heightNow{ height - distanceFallen };
	
	if(heightNow < 0.0)
		return 0.0;
  return heightNow;
}

bool printHeight(int height, int time)
{
	double currentHeight { calcHeight(height, time) };
	std::cout << "At " << time << " seconds, the ball is at " << currentHeight << '\n';
	
	return (currentHeight == 0.0);
}
