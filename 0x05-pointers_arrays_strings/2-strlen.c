#include "main.h"
/**
 * _strlen -  function that returns the length of a string.
 *
 * @s: string input
 *
 * Return: returns the length of string
 *
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
		count++;
	return (count);
}
