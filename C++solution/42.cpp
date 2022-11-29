/* Programming Project 8 in Chapter 2 asked you ti write a program that calculates the
 * remaining balance on a loan after the first, second, and third monthly paymens. Modify the 
 * proggram so that it also asks the user to enter the number of payments and then displays the
 * balance remaining after each of these payments.
 */
#include <iostream>
#include <format>

int main()
{
	double loanAmount{};
	double interestRate{};
	double monthlyPayment{};
	int numberOfPayments{};

	std::cout << "Enter amount of loan: ";
	std::cin >> loanAmount;
	std::cout << "Enter interest rate: ";
	std::cin >> interestRate;
	std::cout << "Enter monthly payment: ";
	std::cin >> monthlyPayment;
	std::cout << "Enter number of payments: ";
	std::cin >> numberOfPayments;

	for (int i{1}; i <= numberOfPayments; i++)
	{
		std::cout << "\nBalance remaining after " << i;
		switch (i)
		{
		case 1: case 21: case 31: std::cout << "st";  break;
		case 2: case 22:          std::cout << "nd";  break;
		case 3: case 23:          std::cout << "rd";  break;
		default:                  std::cout << "th";  break;
		}

		loanAmount -= monthlyPayment - (loanAmount * (interestRate / 100.0 / 12.0));
		std::cout << std::format(" payment: ${:<10.2f}\n", loanAmount);
	}
	return 0;
}
