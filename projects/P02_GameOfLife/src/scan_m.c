#include "main.h"

void scan_matrix(short int matrix[WIDTH][HEIGHT]) {
  for (short int x = 0; x < WIDTH; x++) {
    for (short int y = 0; y < HEIGHT; y++) {
      scanf("%hd", &matrix[x][y]);
    }
  }
}