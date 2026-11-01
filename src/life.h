#ifndef LIFE_H
#define LIFE_H
#include <stddef.h>
enum { LIFE_ROWS = 5, LIFE_COLS = 5 };
typedef struct { unsigned char cells[LIFE_ROWS][LIFE_COLS]; } Grid;
void grid_clear(Grid *grid);
int life_next_cell(int alive, int neighbors);
int life_neighbors(const Grid *grid, size_t row, size_t col);
void life_step(const Grid *current, Grid *next);
#endif
