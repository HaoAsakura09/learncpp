#include <iostream>

int main(void)
{
	std::cout << "Enter an integer: ";
	int num;
	std::cin >> num;
	std::cout << "Double " << num << " is " << num * 2;
	std::cout << '\n';
	std::cout << "Triple " << num << " is " << num * 3;
	return 0;
}
