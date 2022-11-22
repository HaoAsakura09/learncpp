/* Using the switch statement, write a program that converts a numerical grade into a letter
 * grade:
 * Enter a numerical grade: 84
 * Letter grade: B
 * Using the following grading scale: A = 90-100, B = 80-89, C = 70-79, D = 60-69, F = 0-59.
 * Print an error message if the grade is larger than 100 or less than 0. Hint: Break the grade
 * into two digits, then use a switch statement to test the ten's digit.
 */
#include <iostream>

int main()
{
	int grade{};
	std::cout << "Enter numerical grade: ";
	std::cin >> grade;

	if (grade > 100)
		std::cout << "Grade is larger than 100!\n";
	else
	{
		std::cout << "Letter grade: ";
		switch (grade / 10)
		{
		case 1: case 9: 
        std::cout << 'A';	            break;
		case 8: 
        std::cout << 'B';			        break;
		case 7: 
        std::cout << 'C';			        break;
		case 6: 
        std::cout << 'D';			        break;
		case 0: case 5: 
        std::cout << 'F';	            break;
		default: std::cout << "unknown";
		}
		std::cout << '\n';
	}
	return 0;
}
