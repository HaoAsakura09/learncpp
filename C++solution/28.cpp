/* Write a progam that finds the largest and smallest of four integers entered by the user.
 * 
 * Enter four integers: 21 43 10 35
 * Largest: 43
 * Smallest: 10
 * Use as few if statements as possible. Hint: Four if statements are sufficient.
 */

#include <iostream>
#include <format>

int main()
{
	int a{}, b{}, c{}, d{};
	int max{}, min{};
	std::cout << "Enter four integers: ";
	std::cin >> a >> b >> c >> d;
	
	if (a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}

	if (c > max && c > d)
		max = c;
    if (d > max && d > c)
		max = d;
	if (c < min && c < d)
		min = c;
	if (d < min && d < c)
		min = d;

	std::cout << "Largest: " << max << '\n';
	std::cout << "Smallest: " << min << '\n';
	return 0;
}
