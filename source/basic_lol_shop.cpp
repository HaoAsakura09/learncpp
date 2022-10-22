#include <cctype>
#include <iostream>
#include <vector>
#include <iomanip>

void setPrecision(int n);

int main()
{
	setPrecision(2);
	
	std::vector<int> productID;
	std::vector<int> quantity;
	std::vector<double> itemPrice;
	double cost{};
	double totalCost{};
	char command{};
	
	for(;;)
	{
		std::cout << "Enter a command (b = buy, p = print, c = clear, e = check your item list, q = quit): ";
		std::cin >> command;
		
		switch(std::toupper(command))
		{
			case 'B':
			{
				std::cout << "Product: 1001, 1003\n";
				std::cout << "Enter product ID: ";
				int n{};
				std::cin >> n;
			
		      if(n == 1001)
		      {
		      	productID.push_back(n);
		      	itemPrice.push_back(9.95);
		      }
		      else if(n == 1003)
		      {
		      	productID.push_back(n);
		      	itemPrice.push_back(15.50);
		      }
		      else
		      {
		      	std::cout << n << " is not available.\n";
		      	break;
		      }
		      
				std::cout << "Enter quantity: ";
				std::cin >> n;
				quantity.push_back(n);
			}
			break;
			case 'C':
			{
				productID.clear();
				quantity.clear();
				itemPrice.clear();
				
				std::cout << "All items in your list are deleted.\n";
			}
			break;
			case 'E':
			{
				if(!productID.empty())
					std::cout << "There's item in your list.\n";
				else
					std::cout << "Your list is empty.\n";
			}
			break;
			case 'P':
			{
				std::cout << "\n-------------------------------------------------------\n";
				std::cout << "Product \tQuantity\tUnit price\tCost\n";
				std::cout << "-------------------------------------------------------\n";
				
				for(int i{}; i < productID.size(); i++)
				{
					std::cout << productID[i] << std::setw(14)
										 << quantity[i] << std::setw(15)
										<< '$' << itemPrice[i];
										 cost += quantity[i] * itemPrice[i];
					std::cout << std::setw(12) << '$' << cost << '\n';
					totalCost += cost;
					cost = 0;
				}
				std::cout  << std::setw(49) << '$' << totalCost << '\n';
				std::cout << "-------------------------------------------------------\n";
			}
			break;
			case 'Q': return 0;
		}
		
		std::cout << '\n';
	}
}

void setPrecision(int n)
{
	std::cout << std::fixed << std::setprecision(n);
}
