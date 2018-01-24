#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
    bool playGame = true;

    do
    {
        srand((unsigned)time(0));

        int pcards [6];
        pcards[0] = (rand() % 11) + 1;
        pcards[1] = (rand() % 11) + 1;
        pcards[2] = (rand() % 11) + 1;
        pcards[3] = (rand() % 11) + 1;
        pcards[4] = (rand() % 11) + 1;
        pcards[5] = (rand() % 11) + 1;
        pcards[6] = (rand() % 11) + 1;
        int ptotal = pcards[0] + pcards[1];
        int pcount = 2;

        int cpucards [6];
        cpucards[0] = (rand() % 11) + 1;
        cpucards[1] = (rand() % 11) + 1;
        cpucards[2] = (rand() % 11) + 1;
        cpucards[3] = (rand() % 11) + 1;
        cpucards[4] = (rand() % 11) + 1;
        cpucards[5] = (rand() % 11) + 1;
        cpucards[6] = (rand() % 11) + 1;
        int cputotal = cpucards[0] + cpucards[1];
        int cpudraw = 0;

        std::cout << "You pick 2 cards, they are: " << std::endl;
        std::cout << "|" << pcards[0] << "|" << pcards[1] << "|" << " = " << ptotal << std::endl;
        std::cout << std::endl;
        std::cout << "The CPU picks 2 cards: " << std::endl;
        std::cout << "|?|?| = ?" << std::endl;

        bool repeat = true;

        while (repeat == true)
        {
            std::cout << std::endl;
            std::cout << "Do you want another card? yes/no " << std::endl;
            std::string hit;
            std::cin >> hit;
            if (hit == "yes")
            {
                std::cout << "You pick another card, it is " << pcards[pcount + 1] << std::endl;
                ptotal = ptotal + pcards[pcount + 1];
                pcount = pcount + 1;
                std::cout << "Your new total is: " << ptotal << std::endl;
                std::cout << std::endl;
            }

            if (hit == "no")
            {
                repeat = false;
            }
        }

        if (cputotal < 21)
        {
            cputotal = cputotal + cpucards[2];
            cpudraw += 1;
        }

        if (cputotal < 21)
        {
            cputotal = cputotal + cpucards[3];
            cpudraw += 1;
        }

        if (cputotal < 18)
        {
            cputotal = cputotal + cpucards[4];
            cpudraw += 1;
        }

        std::cout << "---------------------------------------" << std::endl;
        std::cout << "Your final total is " << ptotal << std::endl;
        std::cout << "The CPU's hit " << cpudraw << " times." << std::endl;
        std::cout << "The CPU's total is " << cputotal << std::endl;

        int pWinNum;
        int cpuWinNum;

        if (ptotal < 21)
        {
            pWinNum = 21 - ptotal;
        }
        if (ptotal > 21)
        {
            pWinNum = ptotal - 21;
        }

        if (cputotal < 21)
        {
            cpuWinNum = 21 - cputotal;
        }
        if (cputotal > 21)
        {
            cpuWinNum = cputotal - 21;
        }

        if (pWinNum > cpuWinNum || cputotal == 21)
        {
            std::cout << "CPU wins!" << std::endl;
        }
        if (pWinNum < cpuWinNum || ptotal == 21)
        {
            std::cout << "YOU WIN" << std::endl;
        }
        std::string playAgain;
        std::cout << "Play Again? yes/no" << std::endl;
        std::cin >> playAgain;

        if (playAgain == "yes")
        {
            std::cout << "RESTARTING" << std::endl;
        }

        if (playAgain == "no")
        {
            std::cout << "THANKS FOR PLAYING" << std::endl;
            playGame = false;
        }
    } while (playGame == true);
}
