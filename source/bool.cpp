#include <iostream>

bool isEqual(int x, int y);
bool isGreater(int x, int y);
bool isLessThan(int x, int y);
bool isOdd(int x, int y);
bool isEven(int x, int y);

int main()
{
	std::cout << "Enter the first number: ";
	int a;
	std::cin >> a;
	std::cout << "Enter the second number: ";
	int b;
	std::cin >> b;
	
	std::cout << std::boolalpha;
	std::cout << "Is a == b? " << isEqual(a, b) << '\n';
	std::cout << "Is a > b?  " << isGreater(a, b) << '\n';
	std::cout << "Is a < b? " << isLessThan(a, b) << '\n';
	std::cout << "Is the result of a + b is odd number? " << isOdd(a, b) << '\n';
	std::cout << "Is the result of a + b is even number? " << isEven(a, b) << '\n';
	return 0;
}

bool isEqual(int x, int y)
{
	return x == y;
}

bool isGreater(int x, int y)
{
	return x > y;
}

bool isLessThan(int x, int y)
{
	return x < y;
}

bool isOdd(int x, int y)
{
	return (x + y) % 2 != 0;
}

bool isEven(int x, int y)
{
	return (x + y) % 2 == 0;
}
