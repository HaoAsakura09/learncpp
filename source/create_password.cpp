
// Just playing with awesome functions in <cctype> lol
#include <cctype>
#include <iostream>
#include <string>

int main()
{
    std::string password{};
    std::cout << "Enter your password: ";
    std::getline(std::cin >> std::ws, password);

    bool hasNum{false};
    bool hasSpecialCharacter{};
    bool hasUppercase{};
    bool isLengthValid{};
    bool noSpaces{};

    int i{};

    while(password[i] != '\0')
    {
        if(std::isdigit(password[i]))
            hasNum = true;
        if(std::isspace(password[i]))
            noSpaces = true;
        if(password[i] < 'a')
            hasUppercase = true;
        if(password.size() > 8)
            isLengthValid = true;
        if(std::ispunct(password[i]))
            hasSpecialCharacter = true;

        i++;
    }

    if(hasNum && hasSpecialCharacter && hasUppercase && isLengthValid && !noSpaces)
        std::cout << "Congratulations for creating a valid password.\n";
    else
        std::cout << "Invalid password.\n";
    return 0;
}
