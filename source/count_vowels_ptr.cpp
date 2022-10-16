#include <cctype>
#include <iostream>
#include <iterator>

bool isVowel(char ch);

int main()
{
	char name[]{ "Hyperjones" };
	int nameLength{ static_cast<int>(std::size(name)) };
	int numVowels{ 0 };

	for (char* ptr{ name }; ptr != (name + nameLength); ptr++)
	{
		if (isVowel(*ptr))
			numVowels++;
	}

	std::cout << name << " has " << numVowels << " vowels.\n";
	return 0;
}

bool isVowel(char ch)
{
	switch (std::toupper(ch))
	{
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		return true;
	default:
		return false;
	}
}
