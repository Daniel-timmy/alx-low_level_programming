#include "main.h"
#include <main.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, k, sum;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;
	
	if (n >= j)
		n = j;

	sum = n + i;
	sout = malloc(sizeof(char) * (sum + 1));

	if (sout == NULL)
	{
		free(sout);
		return (NULL);
	}

	for (k = 0; k < sum; i++)
	{
		if (k < i)
			sout[k] = s1[k];
		else
			sout[k] = s2[k - i];
	}
	return (sout);
}
