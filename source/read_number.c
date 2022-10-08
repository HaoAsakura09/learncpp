#include <iostream>

int get_input(void)
{
	std::cout << "Enter a number: ";
	int num;
	std::cin >> num;
	
	return num;
}

int main(void)
{
	int a{ get_input() };
	int b{ get_input() };
	
	std::cout << a << " + " << b << " is " << (a + b) << '\n';
	return 0;
}
