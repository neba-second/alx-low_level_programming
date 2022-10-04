#include "main.h"

/**
 * free_grid - frees a two dimensional array
 * @height: the row of the array
 * @grid: pointer to memory location
 */
void free_grid(int **grid, int height)
{
	int j;

		for (j = 0; j < height; j++)
			free(grid[j]);
		free(grid);
}
