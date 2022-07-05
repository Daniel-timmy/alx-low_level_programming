#include "main.h"
/**
 * print_to_98 - Prints all natural numbers
 * from a to 98
 *
 * @a: input
 *
 * Return: no return.
 */
void print_to_98(int a)
{
	if (a > 98)
	{
		while (a > 98)
		{
			printf("%d, ", a);
			a--;
		}
	}
	else if (a < 98)
	{
		while (a < 98)
		{
			printf("%d, ", a);
		}
	}
	printf("%d\n", a);
}
