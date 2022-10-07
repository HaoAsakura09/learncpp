#include <iostream>

int main(void)
{
	int x, y;
	char operation;
	
	std::cout << "Enter the first number: ";
	std::cin >> x;
	std::cout << "Enter the operation to be performed (+, -, *, /): ";
	std::cin >> operation;
		if(operation != '+' && operation != '-' && operation != '*' && operation != '/')
	{
		printf("Operator is invalid!\n");
		return 0;
	}
	
	std::cout << "Enter the second number: ";
	std::cin >> y;
	if(y == 0)
	{
		printf("Cannot be divided by 0.\n");
		return 0;
	}

		if(operation == '+')
			std::cout << x << " + " << y << " = " << x + y;
		else if(operation == '-')
			std::cout << x << '-' << y << " = " << x - y;
		else if(operation == '*')
			std::cout << x << '*' << y << " = " << x * y;
		else
			std::cout << x << '/' << y << " = " << x / y;
		std::cout << "\n";

	return 0;
}
