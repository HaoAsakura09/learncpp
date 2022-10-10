#include <iostream>

int main()
{
	int x;
	tryagain:
		std::cout << "Enter a positive integer: ";
		std::cin >> x;
		
	if(x < 0)
		goto tryagain;
		
	std::cout << "Good boy.\n";
	return 0;
}
