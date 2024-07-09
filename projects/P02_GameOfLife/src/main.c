#include "main.h"

int main(void) {
  // initscr();
  // nodelay(stdscr, 1);
  // noecho();
  // curs_set(0);
  short int matrix[HEIGHT][WIDTH];

  scan_matrix(matrix);
  while (is_someone_here(matrix) != 0) {
    // clear();
    print_matrix(matrix);
    is_alive(matrix);
    usleep(850000);
    // printf("\e[1;1H\e[2J");
    //  refresh();
  }
  // endwin();
  return 0;
}

short int cnt_alive(short int matrix[WIDTH][HEIGHT], short int n, short int m,
                    short int count) {
  for (short int x = n - 1; x <= n + 1; x++) {
    for (short int y = m - 1; y <= m + 1; y++) {
        short int new_x = (x + WIDTH) % WIDTH;
        short int new_y = (y + HEIGHT) % HEIGHT;
      if (matrix[x][y] == matrix[n][m])
        continue;
      if (matrix[new_x][new_y] == ALIVE)
        count++;
    }
  }
  if (count != 0) printf("COUNT ALIVE NEIGHBOURS %hd\n", count);
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
        
      if (cnt_alive(matrix_cp, x, y, count) == 2 || cnt_alive(matrix_cp, x, y, count) == 3)
            matrix[x][y] = ALIVE;
      else if (cnt_alive(matrix_cp, x, y, count) > 3 ||
               cnt_alive(matrix_cp, x, y, count) < 2)
        matrix[x][y] = DEAD;
    }
  }
}

void scan_matrix(short int matrix[WIDTH][HEIGHT]) {
  for (short int x = 0; x < WIDTH; x++) {
    for (short int y = 0; y < HEIGHT; y++) {
      scanf("%hd", &matrix[x][y]);
    }
  }
}

void print_matrix(short int matrix[WIDTH][HEIGHT]) {
  for (short int x = 0; x < WIDTH; x++) {
    for (short int y = 0; y < HEIGHT; y++) {
      printf("%d", matrix[x][y]);
    }
    printf("\n");
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
  printf("COUNT ALIVE %hd\n", count);
  return count;
}