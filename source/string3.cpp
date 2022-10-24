#include <iostream>

int main()
{
    std::string first;
    std::string second;

    std::cout << "Enter your first name: ";
    std::getline(std::cin, first);

    std::cout << "Enter your second name: ";
    std::getline(std::cin, second);

    std::string sentence{"Your full name is "};
    sentence += first + " " + second + ".";

    std::cout << sentence << '\n';
    std::cout << "The string contains "
              << sentence.length() << " characters.\n";
    return 0;
}
