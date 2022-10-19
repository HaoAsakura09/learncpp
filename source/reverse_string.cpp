#include <array>
#include <iostream>
#include <string>
#include <string_view>

void printReversal(std::string_view msg);

int main()
{
	std::cout << "Enter a message: ";
	std::string message{};
	std::getline(std::cin >> std::ws, message);
	
	std::cout << "Reversal is: ";
	printReversal(message);
	std::cout << '\n';
}

void printReversal(std::string_view msg)
{
	int sizeStr{ static_cast<int>( std::size(msg) )};
	
	while( sizeStr >= 0 )
	{
		std::cout << msg[sizeStr--];
	}
}
