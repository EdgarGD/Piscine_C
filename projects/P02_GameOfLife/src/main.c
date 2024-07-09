#include "main.h"

int main(void) {
  initscr();
  nodelay(stdscr, 1);
  noecho();
  curs_set(0);
  short int matrix[HEIGHT][WIDTH];

  scan_matrix(matrix);
  while (is_someone_here(matrix) != 0) {
    clear();
    print_matrix(matrix);
    is_alive(matrix);
    usleep(50000);
    refresh();
  }
  endwin();
  return 0;
}