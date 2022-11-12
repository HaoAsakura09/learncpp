// Computes the dimensional weight of a box from input provided by the user

#include <iostream>

int main()
{
    int height{};
    int length{};
    int width{};
    int volume{};
    int weight{};

    std::cout << "Enter height of box: ";
    std::cin >> height;
    std::cout << "Enter length of box: ";
    std::cin >> length;
    std::cout << "Enter width of box: ";
    std::cin >> width;

    volume = height * length * width;
    weight = (volume + 165) / 166;

    std::cout << "Volume (cubic inches): " << volume << '\n';
    std::cout << "Dimensional weight (pounds): " << weight << '\n';

    return 0;
}
