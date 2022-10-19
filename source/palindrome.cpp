#include <array>
#include <cctype>
#include  <iostream>
#include <string>

bool isPalindrome( std::string_view msg);

int main()
{
	std::cout << "Enter a message: ";
	std::string message{};
	std::getline(std::cin >> std::ws, message);
	
	if(isPalindrome(message))
		std::cout << "Palindrome.\n";
	else
		std::cout << "Not a palindrome.\n";
}

bool isPalindrome( std::string_view msg )
{
	int msgSize{}, i{};
	
	std::string  cMsg{msg};
	std::string temp{""};
	
	while(cMsg[i] != '\0')
	{
		if(std::isalpha(cMsg[i]))
			temp += cMsg[i];
			i++;
	}
	
	i = 0;
	msgSize = static_cast<int>(std::ssize(temp)) - 1;
	
	while( msgSize >= 0 )
	{
		
		if(std::tolower(temp[i]) != std::tolower(temp[msgSize]))
			return false;
		
		i++; msgSize--;
	}
	return true;
}
