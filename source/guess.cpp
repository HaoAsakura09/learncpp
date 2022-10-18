#include <cctype>
#include <iostream>
#include <cstdlib>
#include <time.h>

constexpr int maxNumber{ 100 };

// External variable
int secretNumber{};

// Prototypes
void initializeNumberGenerator();
void chooseNewSecretNumber();
void readGuesses();

int main()
{
	char command{};
	
	std::cout << "Guess the secret number between 1 and " << maxNumber << "\n\n";
	initializeNumberGenerator();
	
	do{
		chooseNewSecretNumber();
		std::cout << "A new number has been chosen.\n";
		readGuesses();
		std::cout << "Play again? (Y/N): ";
		std::cin >> command;
	}while(std::toupper(command) == 'Y');
	
	std::cout << "Thank you for playing!\n";
	return 0;
}

// Initializes number generayor using time of day
void initializeNumberGenerator()
{
	std::srand(static_cast<unsigned>(std::time(nullptr)));
}

// Randomly selects a number between 1 and maxNumber
void chooseNewSecretNumber()
{
	secretNumber = rand() % maxNumber;
}

// reads user guesses
// tells the use whether each guess is too low, too high or correct
void readGuesses()
{
	int guess{}, numGuesses{};
	
	for(;;)
	{
		numGuesses++;
		std::cout << "Enter guess: ";
		std::cin >> guess;
		if(guess == secretNumber)
		{
			std::cout << "You won in " << numGuesses << "\n\n";
			return;
		}
		else if(guess < secretNumber)
			std::cout << "Too low; try again.\n";
		else
			std::cout << "Too high; try again.\n";
	}
}
