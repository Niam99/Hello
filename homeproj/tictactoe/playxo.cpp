#include <iostream>

int main()
{
    char square1('1');
    char square2('2');
    char square3('3');
    char square4('4');
    char square5('5');
    char square6('6');
    char square7('7');
    char square8('8');
    char square9('9');

    std::cout << "    " << square1 << "    |    " << square2 << "    |    " << square3 << std::endl;
    std::cout << "    -----+---------+------" << std::endl;
    std::cout << "    " << square4 << "    |    " << square5 << "    |    " << square6 << std::endl;
    std::cout << "    -----+---------+------" << std::endl;
    std::cout << "    " << square7 << "    |    " << square8 << "    |    " << square9 << std::endl;

}
