#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first input string
 * @s2: second input string
 *
 * Return: returns a pointer to the
 * newly allocated memory space, returns NULL
 * on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;

	ptr = (char *)malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		*(ptr + k) = *(s1 + k);

	l = j;

	for (j = 0; j <= l; k++, j++)
		*(ptr + k) = *(s2 + j);

	return (ptr);
}
