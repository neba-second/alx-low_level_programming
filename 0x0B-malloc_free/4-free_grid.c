#include "main.h"

/**
 * free_grid - frees a two dimensional array
 * @height: the row of the array
 * @grid: pointer to memory location
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
