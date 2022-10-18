// Classifies a poker hand
#include <cstdio>
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
	char ch{};
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
        // reads rank
		std::cout << "Enter a card: ";
		rankCh = std::getchar();

		switch(rankCh)
		{
			case '0':                            exit(EXIT_SUCCESS);
			case '2':                            rank = 0;  break;
			case '3':                            rank = 1;  break;
			case '4':                            rank = 2;  break;
			case '5':                            rank = 3;  break;
			case '6':                            rank = 4;  break;
			case '7':                            rank = 5;  break;
			case '8':                            rank = 6;  break;
			case '9':                            rank = 7;  break;
			case 't':			case 'T':        rank = 8;  break;
			case 'j':			case 'J':        rank = 9;  break;
			case 'q':			case 'Q':        rank = 10; break;
			case 'k':			case 'K':	 rank = 11; break;
			case 'a':			case 'A':	 rank = 12; break;
			default: 					 badCard =  true;
		}
		// reads suit
		suitCh = std::getchar();
		switch(suitCh)
		{
            		case 'c':   case 'C':   suit = 0; break;
            		case 'd':   case 'D':   suit = 1; break;
            		case 'h':   case 'H':   suit = 2; break;
           	        case 's':   case 'S':   suit = 3; break;
            		default:                badCard = true; break;
		}

	      while((ch = std::getchar()) != '\n')
            	if(ch == ' ') badCard = true;

        if(badCard)
            std::cout << "Bad card; ignored.\n";
        else if(cardExists[rank][suit])
            std::cout << "Duplicate card; ignored.\n";
        else
        {
            numInRank[rank]++;
            numInSuit[suit]++;
            cardExists[rank][suit] = true;
            cardsRead++;
        }
	}
}

// Determines whether the hand contains a straight, a flush
// four-of-a-kind;

void analyzeHand()
{
    int numConsec{};
    int rank{};
    int suit{};

    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    // check for flush
    for( suit = 0; suit < numSuits; suit++)
        if( numInSuit[suit] == numCards)
            flush = true;

    // check for straight
    rank = 0;
    while( numInRank[rank] == 0) rank++;
    for(; rank < numRanks && numInRank[rank] > 0; rank++)
        numConsec++;
    if( numConsec == numCards)
    {
        straight = true;
        return;
    }

    // check for 4-of-a-kind, 3-of-a-kind, and pairs
    for( rank = 0; rank < numRanks; rank++)
        if(numInRank[rank] == 4) four = true;
        if(numInRank[rank] == 3) three = true;
        if(numInRank[rank] == 2) pairs++;
}

void printResult()
{
    if(straight && flush) std::cout << "Straight flush";
    else if(four)         std::cout << "Four of a kind";
    else if(three &&
            pairs == 1)   std::cout << "Full house";
    else if(flush)        std::cout << "Flush";
    else if(straight)     std::cout << "Straight";
    else if(three)        std::cout << "Three of a kind";
    else if(pairs == 2)   std::cout << "Two pairs";
    else if(pairs == 1)   std::cout << "Pair";
    else                  std::cout << "High card";

    std::cout << "\n\n";
}
