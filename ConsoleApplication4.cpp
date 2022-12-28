#include <iostream>
#include <fstream>

int main()
{
    std::ifstream fin("input.txt");

    int arr[6] = { 1, 2, 3, 4, 5, 6 };

    int a, b, c;
    fin >> a >> b >> c;
    if (a >= 0 && a < 6) {
        std::cout << arr[a] << std::endl;
    }
    if (b >= 0 && b < 6) {
        std::cout << arr[b] << std::endl;
    }
    if (c >= 0 && c < 6) {
        std::cout << arr[c] << std::endl;
    }
}