// Exercise 2-8. Here's an extra exercise for puzzle fans.
// Write a program that will prompt the user to enter two 
// different positive integers. Identify in the output the value of 
// the larger integer and the value of the smaller integer. Using the
// decision-making facilities of Chapter 5. this would be like 
// stealing a piece of cake from a baby while walking in the park.
// What makes this tough brain teaser, though, it that this can done solely
// with the operators you've learned about in chapter.
#include <iostream>
#include <format>


int main()
{
	std::cout << std::format("Enter two positive integers: ");
	int a{};
	int b{};
	std::cin >> a >> b;

	if (a > b)
		std::cout << std::format("Larger: {}, smaller: {}.\n", a, b);
	else
		std::cout << std::format("Larger: {}, smaller: {}.\n", b, a);
	return 0;
}
