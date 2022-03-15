#include <iostream>

void clearBoard();

void drawBoard(char squares[10])
{
  clearBoard();
  std::cout << "\n\n TIC TAC TOE\n\n";

  std::cout << "player 1 (x) - player 2 (o)";
  std::cout << std::endl
            << std::endl;

  std::cout << "     |     |     " << std::endl;
  std::cout << "  " << squares[1] << "  |  " << squares[2] << "  |  " << squares[3] << std::endl;
  ;
  std::cout << "_____|_____|_____" << std::endl;
  std::cout << "     |     |   " << std::endl;
  std::cout << "  " << squares[4] << "  |  " << squares[5] << "  |  " << squares[6] << std::endl;
  std::cout << "_____|_____|_____" << std::endl;
  std::cout << "     |     |   " << std::endl;
  std::cout << "  " << squares[7] << "  |  " << squares[8] << "  |  " << squares[9] << std::endl;
  std::cout << "     |     |   " << std::endl;
  std::cout << std::endl
            << std::endl;
}

void clearBoard()
{
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}