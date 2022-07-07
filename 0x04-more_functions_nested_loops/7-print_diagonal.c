#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (i = 0; i < n; i++)
		{
			c = i;
			while (c--)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}