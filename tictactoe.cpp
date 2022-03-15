#include <iostream>
#include <string>
#include "board.h"

char squares[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int winCondition(char square1, char square2, char square3);
int checkWin();

int main()
{
    drawBoard(squares);
    int player = 1;
    int choice;
    int winCondition;
    char mark;

    do
    {
        std::cout << "Player " << player << " choose your position"
                  << ": ";
        std::cin >> choice;
        mark = player == 1 ? 'X' : 'O';
        if (squares[int(choice)] != 'O' && squares[int(choice)] != 'X' && int(choice) < 10 && int(choice) > 0)
        {
            squares[int(choice)] = mark;
        }
        else
        {
            std::cout << "illegal move" << std::endl;
            std::cin.ignore();
            std::cin.get();
            player = player == 1 ? 2 : 1;
        }

        player = player == 1 ? 2 : 1;
        winCondition = checkWin();
        drawBoard(squares);
    } while (winCondition == -1);

    std::cout << "player " << winCondition << " wins";

    return 0;
}

int checkWin()
{
    if (winCondition(squares[1], squares[2], squares[3]))
    {
        return squares[2] == 'X' ? 1 : 2;
    }
    else if (winCondition(squares[4], squares[5], squares[6]))
    {
        return squares[5] == 'X' ? 1 : 2;
    }
    else if (winCondition(squares[7], squares[8], squares[9]))
    {
        return squares[8] == 'X' ? 1 : 2;
    }
    else if (winCondition(squares[1], squares[5], squares[9]))
    {
        return squares[5] == 'X' ? 1 : 2;
    }
    else if (winCondition(squares[3], squares[5], squares[7]))
    {
        return squares[5] == 'X' ? 1 : 2;
    }
    else if (winCondition(squares[1], squares[4], squares[7]))
    {
        return squares[4] == 'X' ? 1 : 2;
    }
    else if (winCondition(squares[2], squares[5], squares[8]))
    {
        return squares[5] == 'X' ? 1 : 2;
    }
    else if (winCondition(squares[3], squares[6], squares[9]))
    {
        return squares[6] == 'X' ? 1 : 2;
    }

    return -1;
}

int winCondition(char square1, char square2, char square3)
{
    if ((square1 == square2) && (square2 == square3))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}