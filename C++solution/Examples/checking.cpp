// Balances a checkbook

#include <iostream>
#include <format>

int main()
{
	int cmd{};
	float balance{ 0.0f }, credit{}, debit{};

	std::cout << "*** ACME checkbook-balancing program ***\n";
	std::cout << "Commands: 0 = clear, 1 = credit, 2 = debit, 3 = balance, 4 = exit\n\n";

	for (;;)
	{
		std::cout << "Enter command: ";
		std::cin >> cmd;
		switch (cmd)
		{
		case 0:
			balance = 0.0f;
			break;
		case 1:
			std::cout << "Enter amount of credit: ";
			std::cin >> credit;
			balance += credit;
			break;
		case 2:
			std::cout << "Enter amount of debit: ";
			std::cin >> debit;
			balance -= debit;
			break;
		case 3:
			std::cout << std::format("Current balance: ${:.2f}\n", balance);
			break;
		case 4:
			return 0;
		default:
			std::cout << "Commands: 0 = clear, 1 = creadit, 2 = debit, 3 = debit, 4 = exit\n\n";
		}
	}
	return 0;
}
