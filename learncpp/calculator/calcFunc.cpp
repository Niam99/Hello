#include <iostream>

int calcFunc()
{
    int value1;
    int value2;
    int op;

    std::cout << "please enter the first number" << std::endl;
    std::cin >> value1;
    std::cout << "please enter the second number" << std::endl;
    std::cin >> value2;
    std::cout << "please enter the number of the operator you which to use 1.+, 2.-, 3.*, 4./ " << std::endl;
    std::cin >> op;

    if (op == 1)
    {
        std::cout << value1 + value2 << std::endl;
    }
    if (op == 2)
    {
        std::cout << value1 - value2 << std::endl;
    }
    if (op == 3)
    {
        std::cout << value1 * value2 << std::endl;
    }
    if (op == 4)
    {
        std::cout << value1 / value2 << std::endl;
    }
    return 0;

}
