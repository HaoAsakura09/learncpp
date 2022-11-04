#include<iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <string_view>

int computer();

void printResult( int computerPick );

int main()
{
	std::srand(static_cast<unsigned>(std::time(nullptr)));	
	
	std::cout << "Scissors, Rock, Paper Game!\n";
	
	printResult(computer());
	return 0;
}

int computer()
{
	return ( rand() % 3 );	
}

void printResult( int computerPick )
{
	std::string_view pick[]{ "scissors", "rock", "paper" };
	
	std::cout << "scissors(0), rock(1), paper(2): ";
	int playerPick{};
	std::cin >> playerPick;
	
	if(playerPick == 0 && computerPick == 2)
		std::cout << "The computer is " << pick[computerPick] << ". You are " <<pick[playerPick] << ". You won.\n";
	else if(playerPick == 2 && computerPick == 1)
		std::cout << "The computer is " << pick[computerPick] << ". You are " <<pick[playerPick] << ". You won.\n";
	else if(playerPick == computerPick)
		std::cout << "The computer is " << pick[computerPick] << ". You are " << pick[playerPick] << " too. It is a draw\n";
	else
		std::cout << "The computer is " << pick[computerPick] << ". You are " << pick[playerPick] << ". You lost.\n";
}
