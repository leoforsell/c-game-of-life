#include "life.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
int main(void) {
    /* Aktiveras via make exercise-test. Faller tills #2 är implementerad. */
    for (int n = 0; n <= 8; ++n) {
        assert(life_next_cell(0, n) == (n == 3));
        assert(life_next_cell(1, n) == (n == 2 || n == 3));
    }
    Grid empty, next, original;
    grid_clear(&empty);
    life_step(&empty, &next);
    assert(memcmp(&empty, &next, sizeof empty) == 0);
    Grid single; grid_clear(&single); single.cells[2][2] = 1;
    life_step(&single, &next);
    assert(memcmp(&empty, &next, sizeof empty) == 0);
    Grid block; grid_clear(&block);
    block.cells[1][1] = block.cells[1][2] = block.cells[2][1] = block.cells[2][2] = 1;
    life_step(&block, &next);
    assert(memcmp(&block, &next, sizeof block) == 0);
    Grid blinker; grid_clear(&blinker);
    blinker.cells[2][1] = blinker.cells[2][2] = blinker.cells[2][3] = 1;
    original = blinker;
    life_step(&blinker, &next);
    assert(memcmp(&blinker, &original, sizeof blinker) == 0);
    Grid vertical; grid_clear(&vertical);
    vertical.cells[1][2] = vertical.cells[2][2] = vertical.cells[3][2] = 1;
    assert(memcmp(&next, &vertical, sizeof next) == 0);
    life_step(&next, &blinker);
    assert(memcmp(&blinker, &original, sizeof blinker) == 0);
    Grid corner; grid_clear(&corner);
    corner.cells[0][0] = corner.cells[0][1] = corner.cells[1][0] = 1;
    assert(life_neighbors(&corner, 0, 0) == 2);
    assert(life_neighbors(&corner, 1, 1) == 3);
    puts("life rules: OK");
    return 0;
}
