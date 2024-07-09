#include "main.h"

short int cnt_alive(short int matrix[WIDTH][HEIGHT], short int n, short int m) {
  short int count = 0;
  for (short int x = n - 1; x <= n + 1; x++) {
    for (short int y = m - 1; y <= m + 1; y++) {
      if (x == n && y == m)
        continue;
      short int new_x = (x + WIDTH) % WIDTH;
      short int new_y = (y + HEIGHT) % HEIGHT;
      if (matrix[new_x][new_y] == ALIVE)
        count++;
    }
  }
  return count;
}

void is_alive(short int matrix[WIDTH][HEIGHT]) {
  short int matrix_cp[WIDTH][HEIGHT];
  for (short int x = 0; x < WIDTH; x++) {
    for (short int y = 0; y < HEIGHT; y++) {
      matrix_cp[x][y] = matrix[x][y];
    }
  }

  for (short int x = 0; x < WIDTH; x++) {
    for (short int y = 0; y < HEIGHT; y++) {
      short int alive_neighbors = cnt_alive(matrix_cp, x, y);
      if (matrix_cp[x][y] == ALIVE) {
        if (alive_neighbors == 2 || alive_neighbors == 3)
          matrix[x][y] = ALIVE;
        else
          matrix[x][y] = DEAD;
      } else {
        if (alive_neighbors == 3)
          matrix[x][y] = ALIVE;
        else
          matrix[x][y] = DEAD;
      }
    }
  }
}

int is_someone_here(short int matrix[WIDTH][HEIGHT]) {
  int count = 0;
  for (short int x = 0; x < WIDTH; x++) {
    for (short int y = 0; y < HEIGHT; y++) {
      if (matrix[x][y] == ALIVE)
        count++;
    }
  }
  return count;
}