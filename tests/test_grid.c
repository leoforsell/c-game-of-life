#include "life.h"
#include <assert.h>
#include <stdio.h>
int main(void) {
    Grid grid;
    for (size_t r = 0; r < LIFE_ROWS; ++r)
        for (size_t c = 0; c < LIFE_COLS; ++c) grid.cells[r][c] = 1;
    grid_clear(&grid);
    for (size_t r = 0; r < LIFE_ROWS; ++r)
        for (size_t c = 0; c < LIFE_COLS; ++c) assert(grid.cells[r][c] == 0);
    puts("grid_clear: OK");
    return 0;
}
