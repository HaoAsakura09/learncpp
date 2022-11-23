/* Write a program that asks the user for a two-digit number, then prints the English word for
 * the number:
 * 
 * Enter a two-digit number: 45
 * you entered the number forty-five.
 * 
 * Hint: Break the number into two digits. Use one switch statement to print the word for the
 * first digit("twenty", "thirty", and so forth). Use a second switch statement to print the word
 * for the second digit. Don't forget that the numbers between 11 and 19 require special
 * treatment.
 */
#include <iostream>

int main()
{
	int number{};
	std::cout << "Enter a two-digit positive number: ";
	std::cin >> number;

	if (number < 0)
	{
		std::cout << "It's a negative number!\n";
		return 0;
	}
	else if (number > 99)
	{
		std::cout << "The number you entered is not a two-digit number!\n";
		return 0;
	}

	if (number <= 10)
	{
		switch (number)
		{
		case 1: std::cout << "one";		break;
		case 2: std::cout << "two";		break;
		case 3: std::cout << "three";	break;
		case 4: std::cout << "four";	break;
		case 5: std::cout << "five";	break;
		case 6: std::cout << "six";		break;
		case 7: std::cout << "seven";	break;
		case 8: std::cout << "eight";	break;
		case 9: std::cout << "nine";	break;
		case 10: std::cout << "ten";	break;
		}
	}
	else if (number <= 19)
	{
		switch (number)
		{
		case 11: std::cout << "eleven";		break;
		case 12: std::cout << "twelve";		break;
		case 13: std::cout << "thriteen";	break;
		case 14: std::cout << "fourteen";	break;
		case 15: std::cout << "fifteen";	break;
		case 16: std::cout << "sixteen";	break;
		case 17: std::cout << "seventeen";	break;
		case 18: std::cout << "eighteen";	break;
		case 19: std::cout << "nineteen";	break;
		}
	}
	else if (number <= 99)
	{
		switch (number / 10)
		{
		case 2: std::cout << "twenty";	break;
		case 3: std::cout << "thirty";	break;
		case 4: std::cout << "fourty";	break;
		case 5: std::cout << "fifty";	break;
		case 6: std::cout << "sixty";	break;
		case 7: std::cout << "seventy"; break;
		case 8: std::cout << "eighty";	break;
		case 9: std::cout << "ninety";	break;
		}
		
		std::cout << '-';

		switch (number % 10)
		{
		case 1: std::cout << "one";		break;
		case 2: std::cout << "two";		break;
		case 3: std::cout << "three";	break;
		case 4: std::cout << "four";	break;
		case 5: std::cout << "five";	break;
		case 6: std::cout << "six";		break;
		case 7: std::cout << "seven";	break;
		case 8: std::cout << "eight";	break;
		case 9: std::cout << "nine";	break;
		case 10: std::cout << "ten";	break;
		}
	}
	return 0;
}
