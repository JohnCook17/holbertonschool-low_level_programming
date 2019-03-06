#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - allocates an arry of width * height to 0
 * @grid: grid
 * @height: height
 *
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
