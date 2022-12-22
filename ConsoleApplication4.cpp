#include <iostream>
#include <fstream>

int main()
{
    std::ifstream fin("input.txt");
    if (!fin) {
        std::cout << "Input error" << std::endl;
    }

    int arr[6] = { 1, 2, 3, 4, 5, 6 };

    int a, b, c;
    fin >> a >> b >> c;
    if (a < 6) {
        std::cout << arr[a] << std::endl;
    }
    if (b < 6) {
        std::cout << arr[b] << std::endl;
    }
    if (c < 6) {
        std::cout << arr[c] << std::endl;
    }
    else
        std::cout << "wrong size" << std::endl;
    return 0;
}