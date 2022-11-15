#include <iostream>
#include <format>

int main()
{
	int GSI{};
	int groupID{};
	int publisherCode{};
	int itemNumber{};
	int checkDigit{};

	char ch{};

	std::cout << "Enter ISBN: ";
	std::cin >> GSI >> ch >>
		groupID >> ch >>
		publisherCode >> ch >>
		itemNumber >> ch >>
		checkDigit;

	std::cout << std::format("GSI prefix: {}\n", GSI);
	std::cout << std::format("Group identifier: {}\n", groupID);
	std::cout << std::format("Publisher code: {}\n", publisherCode);
	std::cout << std::format("Item number: {}\n", itemNumber);
	std::cout << std::format("Check digit: {}\n", checkDigit);
				
	return 0;
}
