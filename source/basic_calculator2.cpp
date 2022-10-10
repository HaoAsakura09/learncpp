#include <iostream>

void errMessage();
void printResult(int x, char operation, int y);
void ignoreLine();
int readNum();
char getOperator();

int main()
{
	char command, operation;
	int x, y;
	
	for(;;)
	{
		std::cout << "Enter a number: ";
		x = readNum();
		std::cout << "Enter an operator (+, -, *, /): ";
	   operation = getOperator();
		std::cout << "Enter another number: ";
		y = readNum();
		
		printResult(x, operation, y);
		
		std::cout << "Would you like to run this program again? (Y/N): ";
		std::cin >> command;
		ignoreLine();
		if(command == 'n' || command == 'N')
			break;
	}
	return 0;
}

void ignoreLine()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
int readNum()
{
	int num;
	std::cin >> num;
	
	while(!std::cin)
	{
		errMessage();
		std::cin.clear();
		ignoreLine();
		std::cin >> num;
	}
	
	ignoreLine();
	return num;
}

char getOperator()
{
	char op;
	std::cin >> op;
	
	while(!std::cin)
	{
		errMessage();
		std::cin.clear();
		ignoreLine();
	}
	
	while(op != '+' && op != '-' && op != '*' && op != '/')
	{
		std::cin.clear();
		ignoreLine();
		errMessage();
		std::cin >> op;
	}
	ignoreLine();
	return op;
}

void errMessage()
{
	std::cerr << "Invalid input!\n";
}

void printResult(int x, char op, int y)
{
	int result;
	
	switch(op)
	{
		case '+': result = x + y; break;
		case '-': result = x - y; break;
		case '*': result = x * y; break;
		case '/': result = x / y; break;
	}
	
	std::cout << x << ' ' << op << ' ' << y << " = " << result << '\n';
}
