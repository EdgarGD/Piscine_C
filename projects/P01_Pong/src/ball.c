#include "pong.h"

void ft_ball(short int *bally, short int *ballx, short int *y_counter,
             short int *x_counter, short int paddle1y, short int paddle2y,
             short int *p1_count, short int *p2_count) {

  if (*bally == HEIGHT - 2)
    *y_counter = 1;
  else if (*bally == 2)
    *y_counter = 0;

  if (*ballx == WIDTH - 2) {
    *x_counter = 1;
    (*p1_count)++;
  } else if (*ballx == WIDTH - 3 &&
             (*bally == paddle2y || *bally == paddle2y - 1 ||
              *bally == paddle2y + 1))
    *x_counter = 1;

  if (*ballx == 1) {
    *x_counter = 0;
    (*p2_count)++;
  } else if (*ballx == 2 && (*bally == paddle1y || *bally == paddle1y - 1 ||
                             *bally == paddle1y + 1))
    *x_counter = 0;

  if (*y_counter == 1)
    (*bally)--;

  if (*x_counter == 1)
    (*ballx)--;

  if (*y_counter == 0)
    (*bally)++;

  if (*x_counter == 0)
    (*ballx)++;
}