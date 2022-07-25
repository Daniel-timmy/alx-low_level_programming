#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory
 * @str: input string
 *
 * Return: returns a pointer to the duplicated string,
 * returns NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j;

	if (str == NULL)
		return (NULL);
	while (*(str + i))
		i++;

	ptr = (char *)malloc((1 + i) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		ptr[j] = str[j];

	return (ptr);
}
