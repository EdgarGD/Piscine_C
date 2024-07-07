#include "pong.h"

int main(void) {
  initscr();
  // cbreak();
  nodelay(stdscr, 1);
  noecho();
  curs_set(0);

  short int ballx = WIDTH / 2;
  short int bally = HEIGHT / 2;
  short int pad1y = HEIGHT / 2;
  short int pad2y = pad1y;
  short int p1_count = 0;
  short int p2_count = 0;
  short int y_counter = 0;
  short int x_counter = 0;
  char *filename = "player1.txt";
  char *filename2 = "player2.txt";
  FILE *fptr = NULL;

  while (p2_count < 10 || p1_count < 10) {
    clear();
    ft_ball(&bally, &ballx, &y_counter, &x_counter, pad1y, pad2y, &p1_count,
            &p2_count);
    ft_draw(ballx, bally, pad1y, pad2y, p1_count, p2_count);
    pad_move(&pad1y, &pad2y);
    flushinp();
    usleep(70000);
    refresh();
  }
  endwin();

  if (p1_count == 10) {
    if ((fptr = fopen(filename, "r")) == NULL) {
      fprintf(stderr, "error opening %s\n", filename);
      return 1;
    }
    print_image(fptr);
  }

  if (p2_count == 10) {
    if ((fptr = fopen(filename2, "r")) == NULL) {
      fprintf(stderr, "error opening %s\n", filename);
      return 1;
    }
    print_image(fptr);
  }

  fclose(fptr);
  return 0;
}