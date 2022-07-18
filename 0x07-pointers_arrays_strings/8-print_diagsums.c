#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int i, sumright = 0, sumleft = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sumright += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sumleft += *(a + i);
	}
	printf("%d, %d\n", sumright, sumleft);
}
