#include <iostream>
#include <string>

int main()
{
	std::string word{}; 
	std::string largest{};
	std::string smallest{};
	
	int strSize{ };
	
	std::cout << "Enter word: ";
	std::getline(std::cin >> std::ws, word);
	
	largest = smallest = word;
	
	for(;;)
	{
		std::cout << "Enter word: ";
		std::getline(std::cin >> std::ws, word);
		
		strSize = word.length();
		if(strSize == 4)
			break;
		if(word > largest)
			largest = word;
		else if( word < smallest)
			smallest = word;
	}
	
	std::cout << "Smallest word: " << smallest << '\n';
	std::cout << "Largest word: " << largest << '\n';
	return 0;
}
