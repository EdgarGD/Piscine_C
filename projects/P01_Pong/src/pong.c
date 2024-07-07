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

  while (1) {
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
  return 0;
}