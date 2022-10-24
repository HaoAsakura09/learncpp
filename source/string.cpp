#include <cctype>
#include <iostream>
#include <array>

int main()
{
	std::string text{};
	std::cout << "Enter a line of text: ";
	std::getline(std::cin >> std::ws, text);

	unsigned vowels{};
	unsigned consonants{};
	
	for(size_t i{}; i < text.length(); i++)
	{
		if(std::isalpha(text[i]))
		{
			switch(std::toupper(text[i]))
			{
				case 'A': case 'E': case 'I': case 'O': case 'U':
					++vowels;
					break;
				default: 
					++consonants;
					break;
			}
		}
	}
	
	std::cout << "Your input contained " << vowels << " vowels and " << consonants << " consonants.\n";
	return 0;
}
