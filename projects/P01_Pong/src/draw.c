#include "pong.h"

void ft_draw(short int ballx, short int bally, short int paddle1y,
             short int paddle2y, short int player1_count,
             short int player2_count) {
  for (int y = 0; y < HEIGHT; y++) {
    for (int x = 0; x < WIDTH; x++) {
      if (x == 0 && y == 0)
        printw("score: %d / %d", player1_count, player2_count);
      else if (y == 1 || y == HEIGHT - 1)
        printw("#");
      else if ((x == 0 || x == WIDTH - 1) && y != 0)
        printw("+");
      else if (x == 1 &&
               (y == paddle1y || y == paddle1y - 1 || y == paddle1y + 1))
        printw("]");
      else if (x == WIDTH - 2 &&
               (y == paddle2y || y == paddle2y - 1 || y == paddle2y + 1))
        printw("[");
      else if (x == ballx && y == bally)
        printw("o");
      else
        printw(" ");
    }
    printw("\n");
  }
  usleep(100000);
  // system("clear");
}