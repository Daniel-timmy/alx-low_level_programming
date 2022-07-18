#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: string input
 * @c: character
 *
 * Return: Returns a pointer to the first
 * occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	int j = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			j++;
		i++;
	}
	if (j > 0)
	{
		i = 0;
		while (*(s + i) != '\0')
		{
			if (*(s + i) == c)
				return (s + i);
			i++;
		}
	}
	return ('\0');
}
