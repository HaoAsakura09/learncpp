#include <cctype>
#include <iostream>
#include <string>
#include <iomanip>

constexpr int maxParts{ 100 };

struct Part
{
	int number{};
	std::string name{};
	int onHand{};
} inventory[maxParts];

int numParts{ 0 }; // Number of parts currently stored

int findPart(int number);
void insert();
void search();
void update();
void print();

int main()
{
	char code{};
	
	for(;;)
	{
		std::cout << "Enter operation code: ";
		std::cin >> code;
		
		switch(std::toupper(code))
		{
			case 'I':	insert(); 	break;
			case 'S':  search();  break;
			case 'U':  update();  break;
			case 'P':  print();		break;
			case 'Q':	return 0;
			default: 	std::cout << "Illegal code.\n";
		}
		
		std::cout << '\n';
	}
}

int findPart(int number)
{
	int i{};
	
	for(i = 0; i < numParts; i++)
		if(inventory[i].number == number)
			return i;
	return -1;
}

void insert()
{
	int partNumber{};
	
	if(numParts == maxParts)
	{
		std::cout << "Database is full; can't add more parts.\n";
		return;
	}
	
	std::cout << "Enter part number: ";
	std::cin >> partNumber;
	
	if(findPart(partNumber) >= 0)
	{
		std::cout << "Part number is already exists.\n";
		return;
	}
	
	inventory[numParts].number = partNumber;
	std::cout << "Enter part name: ";
	std::getline(std::cin >> std::ws, inventory[numParts].name);
	std::cout << "Enter quantity on hand: ";
	std::cin >> inventory[numParts].onHand;
	
	numParts++;
}

void search()
{
	int i{};
	int number{};
	
	std::cout << "Enter part number: ";
	std::cin >> number;
	
	i = findPart(number);
	
	std::cout << "inside search, i is = " << i << '\n';
	if(i >= 0)
	{
		std::cout << "Part name: " << inventory[i].name << '\n';
		std::cout << "Part number: " << inventory[i].number << '\n';
		std::cout << "Quantity on hand: " << inventory[i].onHand << '\n';
	}
	else
		std::cout << "Part not found.\n";
}

void update()
{
	int i{};
	int number{};
	int change{};
	
	std::cout << "Part number: ";
	std::cin >> number;
	
	i = findPart(number);
	
	if(i >= 0)
	{
		std::cout << "Enter change in quantity on hand: ";
		std::cin >> change;
		inventory[i].onHand += change;
	}
	else
		std::cout << "Part not found.\n";
}

void print()
{
	int i{};
	std::cout << "Part Number\tPartName\tQuantity on hand\n";
	for(i = 0; i < numParts; i++)
		std::cout << std::setw(7) << inventory[i].number << "\t\t" << inventory[i].name << "\t\t" << std::setw(7) <<  inventory[i].onHand << '\n';
}
