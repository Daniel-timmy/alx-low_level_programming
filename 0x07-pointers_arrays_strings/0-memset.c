#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: array to be written in.
 * @b: the character to be written into the array
 * @n: the number of times b will be written into s
 *
 * Return: returns a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
