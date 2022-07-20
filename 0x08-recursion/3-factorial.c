#include "main.h"
/**
 * factorial - function that returns the
 * factorial of a given number.
 * @n: input integer
 *
 * Return: return -1 If n is lower than 0
 * otherwise returns the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
