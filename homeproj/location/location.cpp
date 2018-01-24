#include <iostream>
#include <string>

class location {
public:
    std::string name;
    int distance;
    int travelTime;
};

int main()
{
    location place1;
    location place2;
    location home;
    home.name = "Home";
    home.distance = 0;
    home.travelTime = 0;
    location london;
    london.name = "London";
    london.distance = 40;
    london.travelTime = 60;
    location stevenage;
    stevenage.name = "Stevenage";
    stevenage.distance = 8;
    stevenage.travelTime = 15;
    location luton;
    luton.name = "Luton";
    luton.distance = 10;
    luton.travelTime = 20;

    std::cout << "The places are: " << std::endl;
    std::cout << london.name << std::endl;
    std::cout << stevenage.name << std::endl;
    std::cout << luton.name << std::endl;
    std::cout << std::endl;

    std::cout << "Choose 2 places" << std::endl;
    std::cout << "Your first location: ";
    std::string choice1;
    std::cin >> choice1;
    std::cout << std::endl;

    if (choice1 == london.name)
    {
        place1.name = london.name;
        place1.distance = london.distance;
        place1.travelTime = london.travelTime;
    }

    if (choice1 == stevenage.name)
    {
        place1.name = stevenage.name;
        place1.distance = stevenage.distance;
        place1.travelTime = stevenage.travelTime;
    }

    if (choice1 == luton.name)
    {
        place1.name = luton.name;
        place1.distance = luton.distance;
        place1.travelTime = luton.travelTime;
    }

    std::cout << "Your second location: ";
    std::string choice2;
    std::cin >> choice2;
    std::cout << std::endl;

    if (choice2 == london.name)
    {
        place2.name = london.name;
        place2.distance = london.distance;
        place2.travelTime = london.travelTime;
    }

    if (choice2 == stevenage.name)
    {
        place2.name = stevenage.name;
        place2.distance = stevenage.distance;
        place2.travelTime = stevenage.travelTime;
    }

    if (choice2 == luton.name)
    {
        place2.name = luton.name;
        place2.distance = luton.distance;
        place2.travelTime = luton.travelTime;
    }

    std::cout << "Here are the details of your chosen locations: " << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "Location 1:" << std::endl;
    std::cout << place1.name << std::endl;
    std::cout << place1.distance << " miles (from home)" << std::endl;
    std::cout << place1.travelTime << " mins (from home)" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "Location 2:" << std::endl;
    std::cout << place2.name << std::endl;
    std::cout << place2.distance << " miles (from home)" << std::endl;
    std::cout << place2.travelTime << " mins (from home)" << std::endl;

}
