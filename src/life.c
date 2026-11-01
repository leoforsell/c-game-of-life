#include "life.h"
#include <stdio.h>
#include <stdlib.h>
static void todo(void) {
    fputs("Övning #2 återstår: läs docs/START_HERE.md\n", stderr);
    exit(EXIT_FAILURE);
}
int life_next_cell(int alive, int neighbors) {
    (void)alive; (void)neighbors;
    /* TODO #2A: ren funktion för födelse/överlevnad/död. */
    todo(); return 0;
}
int life_neighbors(const Grid *grid, size_t row, size_t col) {
    (void)grid; (void)row; (void)col;
    /* TODO #2B: åtta grannar. Utanför rutnätet = dött.
       Undvik underflow i size_t vid översta/vänstra kanten. */
    todo(); return 0;
}
void life_step(const Grid *current, Grid *next) {
    (void)current; (void)next;
    /* TODO #2C: läs bara current, skriv bara next; olika buffertar krävs. */
    todo();
}
