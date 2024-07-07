#include "pong.h"

void ft_ball(short int *bally, short int *ballx) {
  short int x_counter = 0;
  short int y_counter = 0;
  if (*bally == HEIGHT - 2)
    y_counter++;
  else if (*bally == 3)
    y_counter--;

  if (*ballx == WIDTH - 2)
    x_counter++;
  else if (*ballx == 3)
    x_counter--;

  if (x_counter == 1)
    (*ballx)--;
  else if (x_counter == 0)
    (*ballx)++;

  if (y_counter == 1)
    (*bally)++;
  else if (y_counter == 0)
    (*bally)--;
}