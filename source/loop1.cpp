#include <iostream>
#include <iomanip>

// Function to calculate x to the power of n
double power(double x, int n);

int main()
{
	for(int i{ - 3}; i <= 3; i++)
	std::cout << std::setw(10) << power(8.0, i);
	return 0;
}

double power(double x, int n)
{
	double result{ 1.0 };
	
	if(n >= 0)
	{
		for(int i{ 1 }; i <= n; ++i)
			result *= x;
	}
	else // n < 0
	{
		for(int i{ 1 }; i <= -n; ++i)
			result /= x;
	}
	
	return result;
}
