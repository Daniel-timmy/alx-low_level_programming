#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: array to be searched
 * @size: size fof the array
 * @value: value to be searched
 *
 * Return: return the first index where
 * the result is found, otherwise NULL
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
