#include <iostream>
#include "doubleFunc.hpp"

int main()
{
    int x;
    std::cout << "enter number you wish to double: ";
    std::cin >> x;
    std::cout <<  doublenumber(x) << std::endl;
    return 0;
}
