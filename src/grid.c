#include "life.h"
#include <string.h>
void grid_clear(Grid *grid) { memset(grid->cells, 0, sizeof grid->cells); }
