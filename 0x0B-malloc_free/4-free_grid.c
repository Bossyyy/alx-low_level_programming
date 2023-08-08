#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees the memory allocate for the grid
 * previously created by alloc_grid function
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height == 0)
		return;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
