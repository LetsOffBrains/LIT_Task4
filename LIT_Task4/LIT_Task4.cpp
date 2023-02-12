#include <iostream>

int main()
{
    int n = 1;
    int array[12][10];

    for (int y = 11; y >= 0; --y) {
        for (int x = y % 2 ? 9 : 0; 
            x >= 0 && x < 10; 
            x += y % 2 ? -1 : 1) {
            array[y][x] = n++;
        }
    }

    for (int y = 0; y < 12; ++y) {
        for (int x = 0; x < 10; ++x) {
            std::cout << array[y][x] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}