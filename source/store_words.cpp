#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

int main()
{
	std::string text;
	std::cout << "Enter some text terminated by *:\n";
	std::getline(std::cin, text, '*');
	
	const std::string separators{ " ,;:.\"!?'\n" };
	std::vector<std::string> words;
	
	size_t start{ text.find_first_not_of(separators) };
   
	while(start != std::string::npos)
	{
		size_t end = text.find_first_of(separators, start + 1);
		if(end == std::string::npos)
			end = text.length();
	
		words.push_back(text.substr(start, end - start));
		start = text.find_first_not_of(separators, end + 1);
	} 
   
   std::cout << "Your string contains the following " << words.size() << " words: \n";
   
   size_t count{1};
   
   for(const auto& word : words)
   {
   	std::cout << std::setw(15) << word;
      if(count % 5 == 0)
      	std::cout << '\n';
      ++count;
   }
	return 0;
}
