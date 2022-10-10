#include <cstdlib>
#include <iostream>

void printResult(int x, char operation, int y, int result);
int getResult(int x, char operation, int y);
bool isOperatorValid(char operation);
char getOperator();
int readNumber();

int main()
{
	printf("Enter the first number: ");
	int x{ readNumber() };
	printf("Enter the operator (+, -, *, /, %%): ");
	char operation{ getOperator() };
	printf("Enter the second number: ");
	int y{ readNumber() };
	
	int result = getResult(x, operation, y);
	printResult(x, operation, y, result);
	return 0;
}

int readNumber()
{
	int num;
	std::cin >> num;
	
	return num;
}

char getOperator()
{
	char ch;
	std::cin >> ch;
	
	return ch;
}

bool isOperatorValid(char operation)
{
	switch(operation)
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
			return true;
		default:
			return false;
	}
}

int getResult(int x, char operation, int y)
{
	int result = 0;
	// checks if divisor is 0
	if(y == 0)
	{
		std::cout << "Cannot be divided by 0.\n";
		exit(EXIT_FAILURE);
	}
   
	switch(operation)
	{
		case '+': result = x + y; break;
		case '-': result = x - y; break;
		case '*': result = x * y; break;
		case '/': result = x / y; break;
		case '%': result = x % y; break;
	}
	
	return result;
}

void printResult(int x, char operation, int y, int result)
{
	// Checks if the operator is valid
	if(!isOperatorValid(operation))
	{
		std::cout << "Invalid operator!\n";
		exit(EXIT_FAILURE);
	}
	
	std::cout << x << ' ' << operation << ' ' << y << " = " << result << '\n';
}
