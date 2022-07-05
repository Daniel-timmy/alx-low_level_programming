#include "main.h"
/**
 * print_last_digit -> prints the last digit of a given number
 *
 * @n: integer number given as input
 *
 * Return: last digit
 */
int print_last_digit(int)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		_putchar(-last + '0');
		return (-l);
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
}
