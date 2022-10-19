#include <iostream>

constexpr int arrSize{ 10 };

void maxMin( int a[], int n, int* max, int* min);

int main()
{
	int b[arrSize]{}, max{}, min{};
	
	std::cout << "Enter " << arrSize << " numbers: ";
	for(int i = 0; i < arrSize; i++)
		std::cin >> b[i];
		
	maxMin(b, arrSize, &max, &min);
	
	std::cout << "Largest: " << max << '\n';
	std::cout << "Smallest: " << min << '\n';
}

void maxMin( int a[], int n, int* max, int* min)
{
	int i{};
	
	*max = *min = a[i];
	
	for(i = 1; i < n; i++)
	{
		if(a[i] > *max)
			*max = a[i];
		else if(a[i] < *min)
			*min = a[i];
	}
		
}
