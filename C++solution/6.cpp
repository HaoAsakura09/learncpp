#include <iostream>
#include <iomanip>

int main()
{
    using dollar = double;
    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    std::cout << "Enter an amount: ";
    dollar amount{};
    std::cin >> amount;

    const double tax{ 5.0 / 100.0 };
    double withTaxAdded{ (amount * tax) + amount };

    std::cout << "With tax added: $" << withTaxAdded << '\n';
    return 0;
}
