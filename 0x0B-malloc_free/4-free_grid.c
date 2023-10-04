#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid.
 * @grid: The grid to be freed.
 * @height: The height (number of rows) of the grid.
 *
 * Description: This function takes a pointer to a 2D grid and its height,
 * and it frees the memory allocated for each row and then for the grid itself.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
	return;
	}

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}

	free(grid);
}
