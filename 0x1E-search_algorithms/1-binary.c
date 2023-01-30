#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 *
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: returns the index where the value is found
 * otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int m, l, r;
	int x;

	l = 0;
	r = (int)size - 1;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		m = (l + r) / 2;

		printf("Searching in array: ");
		for (x = l; x <= r; x++)
			printf("%i%s", array[x], x == r ? "\n" : ", ");

		if (array[m] > value)
			r = m - 1;
		if (array[m] < value)
			l = m + 1;
		else
			return (m);
	}

	return (-1);
}
