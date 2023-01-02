#include <iostream>
#include <fstream>

int main()
{
    std::ifstream fin("input.txt");
    if (!fin.is_open()) { 
        std::cout << "error: file is not open!\n";
        return -1;
    }

    int arr[6] = {1, 2, 3, 4, 5, 6};

    int a, b, c;
    fin >> a >> b >> c;
    
    if (a > 6)
        return -1;
    if (b > 6)
        return -1;
    if (c > 6)
        return -1;
    std::cout << arr[a] << std::endl;
    std::cout << arr[b] << std::endl;
    std::cout << arr[c] << std::endl;

}
