#include <iostream>

bool isPrime(int n);

int main()
{
	printf("Enter a number: ");
	int num;
	std::cin >> num;
	
	if(isPrime(num) == true)
		std::cout << num << " is a prime number.\n";
	else
		std::cout << num << " is not a prime number.\n";
	return 0;
}

bool isPrime(int n)
{
	if( n <= 1 )
		return false;
	
	if(4 <= n)
		if(n % 2 == 0)
			return false;
	return true;
}
