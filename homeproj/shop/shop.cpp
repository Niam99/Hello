#include <iostream>
#include <string>

int main()
{
    std:: string apple = "apple";
    double appleP = 0.55;
    std::string crisps = "crisps";
    double crispsP = 1.00;
    std::string water = "water";
    double waterP = 1.25;
    std::string nothing = "nothing";
    int nothingP = 0;
    double totalP = 0;

    std::cout << "What would you like to buy?" << std::endl;
    std::cout << apple << std::endl;
    std::cout << crisps << std::endl;
    std::cout << water << std::endl;
    std::cout << nothing << std::endl;

    std::string item1;
    double item1P;
    std::cin >> item1;

    if (item1 == apple)
    {
        totalP = totalP + appleP;
        item1P = appleP;
    }

    if (item1 == crisps)
    {
        totalP = totalP + crispsP;
        item1P = crispsP;
    }

    if (item1 == water)
    {
        totalP = totalP + waterP;
        item1P = waterP;
    }

    if (item1 == nothing)
    {
        totalP = totalP + nothingP;
        item1P = nothingP;
    }

    std::cout << "What would you like to buy?" << std::endl;
    std::cout << apple << std::endl;
    std::cout << crisps << std::endl;
    std::cout << water << std::endl;
    std::cout << nothing << std::endl;

    std::string item2;
    double item2P;
    std::cin >> item2;

    if (item2 == apple)
    {
        totalP = totalP + appleP;
        item2P = appleP;
    }

    if (item2 == crisps)
    {
        totalP = totalP + crispsP;
        item2P = crispsP;
    }

    if (item2 == water)
    {
        totalP = totalP + waterP;
        item2P = waterP;
    }

    if (item2 == nothing)
    {
        totalP = totalP + nothingP;
        item2P = nothingP;
    }

    std::cout << "What would you like to buy?" << std::endl;
    std::cout << apple << std::endl;
    std::cout << crisps << std::endl;
    std::cout << water << std::endl;
    std::cout << nothing << std::endl;

    std::string item3;
    double item3P;
    std::cin >> item3;

    if (item3 == apple)
    {
        totalP = totalP + appleP;
        item3P = appleP;
    }

    if (item3 == crisps)
    {
        totalP = totalP + crispsP;
        item3P = crispsP;
    }

    if (item3 == water)
    {
        totalP = totalP + waterP;
        item3P = waterP;
    }

    if (item3 == nothing)
    {
        totalP = totalP + nothingP;
        item3P = nothingP;
    }

    std::cout << "Your total is: " << totalP << std::endl;
    std::cout << "Your receipt:" << std::endl;
    std::cout << item1 << " £ " << item1P << std::endl;
    std::cout << item2 << " £ " << item2P << std::endl;
    std::cout << item3 << " £ " << item3P << std::endl;
    std::cout << "TOTAL: £ " << totalP << std::endl;
}
