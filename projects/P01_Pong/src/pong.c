#include "pong.h"

int main(void) {
  initscr();
  cbreak();
  nodelay(stdscr,1);
  noecho();
  curs_set(0);
  short int ballx = WIDTH / 2;
  short int bally = HEIGHT / 2;
  short int pad1y = HEIGHT / 2;
  short int pad2y = pad1y;
  short int p1_count = 10;
  short int p2_count = 12;
  while(1) ft_draw(ballx, bally, &pad1y, &pad2y, p1_count, p2_count);
  endwin();
  return 0;
}