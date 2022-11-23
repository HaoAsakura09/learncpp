// Calculates the number of digits in an integer
#include <iostream>

int main()
{
	int digits{}, n;
	std::cout << "Enter a nonnegative integer: ";
	std::cin >> n;

	do {
		n /= 10;
		digits++;
	} while (n > 0);

	std::cout << "The number has " << digits << " digits(s).\n";
	return 0;
}
