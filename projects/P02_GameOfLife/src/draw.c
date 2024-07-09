#include "main.h"

void print_matrix(short int matrix[WIDTH][HEIGHT]) {
  start_color();
  init_pair(1, COLOR_CYAN, COLOR_BLACK);
  attron(COLOR_PAIR(1));
  for (short int x = 0; x < WIDTH; x++) {
    for (short int y = 0; y < HEIGHT; y++) {
      if (matrix[x][y] == DEAD)
        printw(" ");
      else
        printw("%d", matrix[x][y]);
    }
    printw("\n");
  }
}