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
    int LVL;
};

class Enemy {
public:
    std::string name;
    int health;
    int str;
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
    player1.LVL = 1;


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

    bool correctChoice = false;
    do
    {
        std::string choice;
        std::cout << "Where do you want to go? town / forest" << std::endl;
        std::cin >> choice;
        if (choice == "forest")
        {
            std::cout << "You walk towards the forest" << std::endl;
            correctChoice = true;
        }
        else
        {
            std::cout << "Wait, Grandpa told me to go to the forest!" << std::endl;
        }
    } while (correctChoice == false);

    std::cout << "You enter the forest through a large black gate" << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << "The forest is fairly big, however there aren't too many trees, so it is well lit" << std::endl;
    std::cout << "You walk toward the usual spot, where there are plenty of vegetables..." << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "You reach the usual spot, however there is a  man with a sword inspecting the vegetables!"
              << std::endl;

    Enemy bandit1;
    bandit1.name = "bandit";
    bandit1.health = 20;
    bandit1.str = 5;

    if (player1.intel > 8)
    {
        std::cout << "(intel) You realise that this man is clearly a bandit!!!" << std::endl;
    }

    bool fightState = true;

    do
    {
        std::cout << "What would you like to do???" << std::endl;
        std::cout << "| fight | talk |" << std::endl;
        std::string choice;
        std::cin >> choice;

        if (choice == "fight")
        {
            std::cout << "HP: " << player1.health << std::endl;
            std::cout << "enemy HP: " << bandit1.health << std::endl;
            std::cout << "You attack the " << bandit1.name << " !" << std::endl;
            std::cout << "You dealt " << player1.str << " dmg" << std::endl;
            bandit1.health = bandit1.health - player1.str;
            std::cout << "enemy HP: " << bandit1.health << std::endl;
            std::cout << "The enemy strikes back!" << std::endl;
            std::cout << "You lose " << bandit1.str << " HP" << std::endl;
            player1.health = player1.health - bandit1.str;
            std::cout << "HP: " << player1.health << std::endl;
            std::cout << "----------------------------------------------" << std::endl;
        }

        if (choice == "talk")
        {
            std::cout << "You can't reason with a bandit!!!" << std::endl;
        }

        if (bandit1.health <= 0)
        {
            std::cout << "You defeated the bandit!!" << std::endl;
            std::cout << "The injured bandit runs off" << std::endl;
            std::cout << "You earned 10 XP" << std::endl;
            player1.XP = player1.XP + 10;
            fightState = false;
        }

        if (player1.health <= 0)
        {
            std::cout << "HP: " << player1.health << std::endl;
            std::cout << "You fall to the ground and everything begins to go dark..." << std::endl;
            std::cout << "GAME OVER" << std::endl;
            exit(0);
        }
    } while (fightState == true);

    std::cout << "--------------------------------" << std::endl;
    if (player1.XP == 10)
    {
        std::cout << "LEVEL UP!!" << std::endl;
        std::cout << player1.LVL << " => " << player1.LVL + 1 << std::endl;
        player1.LVL = player1.LVL + 1;
        player1.str = player1.str + 2;
        player1.intel = player1.intel + 2;
        player1.dex = player1.dex + 2;
        std::cout << "strength increased! str: " << player1.str << std::endl;
        std::cout << "intelligence increased! intel: " << player1.intel << std::endl;
        std::cout << "dexterity increased! dex: " << player1.dex << std::endl;
        player1.XP = player1.XP - 10;
    }
    std::cout << "----------------------------------" << std::endl;

    std::cout << "After defeating the bandit, you collect the vegetables." << std::endl;
    std::cout << "You return home" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "Grandpa: What happened to you???!!!" << std::endl;
    std::cout << "You explain what happened..........." << std::endl;
    std::cout << "Grandpa: Bandits huh....better be more careful next time" << std::endl;
    std::cout << "Grandpa: Anyway, go rest!" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "You wake up from your sleep, feeling better" << std::endl;
    player1.health = 100;
    std::cout << "HP: " << player1.health << std::endl;
    std::cout << "------------------------------------" << std::endl;

    std::string location;

    std::cout << "Where do you want to go today? forest / town" << std::endl;
    std::string choiceL;
    std::cin >> choiceL;

    if (choiceL == "forest")
    {
        std::cout << "You go to the forest" << std::endl;
        location = "forest";
    }
    if (choiceL == "town")
    {
        std::cout << "You go to town" << std::endl;
        location = "town";
    }

    if (location == "forest")
    {
        Enemy slime;
        slime.name = "slime";
        slime.health = 25;
        slime.str = 5;

        std::cout << "You explore the forest" << std::endl;
        std::cout << "There is not much here" << std::endl;
        std::cout << "As you leave a slime jumps out at you!!" << std::endl;

        fightState = true;

        do
        {
            std::cout << "What would you like to do???" << std::endl;
            std::cout << "| fight | talk |" << std::endl;
            std::string choice;
            std::cin >> choice;

            if (choice == "fight")
            {
                std::cout << "HP: " << player1.health << std::endl;
                std::cout << "enemy HP: " << slime.health << std::endl;
                std::cout << "You attack the " << slime.name << " !" << std::endl;
                std::cout << "You dealt " << player1.str << " dmg" << std::endl;
                slime.health = slime.health - player1.str;
                std::cout << "enemy HP: " << slime.health << std::endl;
                std::cout << "The enemy strikes back!" << std::endl;
                std::cout << "You lose " << slime.str << " HP" << std::endl;
                player1.health = player1.health - slime.str;
                std::cout << "HP: " << player1.health << std::endl;
                std::cout << "----------------------------------------------" << std::endl;
            }

            if (choice == "talk")
            {
            std::cout << "You can't talk to a slime!!!" << std::endl;
            }

            if (slime.health <= 0)
            {
                std::cout << "You defeated the slime!!" << std::endl;
                std::cout << "The slime dissolves" << std::endl;
                std::cout << "You earned 10 XP" << std::endl;
                player1.XP = player1.XP + 10;
                fightState = false;
            }

            if (player1.health <= 0)
            {
                std::cout << "HP: " << player1.health << std::endl;
                std::cout << "You fall to the ground and everything begins to go dark..." << std::endl;
                std::cout << "GAME OVER" << std::endl;
                exit(0);
            }
        } while (fightState == true);

        std::cout << "--------------------------------" << std::endl;
        if (player1.XP == 10)
        {
            std::cout << "LEVEL UP!!" << std::endl;
            std::cout << player1.LVL << " => " << player1.LVL + 1 << std::endl;
            player1.LVL = player1.LVL + 1;
            player1.str = player1.str + 2;
            player1.intel = player1.intel + 2;
            player1.dex = player1.dex + 2;
            std::cout << "strength increased! str: " << player1.str << std::endl;
            std::cout << "intelligence increased! intel: " << player1.intel << std::endl;
            std::cout << "dexterity increased! dex: " << player1.dex << std::endl;
            player1.XP = player1.XP - 10;
        }
        std::cout << "----------------------------------" << std::endl;
        std::cout << "After that, you leave the forest and head to town" << std::endl;
        location = "town";
    }

    if (location == "town")
    {
        std::cout << "You enter the town, it is fairly busy" << std::endl;
        std::cout << "Man: Hey..You! Have this free bag" << std::endl;
        std::cout << "BAG Aquired - you can now carry things" << std::endl;
    }

    std::string bag[4] = {"apple", "knife", "potion", "armguard"};
    std::cout << "You look inside the bag" << std::endl;
    std::cout << "The bag contains:" << std::endl;

    for (int i = 0; i < 4; i++)
    {
        std::cout << bag[i] << std::endl;
    }

    std::cout << "You inspect the " << bag[3] << std::endl;

}
