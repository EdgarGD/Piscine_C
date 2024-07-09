#include "gol.h"

short int cnt_alive(short int matrix[WIDTH][HEIGHT], short int n, short int m,
                    short int count) {
  int x = 0;
  int y = 0;

  for (short int x = n - 1; x <= n + 1; x++) {
    for (int y = m - 1; y <= m + 1; y++) {
      if (matrix[x][y] == ALIVE)
        count++;
    }
  }

  return count;
}

void is_alive(short int matrix[WIDTH][HEIGHT]) {
  int count = 0;
  for (short int x; x < WIDTH; x++) {
    for (short int y; y < HEIGHT; y++) {
      if (cnt_alive(matrix, x, y, count) == 2)
        matrix[x][y] = ALIVE;
      else if (cnt_alive(matrix, x, y, count) < 2)
        matrix[x][y] = DEAD;
      else if (cnt_alive(matrix, x, y, count) > 2)
        matrix[x][y] = DEAD;
      else
        matrix[x][y] = DEAD;
    }
  }
}

void scan_matrix(short int matrix[WIDTH][HEIGHT]) {
  for (short int x; x < WIDTH; x++) {
    for (short int y; y < HEIGHT; y++) {
      scanf("%d", matrix[x][y]);
    }
  }
}

void print_matrix(short int matrix[WIDTH][HEIGHT]) {
  for (short int x; x < WIDTH; x++) {
    for (short int y; y < HEIGHT; y++) {
      printf("%d", matrix[x][y]);
    }
  }
}