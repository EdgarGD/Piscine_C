#include "pong.h"

void ft_draw(short int ballx, short int bally, short int *paddle1y,
             short int *paddle2y, short int player1_count,
             short int player2_count) {
  for (int y = 0; y < HEIGHT; y++) {
    for (int x = 0; x < WIDTH; x++) {
      pad_move(paddle1y, paddle2y);
      if (x == 0 && y == 0)
        printf(ANSI_CYAN "score: %d / %d", player1_count, player2_count);
      else if (y == 1 || y == HEIGHT - 1)
        printf("#");
      else if ((x == 0 || x == WIDTH - 1) && y != 0)
        printf("+");
      else if (x == 1 &&
               (y == *paddle1y || y == *paddle1y - 1 || y == *paddle1y + 1))
        printf("]");
      else if (x == WIDTH - 2 &&
               (y == *paddle2y || y == *paddle2y - 1 || y == *paddle2y + 1))
        printf("[");
      else if (x == ballx && y == bally)
        printf("o");
      else
        printf(" ");
    }
    printf("\n");
  }
  refresh();
  usleep(100000);
  //system("clear");
}