#include <iostream>
#include <string>
#include "tutorial.hpp"

class Player {
public:
    std::string name;
    int health;
    int str;
    int intel;
    int dex;
    int XP;
};


int main()
{
    // tutorial();

    Player player1;
    player1.health = 100;
    player1.str = 0;
    player1.intel = 0;
    player1.dex = 0;
    player1.XP = 0;

    std::cout << "Hey, you!" << std::endl;
    std::cout << "What is your name?" << std::endl;
    std::cin >> player1.name;
    std::cout << "Hello, " << player1.name << std::endl;

    bool statSet = false;

    do
    {
        int totalPoints = 20;
        std::cout << "You have 20 points, spread them over strength, intelligence and dexterity." << std::endl;
        std::cout << "Strength... Input the amount you wish to allocate" << std::endl;
        std::cin >> player1.str;
        totalPoints = totalPoints - player1.str;
        std::cout << "Total points: " << totalPoints << std::endl;
        std::cout << "Intelligence... Input the amount you wish to allocate" << std::endl;
        std::cin >> player1.intel;
        totalPoints = totalPoints - player1.intel;
        std::cout << "Total points: " << totalPoints << std::endl;
        std::cout << "Dexterity... Input the amount you wish to allocate" << std::endl;
        std::cin >> player1.dex;
        totalPoints = totalPoints - player1.dex;
        std::cout << "Total points: " << totalPoints << std::endl;

        if (totalPoints == 0)
        {
            statSet = true;
            std::cout << "Your stats are set" << std::endl;
        }
        else
        {
            std::cout << "TRY AGAIN" << std::endl;
        }
    } while (statSet == false);
}
