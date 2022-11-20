#include <cctype>   //toupper()
#include <iostream>
#include <string>

constexpr int sizeCh{ 38 }; // number of -.-.-...

void printChar();

int main()
{
    // Menu
    printChar();
    std::cout << "\n\t\t\tWELCOME TO MY CAFE\n";
    printChar();
    std::cout << '\n';
    std::cout << "Menu:\t\tSmall[s]\t\tMedium[m]\t\tLarge[l]\n";
    std::cout << "[a] Coffee\t50.00\t\t\t70.00\t\t\t90.00\n";
    std::cout << "[b] Milktea\t40.00\t\t\t50.00\t\t\t60.00\n";
    std::cout << "[c] FruitTea\t35.00\t\t\t45.00\t\t\t55.00\n";
    printChar();
    std::cout << '\n';

    char choice{};
    char itemSize{};
    int quantity{};
    int totalAmount{};
    int payment{};
    std::string sizeStr{}; 

        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cout << "Enter size(Small = s, Medium = m, Large = l): ";
        std::cin >> itemSize;
        std::cout << "Enter quantity: ";
        std::cin >> quantity;


        switch(std::toupper(choice))
        {
        case 'A':
            {
                if(std::toupper(itemSize) == 'S')
                    totalAmount = 50 * quantity;
                else if(std::toupper(itemSize) == 'M')
                    totalAmount = 70 * quantity;
                else
                    totalAmount = 90 * quantity;
            }
            break;
        case 'B':
            {
                if(std::toupper(itemSize) == 'S')
                    totalAmount = 40 * quantity;
                else if(std::toupper(itemSize) == 'M')
                    totalAmount = 50 * quantity;
                else
                    totalAmount = 60 * quantity;
            }
            break;
        case 'C':
            {
                if(std::toupper(itemSize) == 'S')
                    totalAmount = 35 * quantity;
                else if(std::toupper(itemSize) == 'M')
                    totalAmount = 45 * quantity;
                else
                    totalAmount = 55 * quantity;
            }
            break;
        default: std::cout << "Wrong choice code.\n";
            return 0;
        }
        std::cout << "Total amount: " << totalAmount << '\n';
        std::cout << "Enter payment: ";
        std::cin >> payment;

    printChar();
    std::cout << '\n';
    std::cout << "\t\t\t\tRECEIPT\n";
    printChar();

        // store the size in string
        if(std::toupper(itemSize) == 'S')
            sizeStr = "Small";
        else if(std::toupper(itemSize) == 'M')
            sizeStr = "Medium";
        else
            sizeStr = "Large";

        // Price of the item
        int itemPrice{ totalAmount / quantity};

        std::cout << '\n';
        switch(std::toupper(choice))
        {
        case 'A':
                {
                    std::cout << "Coffee - P" << itemPrice << "(" << sizeStr << ") x" << quantity << '\n';
                    std::cout << "Total amount:\tP" << totalAmount << '\n';
                    std::cout << "Payment:\tP" << payment << '\n';
                    std::cout << "Change:\t\tP" << payment - totalAmount << '\n';

                }
                break;
        case 'B':
            {
                std::cout << "Milktea - P" << itemPrice << "(" << sizeStr << ") x" << quantity << '\n';
                std::cout << "Total amount:\tP" << totalAmount << '\n';
                std::cout << "Payment:\tP" << payment << '\n';
                std::cout << "Change:\t\tP" << payment - totalAmount << '\n';
            }
            break;
        case 'C':
            {
                std::cout << "FruitTea - P" << itemPrice << "(" << sizeStr << ") x" << quantity << '\n';
                std::cout << "Total amount:\tP" << totalAmount << '\n';
                std::cout << "Payment:\tP" << payment << '\n';
                std::cout << "Change:\t\tP" << payment - totalAmount << '\n';
            }
            break;
        }

    printChar();
    return 0;
}

void printChar()
{
 for(int i{}; i < sizeCh; i++)
    std::cout << ".-";
}
