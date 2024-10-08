#ifndef PONG_H
#define PONG_H

#define _XOPEN_SOURCE 600
#define _POSIX_C_SOURCE 200112L
#define MAX_LEN 128

#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// #include <time.h>

#define WIDTH 80
#define HEIGHT 25
#define ANSI_CYAN "\x1b[36m"
void ft_ball(short int *bally, short int *ballx, short int *y_counter,
             short int *x_counter, short int paddle1y, short int paddle2y,
             short int *p1_count, short int *p2_count);
void pad_move(short int *pad1y, short int *pad2y);
void ft_draw(short int ballx, short int bally, short int paddle1y,
             short int paddle2y, short int player1_count,
             short int player2_count);
void print_image(FILE *fptr);
#endif