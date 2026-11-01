#include "life.h"
#include <stdio.h>
int main(void) {
    Grid grid;
    grid_clear(&grid);
    grid.cells[2][1] = 1; grid.cells[2][2] = 1; grid.cells[2][3] = 1;
    puts("Startmönster: blinker (ingen simulering implementerad ännu)");
    for (size_t row = 0; row < LIFE_ROWS; ++row) {
        for (size_t col = 0; col < LIFE_COLS; ++col)
            putchar(grid.cells[row][col] ? '#' : '.');
        putchar('\n');
    }
    return 0;
}
