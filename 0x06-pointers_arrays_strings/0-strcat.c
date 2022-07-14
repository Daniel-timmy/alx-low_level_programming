#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @src: the input string to be appended
 * @dest: the string being appended to; the resulting string
 *
 * Return: returns a pointer to tge resulting string
 */
char *_strcat(char *dest, char *src)
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (*(dest + c) != '\0')
	{
		c++;
	}
	while (*(src + i) != '\0')
	{
		*(dest + c) = *(src + i);
		i++;
		c++;
	}
	(dest + c) = '\0';
	return (dest);
}
