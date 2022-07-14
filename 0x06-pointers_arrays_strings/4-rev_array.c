#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int *c;

	i = 0;
	j = 0;
	while (*(a + i) != '\0')
	{
		*(c + i) = *(a + i);
		i++;
	}
	i = i - 1;
	while (j < n)
	{
		*(a + j) = *(c + i);
		i--;
		j++;
	}
}
