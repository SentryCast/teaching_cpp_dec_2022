#include <iostream>
#include <fstream>

int main()
{
    std::ifstream fin("input.txt");
    // testing commit
    int arr[6] = {1, 2, 3, 4, 5, 6};

    int a, b, c;
    fin >> a >> b >> c;
    std::cout << arr[a] << std::endl;
    std::cout << arr[b] << std::endl;
    std::cout << arr[c] << std::endl;
}