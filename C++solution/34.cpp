/* Write a program that asks the user to enter two integers, then calculates
 * and displays their greatest common diviser (GCD):
 * Enter two intefers: 12 28
 * Greatest common divisor: 4
 * Hint: THe classic algoritm for computing the GCD, known as Euclid's  algorithm, goas as
 * follows: Let m and n be variables containing the two numbers. If n is 0, then stop: m
 * contains the GCD . Otherwise, compute the remainder when m is divided by n, COpy n into m
 * and copy the remainder into n. Then repeat the process, starting with testing whether n is 0.
 */
#include <iostream>
#include <format>

int main()
{
	int m, n, r;
	std::cout << "Enter two integers: ";
	std::cin >> m >> n;

	while (n > 0)
	{
		r = m % n;
		m = n;
		n = r;
	}

	std::cout << std::format("Greatest common divisor: {}\n", m);
	return 0;
}
