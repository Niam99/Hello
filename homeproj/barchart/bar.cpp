#include <iostream>
#include <string>

int main()
{
    std::cout << "BAR CHART PROGRAM" << std::endl;
    std::cout << "" << std::endl;
    std::string name1 = "Name1" ;
    std::string name2 = "Name2" ;
    std::string name3 = "Name3" ;
    std::string name4 = "Name4" ;
    std::string name5 = "Name5" ;

    std::string name1length = "";
    std::string name2length = "";
    std::string name3length = "";
    std::string name4length = "";
    std::string name5length = "";

    int var1 = 10;
    int var2 = 20;
    int var3 = 30;
    int var4 = 40;
    int var5 = 50;
    int var6 = 60;
    int var7 = 70;
    int var8 = 80;
    int var9 = 90;
    int var10 = 100;

    std::cout << "NAME - 0      " << "|" << var1 << "|" << var2 << "|" << var3 << "|"
              << var4 << "|" << var5 << "|" << var6 << "|" << var7 << "|"
              << var8 << "|" << var9 << "|" << var10 << "|" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << name1 << "|" << name1length << "|" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << name2 << "|" << name2length << "|" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << name3 << "|" << name3length << "|" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << name4 << "|" << name4length << "|" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << name5 << "|" << name5length << "|" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;

    std::cout << "" << std::endl;
    std::cout << "What would you like to change name 1 to?" << std::endl;
    std::cin >> name1;
    std::cout << "What would you like to change name 2 to?" << std::endl;
    std::cin >> name2;
    std::cout << "What would you like to change name 3 to?" << std::endl;
    std::cin >> name3;
    std::cout << "What would you like to change name 4 to?" << std::endl;
    std::cin >> name4;
    std::cout << "What would you like to change name 5 to?" << std::endl;
    std::cin >> name5;
    std::cout << "" << std::endl;

    std::cout << "NAME - 0       " << "|" << var1 << "|" << var2 << "|" << var3 << "|"
              << var4 << "|" << var5 << "|" << var6 << "|" << var7 << "|"
              << var8 << "|" << var9 << "|" << var10 << "|" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << name1 << "|" << name1length << "|" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << name2 << "|" << name2length << "|" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << name3 << "|" << name3length << "|" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << name4 << "|" << name4length << "|" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << name5 << "|" << name5length << "|" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;

    bool setlength = true;
    std::cout << "" << std::endl;
    std::cout << "Edit the length of bars using === until you are happy with the result" << std::endl;

    do
    {
        std::cout << "Edit the length of " << name1 << std::endl;
        std::cin >> name1length;
        std::cout << "Edit the length of " << name2 << std::endl;
        std::cin >> name2length;
        std::cout << "Edit the length of " << name3 << std::endl;
        std::cin >> name3length;
        std::cout << "Edit the length of " << name4 <<  std::endl;
        std::cin >> name4length;
        std::cout << "Edit the length of " << name5 <<  std::endl;
        std::cin >> name5length;

        std::cout << "NAME - 0       " << "|" << var1 << "|" << var2 << "|" << var3 << "|"
              << var4 << "|" << var5 << "|" << var6 << "|" << var7 << "|"
              << var8 << "|" << var9 << "|" << var10 << "|" << std::endl;
        std::cout << "-----------------------------------------------" << std::endl;
        std::cout << name1 << "|" << name1length << "|" << std::endl;
        std::cout << "-----------------------------------------------" << std::endl;
        std::cout << name2 << "|" << name2length << "|" << std::endl;
        std::cout << "-----------------------------------------------" << std::endl;
        std::cout << name3 << "|" << name3length << "|" << std::endl;
        std::cout << "-----------------------------------------------" << std::endl;
        std::cout << name4 << "|" << name4length << "|" << std::endl;
        std::cout << "-----------------------------------------------" << std::endl;
        std::cout << name5 << "|" << name5length << "|" << std::endl;
        std::cout << "-----------------------------------------------" << std::endl;

        std::cout << "" << std::endl;
        std::cout << "Is this OK?  yes/no";
        std::string userresponse;
        std::cin >> userresponse;

        if (userresponse == "yes")
        {
            setlength = false;
        }
        else
        {
            std::cout << "Ok try again" << std::endl;
        }

    } while (setlength == true);

    std::cout << "" << std::endl;
    std::cout << "Here is your final bar chart: " << std::endl;
    std::cout << "" << std::endl;

     std::cout << "NAME - 0      " << "|" << var1 << "|" << var2 << "|" << var3 << "|"
              << var4 << "|" << var5 << "|" << var6 << "|" << var7 << "|"
              << var8 << "|" << var9 << "|" << var10 << "|" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << name1 << "|" << name1length << "|" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << name2 << "|" << name2length << "|" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << name3 << "|" << name3length << "|" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << name4 << "|" << name4length << "|" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << name5 << "|" << name5length << "|" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
}
