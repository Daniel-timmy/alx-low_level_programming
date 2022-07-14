#include "main.h"
/**
 * _strncpy - function that copies a string.
 *
 * @dest: the resulting string
 * @src: the string that would be copied
 * @n: the number of character to be copied
 *
 * Return: returns dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	c = 0;
	while (c < n && (*(src + c) != '\0'))
	{
		*(dest + c) = *(src + c);
		c++;
	}
	while (c < n)
	{
		*(dest + c) = '\0';
		c++;
	}
	return (dest);
}
