#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @a: input parameter one
 * @b: input parameterr two
 *
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int x;
	int y;

	x = a;
	a = b;
	b = x;
}
