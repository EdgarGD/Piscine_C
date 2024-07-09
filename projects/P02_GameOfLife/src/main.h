#ifndef MAIN_H
#define MAIN_H

#include <ncurses.h>
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

#define HEIGHT 40
#define WIDTH 40
#define ALIVE 1
#define DEAD 0

void scan_matrix(short int matrix[WIDTH][HEIGHT]);
short int cnt_alive(short int matrix[WIDTH][HEIGHT], short int n, short int m);
void is_alive(short int matrix[WIDTH][HEIGHT]);
void print_matrix(short int matrix[WIDTH][HEIGHT]);
int is_someone_here(short int matrix[WIDTH][HEIGHT]);

#endif