#include <iostream>
#include <format>

int main()
{
	int num1{}, denom1{};
	int num2{}, denom2{};
	char ch{}, op{};

	std::cout << "Enter two fractions seperated by a plus sign: ";
	std::cin >> num1 >> ch >> denom1 >> op
		>> num2 >> ch >> denom2;

	int numResult{};
	int denomResult{};

	numResult = num1 * denom2 + num2 * denom1;
	denomResult = denom1 * denom2;

	std::cout << std::format("The sum is {}/{}\n", numResult, denomResult);
	return 0;
}
