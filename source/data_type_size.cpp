#include <iostream>

int main(void)
{
	using std::cout;
	
	cout << "The size of int is:\t\t" << sizeof(int) << " bytes\n";
	cout << "The size of short int is:\t" << sizeof(short) << " bytes\n";
	cout << "The size of long int is:\t" << sizeof(long) << " bytes\n";
	cout << "The size of char is:\t\t" << sizeof(char) << " bytes\n";
	cout << "The size of float is:\t\t" << sizeof(float) << " bytes\n";
	cout << "The size of double is:\t\t" << sizeof(double) << " byted\n";
	cout << "The size of bool is:\t\t" << sizeof(bool) << " bytes\n";
	return 0;
}
