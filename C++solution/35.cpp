/* Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
 * terms: 
 * Enter a fraction 6/12
 * In lowest terms: 1/2
 * Hint: To reduce a fraction to lowest terms, first comoute the GCD of the enumberator and
 * denominator. Then divide both the numerator and denominator by GCD.
 */
#include <iostream>
#include <format>
#include <stdio.h> // scanf_s()

int main()
{
	int num{}, denom{};
	std::cout << "Enter a fraction: ";
	scanf_s("%d/%d", &num, &denom);

	int n{num}, m{denom}, r{};

	while (n > 0)
	{
		r = n % m;
		m = n;
		n = r;
	}

	std::cout << "m " << m << '\n';
std::cout << std::format("In lowest terms: {}/{}\n", num / m, denom / m);
	return 0;
}

