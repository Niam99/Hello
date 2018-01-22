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

    std::cout << "????: " << "WAKE UP KID!!!!!!" << std::endl;
    std::cout << "You: " << "Huh....." << std::endl;
    std::cout << "You get up from bed and look at the man shouting at you..." << std::endl;
    std::cout << "It's Grandpa..... he took you in when you were little..." << std::endl;
    std::cout << "Grandpa: " << "Hey, I need you to go and get some VEGGIES from the FOREST" << std::endl;
    std::cout << "Grandpa: " << "Don't take too long, I need to open up shop soon" << std::endl;
    std::cout << "Grandpa leaves the room..." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "------------- ---------------- -------------- -------------- ----------" << std::endl;
    std::cout << "You put on your boots and exit the house..." << std::endl;
    std::cout << "Where do you want to go? town / forest" << std::endl;

}
