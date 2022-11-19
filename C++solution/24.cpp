/* Modify the broker.c program of Section 5.2 by making both of the following changes:
 * (a) Ask the user to enter the number if shares and the price per share, instead of the value
 * of the trade.
 * (b) Add statements that compute the commission charged by a rival broker($33 plus 3c per
 * share fo fewr than 2000 shares; $33 plus 2c per share for 2000 shares or more).
 * Display the rival's commission as well as the commission charged by the original broker.
 */
#include <iostream>
#include <format>

int main()
{
	float commission{};
	float rivalsCommission{};
	float value{};
	float pricePerShare{};
	int numberOfShares{};

	std::cout << "Enter number of shares: ";
	std::cin >> numberOfShares;
	std::cout << "Price per share: ";
	std::cin >> pricePerShare;

	value = numberOfShares * pricePerShare;

	if (value < 2'500.00f)
		commission = 30.00f + .017f * value;
	else if (value < 6250.00f)
		commission = 56.00f + .0066f * value;
	else if (value < 20'000.00f)
		commission = 76.00f + .0034f * value;
	else if (value < 50'000.00f)
		commission = 100.00f + .0022f * value;
	else if (value < 500'000.00f)
		commission = 155.00f + .0011f * value;
	else
		commission = 255.00f + .0009f * value;

	if (commission < 39.00f)
		commission = 39.00f;

	std::cout << std::format("Commission: ${:.2f}\n", commission);

	if (numberOfShares < 2000)
		rivalsCommission = 33.00f + numberOfShares * 0.03f;
	else
		rivalsCommission = 33.00f + numberOfShares * 0.02f;

	std::cout << std::format("Rival's commission: ${:.2f}\n", rivalsCommission);
	return 0;
}
