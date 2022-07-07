#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * @c: integer input
 *
 * Return: Returns 1 if c is a digit otherwise returns 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
