#include "pong.h"

void pad_move(short int *pad1y, short int *pad2y) {
  char c = getch();
  if (c == 'z')
    *pad1y++;
  else if (c == 'x')
    *pad1y--;
}

