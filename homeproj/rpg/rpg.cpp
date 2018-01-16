#include <iostream>
#include <string>

class Character {
public:
    int health;
    int stamina;
    int attack;
};


int main()
{
    bool fight = false;
    Character player;
    Character enemy1;
    Character boss;

    player.health = 100;
    player.stamina = 5;
    player.attack = 25;
    enemy1.health = 50;
    enemy1.stamina = 3;
    enemy1.attack = 10;
    boss.health = 150;
    boss.stamina = 5;
    boss.attack = 30;

    std::cout << "What is your name?" << std::endl;
    std::string pname;
    std::cin >> pname;

    std::cout << "Hello " << pname << std::endl;
    std::cout << "HP: " << player.health << std::endl;
    std::cout << "ST: " << player.stamina << std::endl;
    std::cout << "The game will begin now" << std::endl;

    std::cout << "You are walking through a dark woods..." << std::endl;
    std::cout << "You come across a crossroad..." << std::endl;
    std::cout << "Do you want to take the leftpath / rightpath " << std::endl;
    std::cout << "" << std::endl;
    std::string choice1;
    std::cin >> choice1;

    if (choice1 == "leftpath")
    {
        std::cout << "You walk down the left path" << std::endl;
        std::cout << "As you walk, you see something in the corner of your eye" <<std::endl;
        std::cout << "A monster jumps out at you!!!!!" << std::endl;
        std::cout << "Luckily, you saw it coming and dodge the attack." << std::endl;
        std::cout << "(Dodging that attack cost 1 stamina)" << std::endl;
        std::cout << "HP: " << player.health << " ST: " << player.stamina << std::endl;
        std::cout << "The enemy is ready to fight" << std::endl;

        fight = true;

        do
        {
            std::cout << "What are you going to do?" << std::endl;
            std::cout << "fight / run " << std::endl;
            std::string fightchoice;
            std::cin >> fightchoice;

            if (fightchoice == "fight")
            {
                std::cout << "enemy HP: " << enemy1.health << std::endl;
                std::cout << "You punched the monster in the face" << std::endl;
                std::cout << "You dealt " << player.attack << " dmg" << std::endl;
                enemy1.health = enemy1.health - player.attack;
                std::cout << "enemy HP: " << enemy1.health << std::endl;
                std::cout << "The enemy strikes back!!" << std::endl;
                std::cout << "You lose " << enemy1.attack << " HP" << std::endl;
                player.health = player.health - enemy1.attack;

            }

            if (fightchoice == "run")
            {
                std::cout << "You look for a way to escape.." << std::endl;
                std:: cout << "There is nowhere to run, you have to fight!" << std::endl;
            }

            if (enemy1.health == 0)
            {
                    std::cout << "YOU DEFEATED THE MONSTER!!!" << std::endl;
                    fight = false;
            }

        } while (fight == true);
    }

}
