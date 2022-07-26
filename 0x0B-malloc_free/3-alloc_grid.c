#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2
 * dimensional array of integers.
 *
 * @width: number of columns
 * @height: number of rows
 *
 * Return: returns a pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (height < 1 || width < 1)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
