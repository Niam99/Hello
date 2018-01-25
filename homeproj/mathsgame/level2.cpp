#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "global.hpp"

int level2()
{
    int temp = score;
    for(int i = 1; i <= 10; ++i)
    {
        int num1 = (rand() % 10) + 1;
        int num2 = (rand() % 10) + 1;
        int correctans = num1 * num2;
        int ans;
        std::cout << num1 << " x " << num2 << " = ";
        std::cin >> ans;

        if (ans == correctans)
        {
            score += 1;
            std::cout << "Correct!" << std::endl;
        }
        else
        {
            std::cout << "Wrong!" << std::endl;
            score = score;
        }
        std::cout << std::endl;
    }
}
