#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> names;
	std::string inputName{};
	char answer{};										// Response to a prompt
	
	do{
		// read a name
		std::cout << "Enter a name: ";
		std::cin >> inputName;
		names.push_back(inputName);
		
		std::cout << "Do you want to enter another name? (y/n):";
		std::cin >> answer;
	}while(std::tolower(answer) ==  'y');
	
	
	// sort the names in ascending order
	// This loop runs as long as the names are not in ascending order
	bool sorted{};
	
	do
	{
		sorted = true;
		for(size_t i{1}; i < names.size(); i++)
		{
			if(names[i - 1] > names[i])
			{
				names[i].swap(names[i - 1]);
				sorted = false;
			}
		}
	}while(!sorted);
	
	// Find the length of the longest name
	size_t maxLength{};
	for(const auto& name : names)
	{
		if(maxLength < name.length())
			maxLength = name.length();
	}
	
	// Output the sorted names 5 to a line
	size_t count{};
	const size_t fieldWidth{ maxLength + 2 };
	
	for(const auto& name : names)
	{
		std::cout << std::setw(fieldWidth) << name;
		if(++count %  5 == 0)
			std::cout << '\n';
	}
	
	std::cout << '\n';
	return 0;
}
