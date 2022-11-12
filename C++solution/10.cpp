#include <iostream>
#include <format>

int main()
{
	std::cout << "Enter amount of loan: ";
	double loanAmount{};
	std::cin >> loanAmount;

	std::cout << "Enter interest rate: ";
	double interestRate{};
	std::cin >> interestRate;

	std::cout << "Enter monthly payment: ";
	double monthlyPayment{};
	std::cin >> monthlyPayment;

	loanAmount -= monthlyPayment - (loanAmount * (interestRate / 100.0 / 12.0));
	std::cout << std::format("\nBalance remaining after first payment: ${:<10.2f}\n", loanAmount);

	loanAmount -= monthlyPayment - (loanAmount * (interestRate / 100.0 / 12.0));
	std::cout << std::format("Balance remaining after second payment: ${:<10.2f}\n", loanAmount);

	loanAmount -= monthlyPayment - (loanAmount * (interestRate / 100.0 / 12.0));
	std::cout << std::format("Balance remaining after third payment: ${:<10.2f}\n", loanAmount);
	return 0;
}
