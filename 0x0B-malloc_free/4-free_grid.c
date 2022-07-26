#include "main.h"
#include <stdlib.h>
/**
 * free_grid  - frees a 2 dimensional grid previously created
 * @grid: 2 dimensional array
 * @height: number of rows
 * Return: returns a pointer
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
