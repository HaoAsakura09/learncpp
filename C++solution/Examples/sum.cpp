// Sums a series of numbers

#include <iostream>

int main()
{
	int n{}, sum{};

	std::cout << "This program sums a series of integers.\n";
	std::cout << "Enter integers (0 to terminate): ";

	std::cin >> n;
	while (n != 0)
	{
		sum += n;
		std::cin >> n;
	}

	std::cout << "The sum is: " << sum << '\n';
	return 0;
}
