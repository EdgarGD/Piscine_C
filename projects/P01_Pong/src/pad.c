#include "pong.h"

void pad_move(short int *pad1y, short int *pad2y) {
  char c = getch();
  if (c == 'z' && *pad1y != HEIGHT - 3)
    (*pad1y)++;
  else if (c == 'x' && *pad1y != 3)
    (*pad1y)--;
  else if (c == 'n' && *pad2y != HEIGHT - 3)
    (*pad2y)++;
  else if (c == 'm' && *pad2y != 3)
    (*pad2y)--;
}