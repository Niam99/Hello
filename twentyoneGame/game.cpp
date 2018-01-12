#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned)time(0));  // to make random number unpredictable

   int playercard1 = (rand() % 11) + 1;
   int playercard2 = (rand() % 11) + 1;
   int cpucard1 = (rand() % 11) + 1;
   int cpucard2 = (rand() % 11) + 1;
   int playertotal = playercard1 + playercard2;
   int cputotal = cpucard1 + cpucard2;
   int playerwin;
   int cpuwin;
   bool repeat = true;

   std::cout << "Your cards are" << std::endl;
   std::cout << playercard1 << std::endl;
   std::cout << playercard2 << std::endl;
   std::cout << "Your total is:" << std::endl;
   std::cout << playertotal << std::endl;
   /* std::cout << "The CPU's cards are" << std::endl;
   std::cout << cpucard1 << std::endl;
   std::cout << cpucard2 << std::endl;
   std::cout << "The CPU's total is" << std::endl;
   std::cout << cputotal << std::endl;*/

   while (repeat == true)
   {
       std::cout << "Do you want another card? 1-Y/2-N " << std::endl;
       int hit;
       std::cin >> hit;
       if (hit == 1)
       {
           playertotal = playertotal + ((rand() % 11) + 1);
           std::cout << "Your new total:" << std::endl;
           std::cout << playertotal << std::endl;
       }

       if (hit == 2)
       {
           repeat = false;
       }
   }

   std::cout << "The CPU's total is:" << std::endl;

   std::cout << cputotal << std::endl;

   playerwin = 21 - playertotal;
   cpuwin = 21 - cputotal;

   if (playerwin > cpuwin)
   {
       std::cout << "CPU wins!" << std::endl;
   }
   if (playerwin < cpuwin)
   {
       std::cout << "YOU WIN" << std::endl;
   }

   return 0;
}
