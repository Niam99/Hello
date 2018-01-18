#include <iostream>

int main()
{
    char input;
    char alphabet = 'A';

    std::cout << "Enter the last letter you want to see: ";
    std::cin >> input;

    for(int i = 1; i <= (input-'A'+1); ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            std::cout << alphabet << " ";
        }
        ++alphabet;

        std::cout << std::endl;
    }
    return 0;
}
