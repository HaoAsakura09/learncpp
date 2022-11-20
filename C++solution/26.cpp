/* In one state, single residents are subject to the following income tax:
 * 	  
 * Income			Amount of tax
 * Not over $750	1% of income
 * $750-$2,250		$7.50	plus 2% of amount over $750
 * $2,250-$3,750	$37.50	plus 3% of amount over $2,250
 * $3,750-$5,250	$82.50	plus 4% of maount over $3,750
 * $5,250-$7,000	$142.50	plus 5% of amount over $5,250
 * Over $7,000		$230.00	plus 6% of amount over $7,000
 * 
 * Write a program that asks the user to enter the amount of taxable income,
 * then displays the tax due.
 */
#include <iostream>
#include <format>

int main()
{
	int taxableIncome{};
	float taxDue{};
	std::cout << "Enter the amount of taxable income: ";
	std::cin >> taxableIncome;

	if (taxableIncome <= 750)
		taxDue = taxableIncome * .01f;
	else if (taxableIncome <= 2250)
		taxDue = 7.50f + ((taxableIncome - 750) * .02f);
	else if (taxableIncome <= 3750)
		taxDue = 37.50f + ((taxableIncome - 2250) * .03f);
	else if (taxableIncome <= 5250)
		taxDue = 82.50f + ((taxableIncome - 3750) * .04f);
	else if (taxableIncome <= 7000)
		taxDue = 142.50f + ((taxableIncome - 5250) * .05f);
	else
		taxDue = 230.00f + ((taxableIncome - 7000) * .06f);

	std::cout << std::format("Tax due: {:<.2f}\n", taxDue);
	return 0;
}
