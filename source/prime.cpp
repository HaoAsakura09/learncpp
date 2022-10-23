#include <iostream>
#include <iomanip>

int main()
{
	// Number of primes required
	const size_t max{ 100 };	
	// First prime defined			
	long primes[ max ]{ 2L };
	// Count of primes found so far
	size_t count{ 1 };
	// Candidate prime
	long trial{ 3L };
	
	while( count < max )
	{
		// Indicates when a prime is found
		bool isPrime{ true };
		
		// Try dividing the candidate by all the prime we have
		for(size_t i{}; i < count && isPrime; i++)
		{
			// false for exact division
			isPrime = trial % *(primes + i) > 0; 
		}
		
		if(isPrime)
		{
			// save it in array if number is a prime
			*(primes + count++) = trial;
		}
		
		trial += 2; // next value for checking
	}
	
	// Ouput  primes 10 to a line
	std::cout << "The first " << max << " primes.\n";
	for(size_t i{}; i < max; i++)
	{
		std::cout << std::setw(7) << *(primes + i);
		if((i + 1) % 10 == 0)
			std::cout << '\n';
	}
	std::cout << '\n';
	return 0;
}
