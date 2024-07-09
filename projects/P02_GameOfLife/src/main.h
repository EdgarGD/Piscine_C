#ifndef MAIN_H
#define MAIN_H

#include <ncurses.h>
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

#define HEIGHT 3
#define WIDTH 3
#define ALIVE 1
#define DEAD 0

void scan_matrix(short int matrix[WIDTH][HEIGHT]);
short int cnt_alive(short int matrix[WIDTH][HEIGHT], short int n, short int m,
                    short int count);
void is_alive(short int matrix[WIDTH][HEIGHT]);
void print_matrix(short int matrix[WIDTH][HEIGHT]);
int is_someone_here(short int matrix[WIDTH][HEIGHT]);

#endif