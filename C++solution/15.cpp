#include <iostream>
#include <format>

int main()
{
	int i1{}, i2{}, i3{}, i4{}, 
		i5{}, i6{}, i7{}, i8{},
		j1{}, j2{}, j3{}, j4{}, 
		j5{}, j6{}, j7{}, j8{};

	std::cout << "Enter the numbers from 1 to 16 in any order: ";
	std::cin >> i1 >> i2 >> i3 >> i4 >> i5 >> i6 >> i7 >> i8
		>> j1 >> j2 >> j3 >> j4 >> j5 >> j6 >> j7 >> j8;

	int rowSums{ i1 + i2 + i3 + i4 };
	std::cout << "Rows sums:";
	std::cout << std::format(" {}", rowSums);
	rowSums = i5 + i6 + i7 + i8;
	std::cout << std::format(" {}", rowSums);
	rowSums = j1 + j2 + j3 + j4;
	std::cout << std::format(" {}", rowSums);
	rowSums = j5 + j6 + j7 + j8;
	std::cout << std::format(" {}\n", rowSums);

	int colSums{ i1 + i5 + j1 + j5 };
	std::cout << "Column sums:";
	std::cout << std::format(" {}", colSums);
	colSums = i2 + i6 + j2 + j6;
	std::cout << std::format(" {}", colSums);
	colSums = i3 + i7 + j3 + j7;
	std::cout << std::format(" {}", colSums);
	colSums = i4 + i8 + j4 + j8;
	std::cout << std::format(" {}\n", colSums);

	int diagonalSums{ i1 + i6 + j3 + j8 };
	std::cout << "Diagonal sums:";
	std::cout << std::format(" {}", diagonalSums);
	diagonalSums = j5 + j2 + i7 + i4;
	std::cout << std::format(" {}\n", diagonalSums);

	return 0;
}
