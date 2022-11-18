/* Write a program that reads an integer entered by the user and
 * display it in octal(base 8):
 * Enter a number between 0 and 32767: 1953
 * In octal, your number is: 03641
 */
#include <iostream>
#include <format>

int main()
{
	int num{};
	std::cout << "Enter a number between 0 and 32767: ";
	std::cin >> num;

	std::cout << "In octal, your number is: " << 0;

            
  
    int remainder{};
        int octal{}, i{ 1 };

        while (num != 0) 
        {
            
            remainder = num % 8; 
            num = num / 8; 
            octal = octal + (remainder * i);
          
            i = i * 10;
        }

    std::cout << std::format("{}\n", octal);
	std::cout << '\n';
	return 0;
}
