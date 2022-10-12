#include <iostream>
#include <string_view>

enum class Animals
{
	pig,
	chicken,
	goat,
	cat,
	dog ,
	duck,
};

void printNumberOfLegs(std::string_view name, Animals animal);
std::string_view getAnimalName(Animals name);

int main()
{
	Animals animal{ Animals::pig };
	
	std::string_view animalName {getAnimalName(animal) };
	
	printNumberOfLegs(animalName, animal);
	return 0;
}

std::string_view getAnimalName(Animals name)
{
	std::string_view animalName{};
	switch(name)
	{
		case Animals::pig: animalName = "Pig"; 
			break;
		case Animals::chicken: animalName = "Chicken";
			break;
		case Animals::goat: animalName = "Goat"; 
			break;
		case Animals::cat: animalName = "Cat";
			break;
		case Animals::dog: animalName = "Dog";
			break;
		case Animals::duck: animalName = "Duck";
			break;
		default: animalName = "Unknown"; 
			break;
	}
	 return animalName;
}

void printNumberOfLegs(std::string_view name, Animals animal)
{
	int numLegs{ };
	
	switch(animal)
	{
		case Animals::pig: 
		case Animals::goat:
		case Animals::cat:
		case Animals::dog:
			numLegs = 4;
			break;
		case Animals::chicken:
		case Animals::duck:
			numLegs = 2;
			break;
		default: std::cout << "Unknown"; 
			break;
	}
	
	if(numLegs != 0)
		std::cout << "The " << name << " have " << numLegs << " legs.\n";
}
