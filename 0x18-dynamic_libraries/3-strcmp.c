#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns an interger equal to,
 * or greater than, or less than 0.
 */
int _strcmp(char *s1, char *s2)
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (c == 0)
	{
		if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
			break;
		c = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (c);
}
