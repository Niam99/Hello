#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "level1.hpp"
#include "global.hpp"

int main()
{
    srand((unsigned)time(0));

    std::cout << "Maths Game" << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << "Level 1" << std::endl;

    int temp = score;
    level1();

    std::cout << "Your final score is = " << score << std::endl;
}
