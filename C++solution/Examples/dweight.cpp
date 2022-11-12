// Computes the dimensional weight of a 12" x 10" x 8" box

#include <iostream>

int main()
{
    int height{};
    int length{};
    int width{};
    int volume{};
    int weight{};

    height = 8;
    length = 12;
    width = 10;

    volume = height * length * width;
    weight = (volume + 165) / 166;

    std::cout << "Dimensions: x" << length << 'x' << width << 'x' << height << '\n';
    std::cout << "Volume (cubic inches): " << volume << '\n';
    std::cout << "Dimensional weight (pounds): " << weight << '\n';

    return 0;
}
