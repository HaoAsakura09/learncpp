#include <cctype>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	cout << showpoint << fixed << setprecision(2);
	
	int itemChoice{};
	char option{};
	int getQuantity{};
	
	string items[12]{"Deathnote Notebook", "Bleach S10 Wristwatch", "Pokemon Cards", "Cardcaptor Sakura Mousepad", "Zenki Neck Pillow", "Azumanga Daioh Sling Bag", "Tony Tony Chopper Bagpack", "Luffy's Hat", "Mojacko's Plushy", "Naruto Mug", "Vampire Knight Necklace", "Shingeki no Kyojin Badge"};
   int quantity[12]{};
	 double  itemPrice[12]{200.00, 510.00, 35.00, 50.00, 150.00, 150.00, 325.00, 228.00, 100.00, 175.00, 110.00, 90.00};
	
	for(int i = 0; i < 12; i++)
			cout  << setw(2) << right  << (i + 1) << ' ' << left << setw(40)  <<  items[i] << "P" << setw(10) << left  <<  itemPrice[i] << '\n';
		
	do{

	  cout << "\nEnter the number of item that you want to purchase: ";
	  cin >> itemChoice;
	  
	 switch(itemChoice)
	 {
	 	case 1: case 2: case 3: case 4:
	 	case 5: case 6: case 7: case 8: case 9:
	 	case 10: case 11: case 12:
	 	{
	 		cout << items[itemChoice - 1] << '\n';
	 		cout << "Enter quantity: ";
	 		cin >> getQuantity;
	 		quantity[itemChoice - 1] += getQuantity;
	 	}
	 	break;
	 	default: cout << "Item doesn't exist.\n"; break;
	 }
	 cout << "Do you want to make another purchase? (Y/N): ";
	     cin >> option;
	 
	}while( toupper(option) == 'Y');
	
	string customerName{};
	double cash{};
	string date{};
	
	cout << "Enter your name: ";
	getline(cin >> ws, customerName);
	cout << "Enter amount: ";
	cin >> cash; 
	cout << "Enter date(mm/dd/yy): ";
	cin >> date;
	
	
	// Calculate total 
	double total{};
	int quantityTotal{};
	for(int i{}; i < 12; i++)
	{
		if(quantity[i] != 0)
		{	
			total += itemPrice[i];
			quantityTotal += quantity[i];
		}
	}
	
	if(cash < total)
	{
		cout << "Insufficient money!\n";
		return 0;
	}
	
	cout << "\n===========================================================\n";
	cout << '\n';
	cout << setw(40) << right <<  "The Blue Blood Shop\n";
	cout << setw(55) << right <<  "649 corner st. Mayaman Road, Balaka City Philippines\n";
	cout << setw(40) << right <<  "Contact No. 8893-7111\n";
	cout << setw(30) << right << date << '\n';
	
	cout << "------------------------------------------------------------\n";
	cout << "Customer's Name: " << customerName << '\n';
	cout << "------------------------------------------------------------\n";
	cout << setw(30) << left << "Item Dscpt" << setw(10) << left << "Qty." << setw(10) << right  << "Price\n";
	
	for(int i{}; i < 12; i++)
	{
		if(quantity[i] != 0)
		{
			cout << setw(30) << left <<  items[i] <<  setw(10) << left << quantity[i] << setw(10) << right << itemPrice[i] << '\n';
		}
	}
	
	cout << "\n\n";
	cout << setw(30) << left << "Subtotal" << setw(10) <<   left << quantityTotal << setw( 10) << right << total << '\n';
	cout << setw(40) << left <<  "Amt. tendered" << setw(10) << right << cash << '\n';
	cout << setw(40) << left << "Change" << setw(10) << right << cash - total << '\n';
	cout << "===========================================================\n";
	cout << setw(40) << left << "VATable Sale" << setw(10) << right << total - (total * (10.00 / 100.00)) << '\n';
	cout << setw(40) << left << "VAT Amount" << setw(10) << right << total * ( 10.00 / 100.00) << '\n';
	
	cout << '\n';
	cout << setw(45) << right << "Thank you for shopping with us!\n";
	cout << "Come again to the Blue Blood Shop where we make your fanties come true\n";
	return 0;
}
