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

    std::cout << "IF A PLAYER HAS CLEARLY WON, FILL IN THE REST OF THE GRID WITH -" << std::endl;

    std::cout << "    " << square1 << "    |    " << square2 << "    |    " << square3 << std::endl;
    std::cout << "    -----+---------+------" << std::endl;
    std::cout << "    " << square4 << "    |    " << square5 << "    |    " << square6 << std::endl;
    std::cout << "    -----+---------+------" << std::endl;
    std::cout << "    " << square7 << "    |    " << square8 << "    |    " << square9 << std::endl;

    int turnCount = 0;
    int turn = 1;
    char player1Icon = ('X');
    char player2Icon = ('O');
    char currentIcon;
    bool turnValid;

    do
    {
        if (turn == 1)
        {
            currentIcon = player1Icon;
        }
        else
        {
            currentIcon = player2Icon;
        }

        do
        {
            char playerMove;
            std::cout << "It is Player " << turn << " 's turn, choose the position to place your X/O" << std::endl;
            std::cin >> playerMove;
            turnValid = true;

            if (playerMove == '1' && square1 == '1')
            {
                square1 = currentIcon;
                turnCount = turnCount + 1;
            }
            else if (playerMove == '2' && square2 == '2')
            {
                square2 = currentIcon;
                turnCount = turnCount + 1;
            }
            else if (playerMove == '3' && square3 == '3')
            {
                square3 = currentIcon;
                turnCount = turnCount + 1;
            }
            else if (playerMove == '4' && square4 == '4')
            {
                square4 = currentIcon;
                turnCount = turnCount + 1;
            }
            else if (playerMove == '5' && square5 == '5')
            {
                square5 = currentIcon;
                turnCount = turnCount + 1;
            }
            else if (playerMove == '6' && square6 == '6')
            {
                square6 = currentIcon;
                turnCount = turnCount + 1;
            }
            else if (playerMove == '7' && square7 == '7')
            {
                square7 = currentIcon;
                turnCount = turnCount + 1;
            }
            else if (playerMove == '8' && square8 == '8')
            {
                square8 = currentIcon;
                turnCount = turnCount + 1;
            }
            else if (playerMove == '9' && square9 == '9')
            {
                square9 = currentIcon;
                turnCount = turnCount + 1;
            }
            else
            {
                std::cout << "INVALID MOVE, TRY AGAIN U IDIOT" << std::endl;
                turnValid = false;
            }
        } while (turnValid = false);

        std::cout << "    " << square1 << "    |    " << square2 << "    |    " << square3 << std::endl;
        std::cout << "    -----+---------+------" << std::endl;
        std::cout << "    " << square4 << "    |    " << square5 << "    |    " << square6 << std::endl;
        std::cout << "    -----+---------+------" << std::endl;
        std::cout << "    " << square7 << "    |    " << square8 << "    |    " << square9 << std::endl;

        if (turn == 1)
        {
            turn = 0;
        }
        else
        {
            turn = 1;
        }
    } while (turnCount < 9);

    bool GameOver = false;
    char winIcon;

    if (square1 != '1')
    {
        if (square2 == square1 && square3 == square1) {
            GameOver = true;
            winIcon = square1;
        }

        if (square4 == square1 && square7 == square1) {
            GameOver = true;
            winIcon = square1;
        }
    }

    if (square9 != '9')
    {
        if (square3 == square9 && square6 == square9) {
            GameOver = true;
            winIcon = square9;
        }

        if (square7 == square9 && square8 == square9) {
            GameOver = true;
            winIcon = square9;
        }
    }

    if (square5 != '5')
    {
        if (square1 == square5 && square9 == square5) {
            GameOver = true;
            winIcon = square5;
        }

        if (square2 == square5 && square8 == square5) {
            GameOver = true;
            winIcon = square5;
        }

        if (square4 == square5 && square6 == square5)
        {
            GameOver = true;
            winIcon = square5;
        }

        if (square3 == square5 && square7 == square5)
        {
            GameOver = true;
            winIcon = square5;
        }
    }

    if (square1 != '1' && square2 != '2' && square3 != '3' &&
        square4 != '4' && square5 != '5' && square6 != '6' &&
        square7 != '7' && square8 != '8' && square9 != '9' && GameOver == false)
    {
        std::cout << "DRAW!!!!!!" << std::endl;
        exit(0);
    }

    if (GameOver == true)
    {
        std::cout << winIcon << " WINS!!!!" << std::endl;
    }
}
