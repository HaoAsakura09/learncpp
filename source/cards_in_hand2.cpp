// Classifies a poker hand
#include <iostream>
#include <cstdlib>
#include <string>

constexpr int numRanks{ 13 };
constexpr int numSuits{ 4 };
constexpr int numCards{ 5 };

// External variables
int numInRank[numRanks]{};
int numInSuit[numSuits]{};
bool straight{};
bool flush{};
bool four{};
bool three{};

int pairs{}; // Can be 0, 1 or 2

// Prototypes
void readCards();
void analyzeHand();
void printResult();

int main()
{
	for(;;)
	{
		readCards();
		analyzeHand();
		printResult();
	}
	return 0;
}

// reads cards
// check for bad and duplicated cards
void readCards()
{
	bool cardExists[numRanks][numSuits]{};
	bool badCard{};
	std::string str{};
	char rankCh{};
	char suitCh{};
	int rank{};
	int suit{};
	int cardsRead{};
	
	for( rank = 0; rank< numRanks; rank++)
	{
		numInRank[rank] = 0;
		for( suit = 0; suit < numSuits; suit++)
			cardExists[rank][suit] = false;
	}
	
	for( suit = 0; suit < numSuits; suit++)
		numInSuit[suit] = 0;
	
	while( cardsRead < numCards )
	{
		badCard = false;
		
		std::cout << "Enter a card: ";
		std::cin >> str;
		
		switch(str[0])
		{
			case '0':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 't':			case 'T':
			case 'j':			 case 'J':
			case 'q':			case 'Q':
			case 'k':			case 'K':		 rank = 11; break;
			case 'a':			case 'A':		  rank = 12; break;
			default: 										badCard = true;
		}
		
	}
}
