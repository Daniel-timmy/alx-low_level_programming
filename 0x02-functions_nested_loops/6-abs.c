#include "main.h"
/**
 * _abs - evaluates the absolut value of a given integer
 *
 * @a: an integer given as input
 *
 * Return: absolute value
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (-1 * a);
	}
	else
	{
		return (a);
	}
}
