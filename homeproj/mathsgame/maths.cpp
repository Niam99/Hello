#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "level1.hpp"
#include "level2.hpp"
#include "global.hpp"

int main()
{
    srand((unsigned)time(0));

    std::cout << "Maths Game" << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << "Level 1" << std::endl;

    int temp = score;
    level1();

    std::cout << "Your current score is = " << score << std::endl;

    std::cout << "Level 2" << std::endl;
    level2();

     std::cout << "Your current score is now " << score << std::endl;
}
