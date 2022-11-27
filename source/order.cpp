#include <cctype>
#include <iostream>
#include <iomanip>
#include <string>
#include <string_view>

int numUser{};

int checkItemCode(const int itemCode[], const int num);
void createAccount(std::string& userId, std::string& password );
void printOptions();

int main()
{
    std::string userId{}, password{};

    //Create an Account
    createAccount(userId, password);
    const std::string copyUser{userId};
    const std::string copyPassword{password};
    std::cout << '\n';

    // Login
    std::cout << "Login:\n";
    std::cout << "User ID: ";
    std::cin >> userId;
    std::cout << "Password: ";
    std::cin >> password;

    //Check if the user id and password are match
    std::cout << '\n';
    if(userId != copyUser && password != copyPassword)
    {
        std::cout << "The user ID or password is incorrect!\n";
        std::cout << "Rerun the program to create an account and login again.\n";
        return 0;
    }
    else
    {
        std::cout << "Login success!\n";
        std::cout << "Welcome employee, " << userId << "\n\n";
    }

    // items on shop
    std::string_view itemNames[3]{"Pokeball", "Master ball", "Great ball"};
    int itemCodes[3]{1, 2, 3};
    int itemPrices[3]{100, 200, 300};

    // your items
    int myItemCodes[3]{};
    int myItemPrices[3]{};
    int myItemAmount[3]{};

    // Order id
    int orderNum{1};
    int orderId{};
    int orderIds[3]{};
    int prices[3]{};
    std::string_view names[3]{};
    // Process order
    int total{}, amount{};

    int itemIndex{-1}; // if the item doesn't exist, it's negative 1
    int code{};
    int option{};
    int payment{};
    char buy{'y'};

    for(;;)
    {
        printOptions();
        std::cin >> option;
        std::cout << '\n';

        // Executes command
        switch(option)
        {
        case 1:
            {
                std::cout << "Make an order:\n";
                while(std::tolower(buy) != 'n' )
                {
                    itemIndex = checkItemCode(itemCodes, 3);
                    if( itemIndex < 0)
                        std::cout << "Item doesn't exist!\n";
                    else
                    {
                        code = itemCodes[itemIndex];
                        std::cout << "Enter amount: ";
                        std::cin >> amount;

                        // Print item
                        std::cout << "Item code: " << code << '\n';
                        std::cout << "Item name: " << itemNames[itemIndex] << '\n';
                        std::cout << "Amount: " << amount << '\n';
                        std::cout << "Price: " << itemPrices[itemIndex] << '\n';
                        total += itemPrices[itemIndex] * amount;
                        std::cout << "Total: " << total << '\n';
                        std::cout << "Do you want to buy more items? (y/n): ";

                        // track items
                        myItemPrices[itemIndex] = itemPrices[itemIndex];
                        myItemCodes[itemIndex] = itemCodes[itemIndex];
                        myItemAmount[itemIndex] += amount;
                        std::cin >> buy;
                        std::cout << '\n';
                    }
                }

                std::cout << "Items\t\tAmount\tTotal price\n";
                for(int i{}; i < 3; i++)
                {
                    std::cout << itemNames[i] << "\t" << myItemAmount[i] << '\t' << myItemPrices[i] * myItemAmount[i] << '\n';
                }
                std::cout << "\t\t\t" << total << "\n\n";
                std::cout << "Enter payment: ";
                std::cin >> payment;

                while(payment < total)
                {
                    std::cout << "Not enough balance!\n";
                    std::cout << "Enter payment: ";
                    std::cin >> payment;
                }

                std::cout << "Change: " << payment - total << "\n\n";

               // Receipt
                std::cout << "Enter order ID: ";
                std::cin >> orderIds[numUser];
                std::cout << "Receipt:";
                std::cout << "Order id: " << orderIds[numUser] << '\n';
                std::cout << "\nItem list:\n";
                for(int i{}; i < 3; i++)
                {
                    if(myItemAmount[i] != 0)
                        std::cout << itemNames[i];
                    std::cout << '\n';
                }
                std::cout << "Total price: " << total << '\n';
                std::cout << "Change: " << payment - total << "\n\n";

                // Save info
                names[numUser] = userId;
                prices[numUser] = payment - total;
                numUser++;
            }
            break;
        case 2:
            {
                bool isFound{};
                std::cout << "Order history:\n";
                std::cout << "Enter order ID: ";
                std::cout << "Order ID: ";
                std::cin >> orderId;
                for(int i{}; i < 3; i++)
                {
                    if(orderIds[i] == orderId)
                    {
                        std::cout << "Order ID: " << orderIds[i] << '\n';
                        std::cout << "Price: " << prices[i] << '\n';
                        std::cout << "Employee name: " << names[i] << '\n';
                        isFound = true;
                        break;
                    }
                }

                if(!isFound)
                    std::cout << "Order ID not found.\n";
            }
            break;
        case 3:
            {
                std::cout << "Search order:\n";
                std::cout << "Enter order ID: ";
                std::cin >> orderId;

                for(int i{}; i < 3; i++)
                {
                    if(orderIds[i] == orderId)
                    {
                        std::cout << "Receipt:";
                        std::cout << "Order id: " << orderIds[i] << '\n';
                        std::cout << "\nItem list:\n";
                        std::cout << itemNames[i];
                        std::cout << '\n';
                        std::cout << "Total price: " << total << '\n';
                        std::cout << "Change: " << prices[i] << "\n\n";
                    }
                }

            }
            break;
            case 4: return 0;
        }
        std::cout << '\n';
    }
    return 0;
}

int checkItemCode(const int itemCode[], const int num)
{
    int code;
    std::cout << "Enter item code: ";
    std::cin >> code;

    for(int i{}; i < num; i++)
        if(code == itemCode[i])
            return i;
        return -1;
}

void printOptions()
{
    std::cout << "Option:\n";
    std::cout << "1. Make an order\n";
    std::cout << "2. Order history\n";
    std::cout << "3. Search order\n";
    std::cout << "4. Exit\n";
}

void createAccount(std::string& userId, std::string& password)
{
    std::cout << "Register:\n";
    std::cout << "Enter your user ID: ";
    std::cin >> userId;
    std::cout << "Enter your password: ";
    std::cin >> password;
}
