#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "level1.hpp"
#include "level2.hpp"
#include "global.hpp"

int readf()
{
    std::string line;
    std::ifstream myfile ("highscore.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            std::cout << "SCORE-  " << line << '\n';
        }
        myfile.close();
    }
    else std::cout << "Unable to open file";
}

int main()
{
    readf();
    srand((unsigned)time(0));
    std::cout << std::endl;

    std::cout << "Maths Game" << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << "Level 1" << std::endl;

    int temp = score;
    level1();

    std::cout << "Your current score is = " << score << std::endl;

    std::cout << "Level 2" << std::endl;
    level2();

    std::cout << "Your current score is now " << score << std::endl;
    std::cout << "Would you like to save your score? yes/no" << std::endl;
    std::string choice;
    std::cin >> choice;

    if(choice == "yes")
    {
        std::string name;
        std::cout << "Enter your name: ";
        std::cin >> name;
        std::ofstream myfile;
        myfile.open ("highscore.txt");
        myfile << name << ": " << score << std::endl;
        myfile.close();
        std::cout << "Your score has been saved" << std::endl;
    }
    else
    {
        std::cout << "Thanks for playing" << std::endl;
    }
}
